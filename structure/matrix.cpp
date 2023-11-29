#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T> struct matrix {
private:
	vector<vector<T>> m;

public:
	matrix() {}
	matrix(int h, int w) : m(h, vector<T>(w)) {}
	matrix(int h, int w, T init) : m(h, vector<T>(w, init)) {}
	matrix(const initializer_list<initializer_list<T>> m_init) : m(m_init.begin(), m_init.end()) {}

	void assign(int h, int w) {
		m.assign(h, vector<T>(w));
	}
	void assign(int h, int w, const T init) {
		m.assign(h, vector<T>(w, init));
	}

	int height() const {
		return m.size();
	}

	int width() const {
		if(height() == 0) return 0;
		return m[0].size();
	}

	void in() {
		for(vector<T> &v : m)
			for(T &val : v) cin >> val;
	}
	void in(int h, int w) {
		m.resize(h, vector<T>(w));
		in();
	}

	void out() {
		int w = width();
		for(vector<T> &v : m)
			for(int j = 0; j < w; j++) {
				cout << v[j] << (j == w - 1 ? '\n' : ' ');
			}
		cout << flush;
	}

	inline const vector<T> &operator[](int idx) const {
		assert(0 <= idx && idx < m.size());
		return m[idx];
	}
	inline vector<T> &operator[](int idx) {
		assert(0 <= idx && idx < m.size());
		return m[idx];
	}

	matrix &operator+=(const matrix &a) {
		int h = height(), w = width();
		assert(h == a.height() && w == a.width());
		for(int i = 0; i < h; i++)
			for(int j = 0; j < w; j++) m[i][j] += a[i][j];
		return *this;
	}
	matrix &operator-=(const matrix &a) {
		int h = height(), w = width();
		assert(h == a.height() && w == a.width());
		for(int i = 0; i < h; i++)
			for(int j = 0; j < w; j++) m[i][j] -= a[i][j];
		return *this;
	}
	matrix &operator*=(const matrix &a) {
		int h = height(), w = a.width(), ah = a.height();
		assert(width() == ah);
		vector<vector<T>> tmp(h, vector(w, T(0)));
		for(int i = 0; i < h; i++)
			for(int j = 0; j < w; j++)
				for(int k = 0; k < ah; k++) tmp[i][j] += m[i][k] * a[k][j];
		m.swap(tmp);
		return *this;
	}

	matrix operator+(const matrix &a) const {
		return matrix(*this) += a;
	}
	matrix operator-(const matrix &a) const {
		return matrix(*this) -= a;
	}
	matrix operator*(const matrix &a) const {
		return matrix(*this) *= a;
	}

	matrix pow(long long ex) {
		matrix a = this->m;
		assert(a.height() == a.width());
		matrix res = identity(a.height());
		while(ex > 0) {
			if(ex & 1) res *= a;
			ex >>= 1;
			a *= a;
		}
		return res;
	}

	static matrix identity(int n) {
		matrix res(n, n, 0);
		for(int i = 0; i < n; i++) res[i][i] = 1;
		return res;
	}
};
