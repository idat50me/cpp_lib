#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T, T (*op)(T,T), T (*e)()>
struct segtree {
private:
	int siz=1, N;
	vector<T> node;
	const T e_ = e();

public:
	segtree(int n, T init) {
		N = n;
		while(siz < N) siz *= 2;
		node.resize(2*siz-1, e_);
		for(int i=0; i<N; i++) node[siz-1+i] = init;
		for(int i=siz-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);
	}
	segtree(vector<T> v) {
		N = v.size();
		while(siz < N) siz *= 2;
		node.resize(2*siz-1, e_);
		for(int i=0; i<N; i++) node[siz-1+i] = v[i];
		for(int i=siz-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);
	}

	void update(int idx, T val) {
		idx += siz-1;
		node[idx] = val;

		while(idx > 0) {
			idx = (idx-1)/2;
			node[idx] = op(node[2*idx+1], node[2*idx+2]);
		}
	}

	T get(int idx) {
		return get(idx, idx+1);
	}
	T get(int L, int R) {
		if(L < 0) L = 0;
		if(R > N) R = N;
		return get__(L, R, 0, 0, siz);
	}
private:
	T get__(int L, int R, int id, int l, int r) {
		if(r<=L || R<=l) return e_;
		if(L<=l && r<=R) return node[id];
		T vl = get__(L, R, 2*id+1, l, (l+r)/2);
		T vr = get__(L, R, 2*id+2, (l+r)/2, r);
		return op(vl, vr);
	}
public:
};
