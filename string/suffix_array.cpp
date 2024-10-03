#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct SuffixArray {
private:
	int N;
	vector<int> si;

public:
	SuffixArray(const string &s) : N(s.size()), si(s.size() + 1) {
		for(int i = 0; i < N; i++) si[i] = s[i];
		si[N] = 0;
	}

private:
	vector<int> induced_sort(const vector<int> &s,
							 const vector<int> &lms_idx,
							 const vector<bool> &ls,
							 const int c_max) {
		const int n = s.size();
		vector<int> c_num(c_max + 1, 0), bucket_top(c_max + 1, 0), bucket_now(c_max + 1);
		for(int c : s) c_num[c]++;
		for(int i = 0; i < c_max; i++) {
			bucket_top[i + 1] = bucket_top[i] + c_num[i];
			bucket_now[i] = bucket_top[i + 1] - 1;
		}
		bucket_now[c_max] = n - 1;

		vector<int> pseudo_sa(n, -1);
		for(int idx : lms_idx) {
			pseudo_sa[bucket_now[s[idx]]--] = idx;
		}

		for(int i = 0; i <= c_max; i++) bucket_now[i] = bucket_top[i];
		for(int i = 0; i < n; i++) {
			if(pseudo_sa[i] <= 0) continue;
			int idx = pseudo_sa[i] - 1;
			if(ls[idx]) continue;
			pseudo_sa[bucket_now[s[idx]]++] = idx;
		}

		for(int i = 0; i < c_max; i++) bucket_now[i] = bucket_top[i + 1] - 1;
		bucket_now[c_max] = n - 1;
		for(int i = n - 1; i >= 0; i--) {
			if(pseudo_sa[i] == 0) continue;
			int idx = pseudo_sa[i] - 1;
			if(not ls[idx]) continue;
			pseudo_sa[bucket_now[s[idx]]--] = idx;
		}

		return pseudo_sa;
	}

	bool same_lms_strings(const vector<int> &s, const vector<bool> &lms, int idx1, int idx2) {
		if(s[idx1++] != s[idx2++]) return false;
		if(max(idx1, idx2) >= lms.size()) return false;
		while(1) {
			if(s[idx1] != s[idx2]) return false;
			if(lms[idx1] and lms[idx2]) return true;
			if(lms[idx1] != lms[idx2]) return false;
			idx1++, idx2++;
		}
	}

	vector<int> sa_is(const vector<int> &s, const int c_max = 127) {
		int n = s.size();
		vector<bool> ls(n, false), lms(n, false);
		vector<int> lms_idx;

		ls[n - 1] = true;

		for(int i = n - 2; i >= 0; i--) {
			if(s[i] < s[i + 1]) {
				ls[i] = true;
			}
			else if(s[i] == s[i + 1]) {
				ls[i] = ls[i + 1];
			}
			else if(ls[i + 1]) {
				lms[i + 1] = true;
				lms_idx.emplace_back(i + 1);
			}
		}

		reverse(lms_idx.begin(), lms_idx.end());
		vector<int> sa = induced_sort(s, lms_idx, ls, c_max);

		vector<int> lms_str_c(n, -1);
		lms_str_c[sa[0]] = 1;
		int counter = 1;
		int prev_lms = 0;
		for(int i = 1; i < n; i++) {
			if(not lms[sa[i]]) continue;
			if(same_lms_strings(s, lms, prev_lms, sa[i])) {
				lms_str_c[sa[i]] = counter;
			}
			else {
				lms_str_c[sa[i]] = ++counter;
			}
			prev_lms = sa[i];
		}

		int lms_n = lms_idx.size();
		vector<int> new_lms_idx(lms_n);
		if(counter == lms_idx.size()) {
			new_lms_idx[0] = sa[0];
			for(int i = n - 1, j = 1; j < lms_n; i--) {
				if(lms[sa[i]]) new_lms_idx[j++] = sa[i];
			}
		}
		else {
			vector<int> new_s(lms_n + 1);
			for(int i = 0; i < lms_n; i++) {
				new_s[i] = lms_str_c[lms_idx[i]];
			}
			new_s[lms_n] = 0;

			vector<int> lms_idx_order = sa_is(new_s, counter);
			lms_idx_order.erase(lms_idx_order.begin());
			for(int i = 0; i < lms_n; i++) new_lms_idx[lms_n - 1 - i] = lms_idx[lms_idx_order[i]];
		}

		return induced_sort(s, new_lms_idx, ls, c_max);
	}

public:
	vector<int> get_array() {
		vector<int> sa = sa_is(si);
		sa.erase(sa.begin());
		return sa;
	}
};
