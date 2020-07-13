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


# :heavy_check_mark: test/aoj_ITP1_6_B.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/aoj_ITP1_6_B.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-14 02:40:26+09:00


* see: <a href="https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B">https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B</a>


## Depends on

* :heavy_check_mark: <a href="../../library/pre/macros.cpp.html">pre/macros.cpp</a>
* :heavy_check_mark: <a href="../../library/structs/matrix.cpp.html">Matrix($2$ 次元行列) <small>(structs/matrix.cpp)</small></a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "structs/matrix.cpp"

int main() {
	int N; cin>>N;
	Matrix card(4,14,true);
	map<char,int> ch2i;
	ch2i['S']=0, ch2i['H']=1, ch2i['C']=2, ch2i['D']=3;
	map<int,char> i2ch;
	i2ch[0]='S', i2ch[1]='H', i2ch[2]='C', i2ch[3]='D';

	for(int i=0; i<N; i++) {
		char ch; int num;
		cin>>ch>>num;
		card[ch2i[ch]][num]=false;
	}

	for(int i=0; i<4; i++)for(int j=1; j<=13; j++) {
		if(card[i][j]) {
			cout<<i2ch[i]<<" "<<j<<endl;
		}
	}
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/aoj_ITP1_6_B.test.cpp"
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 1 "pre/macros.cpp"



using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1


#line 1 "structs/matrix.cpp"
/*
 * @brief Matrix($2$ 次元行列)
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

	Matrix(int h, int w, T n=0) { make(h,w,n); }

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
#line 11 "test/aoj_ITP1_6_B.test.cpp"

int main() {
	int N; cin>>N;
	Matrix card(4,14,true);
	map<char,int> ch2i;
	ch2i['S']=0, ch2i['H']=1, ch2i['C']=2, ch2i['D']=3;
	map<int,char> i2ch;
	i2ch[0]='S', i2ch[1]='H', i2ch[2]='C', i2ch[3]='D';

	for(int i=0; i<N; i++) {
		char ch; int num;
		cin>>ch>>num;
		card[ch2i[ch]][num]=false;
	}

	for(int i=0; i<4; i++)for(int j=1; j<=13; j++) {
		if(card[i][j]) {
			cout<<i2ch[i]<<" "<<j<<endl;
		}
	}
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

