#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../tree/binary_indexed_tree.cpp"

template<typename T> long long inv_count(const vector<T> &v) {
	const int N = v.size();
	long long res = 0;
	BIT<int> bt(N);
	map<T, int> mp;
	for(const T &a : v) mp.emplace(a, 0);
	int i = 1;
	for(auto &a : mp) {
		a.second = i;
		i++;
	}

	for(const T &a : v) {
		bt.add(mp[a], 1);
		res += bt.sum(mp[a] + 1, N);
	}

	return res;
};
