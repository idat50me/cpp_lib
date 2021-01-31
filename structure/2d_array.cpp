#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T>
struct v2d {
private:
	vector<vector<T>> m;

public:
	v2d() {}
	v2d(int h, int w) : m(h, vector<T>(w)) {}
	v2d(int h, int w, const T &init) : m(h, vector<T>(w, init)) {}
	v2d(const initializer_list<initializer_list<T>> m_init) : m(m_init.begin(), m_init.end()) {}

	void assign(int h, int w) { m = vector(h, vector<T>(w)); }
	void assign(int h, int w, const T init) { m = vector(h, vector<T>(w, init)); }

	inline int size() const {
		return m.size();
	}

	void in() {
		for(vector<T> &v: m) for(T &val: v) cin>>val;
	}
	void in(int h, int w) {
		m = vector(h, vector<T>(w));
		in();
	}

	void out() {
		int h = m.size();
		for(vector<T> &v: m) {
			int sz = v.size();
			for(int j=0; j<sz; j++) {
				cout<<v[j]<<(j==sz-1 ? '\n' : ' ');
			}
		}
		cout<<flush;
	}

	inline vector<T> &operator[](int idx) {
		assert(0<=idx && idx<m.size());
		return m[idx];
	}
};
