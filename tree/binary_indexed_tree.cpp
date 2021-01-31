#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T>
struct BIT {
private:
	vector<T> node;
	const int N;

public:
	BIT(int n) : node(n+1, 0), N(n) {}

	T sum(int idx) {
		assert(0<=idx && idx<=N);
		T res = 0;
		while(idx) {
			res += node[idx];
			idx -= idx&-idx;
		}
		return res;
	}

	T sum(int l, int r) {
		assert(0<=l && l<=r && r<=N);
		return sum(r) - sum(l-1);
	}

	void add(int idx, T& val) {
		assert(0<idx && idx<=N);
		while(idx <= N) {
			node[idx] += val;
			idx += idx&-idx;
		}
	}
	void add(int idx, T val) {
		assert(0<idx && idx<=N);
		while(idx <= N) {
			node[idx] += val;
			idx += idx&-idx;
		}
	}
};
