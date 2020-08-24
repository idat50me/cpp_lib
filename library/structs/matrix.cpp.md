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


# :heavy_check_mark: Matrix( $2$ 次元行列) <small>(structs/matrix.cpp)</small>

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#5a8d55c70c1f3dcbee2f791cd477d649">structs</a>
* <a href="{{ site.github.repository_url }}/blob/master/structs/matrix.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-14 23:07:26+09:00




## なにこれ

## コンストラクタ


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_0341.test.cpp.html">test/aoj_0341.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/aoj_ITP1_6_B.test.cpp.html">test/aoj_ITP1_6_B.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
/*
 * @brief Matrix( $2$ 次元行列)
 * @docs ./docs/matrix.md
 */

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

	Matrix() : Matrix(0,0) {}
	Matrix(int h, int w) { make(h,w); }
	Matrix(int h, int w, T init) { make(h,w,init); }

	void make(int h, int w) {
		mat=vector<vector<T>>(h,vector<T>(w));
	}
	void make(int h, int w, T init) {
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

#endif // lib_matrix

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "structs/matrix.cpp"
/*
 * @brief Matrix( $2$ 次元行列)
 * @docs ./docs/matrix.md
 */

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

	Matrix() : Matrix(0,0) {}
	Matrix(int h, int w) { make(h,w); }
	Matrix(int h, int w, T init) { make(h,w,init); }

	void make(int h, int w) {
		mat=vector<vector<T>>(h,vector<T>(w));
	}
	void make(int h, int w, T init) {
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

#endif // lib_matrix

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

