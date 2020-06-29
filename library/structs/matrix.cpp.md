---
layout: default
---

<!-- mathjax config similar to math.stackexchange -->
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({
    TeX: { equationNumbers: { autoNumber: "AMS" }},
    tex2jax: {
      inlineMath: [ ['$','$'] ],
      processEscapes: true
    },
    "HTML-CSS": { matchFontHeight: false },
    displayAlign: "left",
    displayIndent: "2em"
  });
</script>

<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/jquery-balloon-js@1.1.2/jquery.balloon.min.js" integrity="sha256-ZEYs9VrgAeNuPvs15E39OsyOJaIkXEEt10fzxJ20+2I=" crossorigin="anonymous"></script>
<script type="text/javascript" src="../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../assets/css/copy-button.css" />


# :heavy_check_mark: structs/matrix.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#5a8d55c70c1f3dcbee2f791cd477d649">structs</a>
* <a href="{{ site.github.repository_url }}/blob/master/structs/matrix.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-30 00:44:56+09:00




## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_ITP1_6_B.test.cpp.html">test/aoj_ITP1_6_B.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
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

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "structs/matrix.cpp"



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



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

