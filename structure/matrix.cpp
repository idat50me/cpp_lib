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

	int height() const {
		return m.size();
	}

	int width() const {
		if(height()==0) return 0;
		return m[0].size();
	}

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

	inline const vector<T> &operator[](int idx) const {
		assert(0<=idx && idx<m.size());
		return m[idx];
	}
	inline vector<T> &operator[](int idx) {
		assert(0<=idx && idx<m.size());
		return m[idx];
	}

	static matrix identity(int n) {
		matrix res(n, n, 0);
		for(int i=0; i<n; i++) res[i][i] = 1;
		return res;
	}

	matrix& operator+=(const matrix& a) {
		assert(height()==a.height() && width()==a.width());
		for(int i=0; i<m.size(); i++) for(int j=0; j<m[i].size(); j++) m[i][j] += a[i][j];
		return *this;
	}
	matrix& operator-=(const matrix& a) {
		assert(height()==a.height() && width()==a.width());
		for(int i=0; i<m.size(); i++) for(int j=0; j<m[i].size(); j++) m[i][j] -= a[i][j];
		return *this;
	}
	matrix& operator*=(const matrix& a) {
		int h = height(), w = a.width(), ah = a.height();
		assert(width()==ah);
		vector<vector<T>> tmp(h, vector(w, 0));
		for(int i=0; i<h; i++) for(int j=0; j<w; j++) for(int k=0; k<ah; k++) tmp[i][j] += m[i][k]*a[k][j];
		m.swap(tmp);
		return *this;
	}

	matrix operator+(const matrix& a) const {
		return matrix(*this)+=a;
	}
	matrix operator-(const matrix& a) const {
		return matrix(*this)-=a;
	}
	matrix operator*(const matrix& a) const {
		return matrix(*this)*=a;
	}
};
