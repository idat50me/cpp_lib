#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T>
struct matrix{
private:
	vector<vector<T>> m;

public:
	matrix() : m(0, vector<T>(0)) {}
	matrix(int h, int w) : m(h, vector<T>(w)) {}
	matrix(int h, int w, const T &init) : m(h, vector<T>(w, init)) {}

	void assign(int h, int w) { m = vector(h, vector<T>(w)); }
	void assign(int h, int w, const T init) { m = vector(h, vector<T>(w, init)); }

	void in() {
		for(int i=0; i<m.size(); i++) for(int j=0; j<m[i].size(); j++) cin>>m[i][j];
	}

	void out() {
		for(int i=0; i<m.size(); i++) {
			int sz = m[i].size();
			for(int j=0; j<sz; j++) {
				cout<<m[i][j]<<(j==sz-1 ? '\n' : ' ');
			}
		}
		cout<<flush;
	}

	inline vector<T> &operator[](int idx) {
		assert(0<=idx && idx<m.size());
		return m[idx];
	}
};
