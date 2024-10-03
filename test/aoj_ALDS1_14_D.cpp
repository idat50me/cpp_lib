// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_D

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "string/suffix_array.cpp"

int main() {
	string T;
	int Q;
	vector<string> P;

	cin >> T >> Q;
	P.resize(Q);
	for(int i = 0; i < Q; i++) cin >> P[i];

	vector<int> sa = SuffixArray(T).get_array();

	auto lb = [&](string &s) {
		int ng = -1, ok = T.length();
		while(ok - ng > 1) {
			int mid = (ok + ng) / 2;
			for(int i = 0; i < s.length(); i++) {
				if(sa[mid] + i >= T.length() or s[i] > T[sa[mid] + i]) {
					ng = mid;
					break;
				}
				if(s[i] < T[sa[mid] + i] or i == s.length() - 1) {
					ok = mid;
					break;
				}
			}
		}
		return ok;
	};

	for(int i = 0; i < Q; i++) {
		int sa_idx = lb(P[i]);
		if(sa_idx >= T.length()) {
			cout << 0 << '\n';
			continue;
		}

		int idx = sa[sa_idx];
		if(idx + P[i].length() > T.length()) {
			cout << 0 << '\n';
			continue;
		}

		cout << (P[i] == T.substr(idx, P[i].length()) ? 1 : 0) << '\n';
	}
}
