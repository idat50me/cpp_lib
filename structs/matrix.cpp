#ifndef lib_matrix
#define lib_matrix

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<class T>
class Matrix{
	vector<vector<T>> mat;

public:

	Matrix(int h, int w, T n=0) { make(h,w,n); }

	void make(int h, int w, T n=0) {
		mat=vector<vector<T>>(h,vector<T>(w,n));
	};

	void in() {
		for(int i=0; i<mat.size(); i++) for(int j=0; j<mat[i].size(); j++) {
			cin>>mat[i][j];
		}
	}

	void out() {
		for(int i=0; i<mat.size(); i++) {
			for(int j=0; j<mat[i].size(); j++) {
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	inline vector<T> &operator[](int idx) {
		assert(0<=idx && idx<mat.size());
		return mat[idx];
	}
};

#endif // lib_matrix
