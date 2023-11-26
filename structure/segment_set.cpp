#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T> struct SegmentSet {
private:
	map<T, T> mp;

public:
	SegmentSet() : mp(){};

	void insert(T x) {
		insert(x, x);
	}
	void insert(T l, T r) {
		assert(l <= r);
		auto itr_l = mp.upper_bound(l), itr_r = mp.upper_bound(r + 1);
		if(itr_l != mp.begin()) {
			if((--itr_l)->second < l - 1) itr_l++;
		}

		if(itr_l != itr_r) {
			l = std::min(l, itr_l->first);
			r = std::max(r, prev(itr_r)->second);
			mp.erase(itr_l, itr_r);
		}

		mp[l] = r;
	}

	void erase(T x) {
		erase(x, x);
	}
	void erase(T l, T r) {
		assert(l <= r);
		auto itr_l = mp.upper_bound(l), itr_r = mp.upper_bound(r);
		if(itr_l != mp.begin()) {
			if((--itr_l)->second < l) itr_l++;
		}

		if(itr_l == itr_r) return;

		T tmp_l = itr_l->first, tmp_r = prev(itr_r)->second;
		mp.erase(itr_l, itr_r);
		if(tmp_l < l) mp[tmp_l] = l - 1;
		if(r < tmp_r) mp[r + 1] = tmp_r;
	}

	pair<T, T> get_seg(T x) {
		auto itr = mp.upper_bound(x);
		if(itr == mp.begin() or (--itr)->second < x) return pair<T, T>(0, -1);
		return pair<T, T>(itr->first, itr->second);
	}

	T min() {
		return mp.begin()->first;
	}

	T max() {
		return mp.rbegin()->second;
	}

	T mex(T x = 0) {
		pair<T, T> p = get_seg(x);
		if(p.first > p.second) return x;
		return p.second + 1;
	}

	bool same(T x, T y) {
		pair<T, T> p = get_seg(x);
		return p.first <= p.second and p.first <= y and y <= p.second;
	}

	int size() {
		return int(mp.size());
	}

	void out() {
		for(auto [l, r] : mp) cout << "[" << l << ", " << r << "]\n";
	}
};
