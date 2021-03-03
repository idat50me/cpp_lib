#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../structure/2d_array.cpp"

struct doubling {
private:
	const int n;
	const long long max_t;
	v2d<int> table;

public:
	doubling(const vector<int> &v, long long _max_t) : n(v.size()), max_t(_max_t) {
		int k = 0;
		while((1LL << k) <= max_t) k++;
		table.assign(k, n);
		table[0] = v;

		for(int i = 0; i < k - 1; i++) {
			for(int j = 0; j < n; j++) {
				table[i + 1][j] = table[i][table[i][j]];
			}
		}
	}

	int get(int x, long long t) {
		assert(t <= max_t);
		int res = x;
		for(int k = 0; t; k++) {
			if(t & 1) res = table[k][res];
			t >>= 1;
		}
		return res;
	}
};
