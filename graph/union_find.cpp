#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<class T = int> struct UnionFind {
private:
	vector<int> parent;
	vector<int> num;
	vector<T> val;
	int treenum;

	const function<bool(int, int, T &, T &)> swap_flg =
		[this](const int l, const int r, const T &, const T &) { return num[l] < num[r]; };
	const function<void(T &, T &)> merge_val = [this](T &, const T &) {};

public:
	UnionFind(int n) : parent(n), num(n, 1), treenum(n) {
		for(int i = 0; i < n; i++) parent[i] = i;
	}
	UnionFind(int n, function<bool(int, int, T &, T &)> f1) :
		parent(n), num(n, 1), val(n), treenum(n), swap_flg(f1) {
		for(int i = 0; i < n; i++) parent[i] = i;
	}
	UnionFind(int n, const function<void(T &, T &)> f2) :
		parent(n), num(n, 1), val(n), treenum(n), merge_val(f2) {
		for(int i = 0; i < n; i++) parent[i] = i;
	}
	UnionFind(int n, function<bool(int, int, T &, T &)> f1, const function<void(T &, T &)> f2) :
		parent(n), num(n, 1), val(n), treenum(n), swap_flg(f1), merge_val(f2) {
		for(int i = 0; i < n; i++) parent[i] = i;
	}
	UnionFind(vector<T> &v, const function<void(T &, T &)> f2) :
		parent(v.size()), num(v.size(), 1), val(v), treenum(v.size()), merge_val(f2) {
		for(int i = 0; i < v.size(); i++) parent[i] = i;
	}
	UnionFind(vector<T> &v, function<bool(int, int, T &, T &)> f1, const function<void(T &, T &)> f2) :
		parent(v.size()), num(v.size(), 1), val(v), treenum(v.size()), swap_flg(f1), merge_val(f2) {
		for(int i = 0; i < v.size(); i++) parent[i] = i;
	}

	int root(int x) {
		assert(x < parent.size());
		if(parent[x] == x) return x;
		return parent[x] = root(parent[x]);
	}

	int size(int x) {
		assert(x < parent.size());
		return num[root(x)];
	}

	int merge(int x, int y) {
		assert(x < parent.size() && y < parent.size());
		int xrt = root(x);
		int yrt = root(y);
		if(xrt == yrt) return xrt;
		if(swap_flg(xrt, yrt, val[xrt], val[yrt])) swap(xrt, yrt);
		parent[yrt] = xrt;
		num[xrt] += num[yrt];
		merge_val(val[xrt], val[yrt]);
		treenum--;
		return xrt;
	}

	bool same(int x, int y) {
		assert(x < parent.size() && y < parent.size());
		return root(x) == root(y);
	}

	int tnum() {
		return treenum;
	}

	inline T &operator[](int x) {
		assert(x < parent.size());
		return val[x];
	}
};
