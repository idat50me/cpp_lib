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
	int height, width;

public:

	Matrix(int h=1, int w=1) : height(h), width(w), mat(h,vector<T>(w)) {}
	Matrix(int h, int w, T n) : height(h), width(w), mat(h,vector<T>(w,n)) {}

	void resize(int h, int w) {
		height=h, width=w;
		mat.resize(h,vector<T>(w));
	}
	void resize(int h, int w, T n) {
		height=h, width=w;
		mat.resize(h,vector<T>(w,n));
	}

	void in() {
		for(int i=0; i<mat.height; i++) for(int j=0; j<mat.width; j++) {
			cin>>mat[i][j];
		}
	}

	void out() {
		for(int i=0; i<mat.height; i++) {
			for(int j=0; j<mat.width; j++) {
				cout<<mat[i][j]<<" ";
			}
			cout<<endl;
		}
	}

	inline vector<T>& operator[](size_t idx) {
		return mat[idx];
	}
};

#endif // lib_matrix
