#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T, typename M>
struct lazy_segtree {
	using F = function<T(T,T)>;
	using FU = function<M(T,M)>;
	using FM = function<M(M,M)>;

private:
	int siz=1, N;
	vector<T> node;
	vector<M> lazy;
	const F op;
	const FU f_upd;
	const FM f_lz;
	const T ex;
	const M em;

public:
	lazy_segtree(int n, const F op, const FU f_upd, const FM f_lz, const T ex, const M em)
	: N(n), op(op), f_upd(f_upd), f_lz(f_lz), ex(ex), em(em) {
		while(siz < N) siz <<= 1;
		node.resize(2*siz-1, ex);
		lazy.resize(2*siz-1, em);
	}
	lazy_segtree(vector<T> &v, const F op, const FU f_upd, const FM f_lz, const T ex, const T em)
	: N(v.size()), op(op), f_upd(f_upd), f_lz(f_lz), ex(ex), em(em) {
		while(siz < N) siz <<= 1;
		node.resize(2*siz-1, ex);
		lazy.resize(2*siz-1, em);
		for(int i=0; i<N; i++) node[siz-1+i] = v[i];
		for(int i=siz-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);
	}

	void update(int idx, T val) {
		assert(0<=idx && idx<N);
		upd__(idx, idx+1, 0, val, 0, siz);
	}
	void update(int L, int R, T val) {
		if(L < 0) L = 0;
		if(R > N) R = N;
		assert(L < R);
		upd__(L, R, 0, val, 0, siz);
	}

	T get(int idx) {
		assert(0<=idx && idx<N);
		return get__(idx, idx+1, 0, 0, siz);
	}
	T get(int L, int R) {
		if(L < 0) L = 0;
		if(R > N) R = N;
		assert(L < R);
		return get__(L, R, 0, 0, siz);
	}
private:
	void eval(int idx) {
		if(lazy[idx] == em) return;
		if(idx < siz-1) {
			lazy[2*idx+1] = f_lz(lazy[2*idx+1], lazy[idx]);
			lazy[2*idx+2] = f_lz(lazy[2*idx+2], lazy[idx]);
		}
		node[idx] = f_upd(node[idx], lazy[idx]);
		lazy[idx] = em;
	}

	void upd__(int L, int R, int idx, T val, int l, int r) {
		eval(idx);
		if(r<=L || R<=l) return;
		if(L<=l && r<=R) {
			lazy[idx] = f_lz(lazy[idx], val);
			eval(idx);
		}
		else {
			upd__(L, R, 2*idx+1, val, l, (l+r)/2);
			upd__(L, R, 2*idx+2, val, (l+r)/2, r);
			node[idx] = op(node[2*idx+1], node[2*idx+2]);
		}
	}

	T get__(int L, int R, int idx, int l, int r) {
		if(r<=L || R<=l) return ex;
		eval(idx);
		if(L<=l && r<=R) return node[idx];
		T vl = get__(L, R, 2*idx+1, l, (l+r)/2);
		T vr = get__(L, R, 2*idx+2, (l+r)/2, r);
		return op(vl, vr);
	}
};
