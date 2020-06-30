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

	inline vector<T>& operator[](size_t idx) {
		return mat[idx];
	}

	friend istream& operator>>(istream& is, Matrix<T>& mt) {
		for(int i=0; i<mt.height; i++) for(int j=0; j<mt.width; j++) {
			is>>mt[i][j];
		}
		return is;
	}
	friend ostream& operator<<(ostream& os, const Matrix<T>& mt) {
		for(int i=0; i<mt.height; i++) {
			for(int j=0; j<mt.width; j++) {
				os<<mt[i][j]<<" ";
			}
			os<<endl;
		}
		return os;
	};
};

#endif // lib_matrix
