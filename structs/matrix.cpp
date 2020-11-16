#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T>
struct matrix{
private:
	vector<vector<T>> mat;

public:
	matrix() : matrix(0,0) {}
	matrix(int h, int w) { resize(h,w); }
	matrix(int h, int w, T init) { resize(h,w,init); }

	void resize(int h, int w) {
		mat=vector<vector<T>>(h,vector<T>(w));
	}
	void resize(int h, int w, T init) {
		mat=vector<vector<T>>(h,vector<T>(w,init));
	};

	void in() {
		for(int i=0; i<mat.size(); i++) for(int j=0; j<mat[i].size(); j++) {
			cin>>mat[i][j];
		}
	}

	void out() {
		for(int i=0; i<mat.size(); i++) {
			int wm=mat[i].size();
			for(int j=0; j<wm; j++) {
				cout<<mat[i][j]<<(wm==j+1 ? '\n' : ' ');
			}
		}
		cout<<flush;
	}

	inline vector<T> &operator[](int idx) {
		assert(0<=idx && idx<mat.size());
		return mat[idx];
	}
};
