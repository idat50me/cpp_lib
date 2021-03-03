#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../structure/2d_array.cpp"

template<typename T = int> struct doubling {
private:
	const int n;
	const long long max_t;
	v2d<int> table;
	v2d<T> data;

	function<T(T &, T &)> f = [this](T &l, T &r) { return r; };

public:
	doubling(const vector<int> &v, long long _max_t) : n(v.size()), max_t(_max_t) {
		int k = 0;
		while((1LL << k) <= max_t) k++;
		table.assign(k, n);
		data.assign(k, n);
		table[0] = data[0] = v;

		for(int i = 0; i < k - 1; i++) {
			for(int j = 0; j < n; j++) {
				table[i + 1][j] = data[i + 1][j] = table[i][table[i][j]];
			}
		}
	}
	doubling(const vector<int> &v, const vector<T> &v_data, long long _max_t, function<T(T &, T &)> _f) :
		n(v.size()), max_t(_max_t), f(_f) {
		int k = 0;
		while((1LL << k) <= max_t) k++;
		table.assign(k, n);
		data.assign(k, n);
		table[0] = v;
		data[0] = v_data;

		for(int i = 0; i < k - 1; i++) {
			for(int j = 0; j < n; j++) {
				table[i + 1][j] = table[i][table[i][j]];
				data[i + 1][j] = f(data[i][j], data[i][table[i][j]]);
			}
		}
	}

	T get(int x, T init, long long t) {
		assert(t <= max_t);
		int id = x;
		T res = init;
		for(int k = 0; t; k++) {
			if(t & 1) {
				res = f(res, data[k][id]);
				id = table[k][id];
			}
			t >>= 1;
		}
		return res;
	}

	int get_idx(int x, long long t) {
		assert(t <= max_t);
		int id = x;
		for(int k = 0; t; k++) {
			if(t & 1) {
				id = table[k][id];
			}
			t >>= 1;
		}
		return id;
	}
};
