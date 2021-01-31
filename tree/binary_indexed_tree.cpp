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
	BIT(vector<T>& v) : node(v.size()+1, 0), N(v.size()) {
		for(int i=0; i<N; i++) node[i+1] = v[i];
		for(int i=1; i<N; i++) {
			int j = i+(i&-i);
			if(j <= N) node[j] += node[i];
		}
	}

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
