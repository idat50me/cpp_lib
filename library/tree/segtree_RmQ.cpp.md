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


# :heavy_check_mark: RmQ(区間最小値) <small>(tree/segtree_RmQ.cpp)</small>

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#c0af77cf8294ff93a5cdb2963ca9f038">tree</a>
* <a href="{{ site.github.repository_url }}/blob/master/tree/segtree_RmQ.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-26 03:14:53+09:00




## なにこれ
$n$ 個の要素を持つ配列の区間最小値を求めるセグメント木．

## 制約
- $n \leq 10^8$ 程度

## コンストラクタ
- `RmQ(v)`：計算量 $O(n)$
	- `v`：初期要素を格納している配列．

## メンバ関数
- `update(idx, val)`：計算量 $O(\log n)$  
	要素を更新する．
	- `idx`：更新する要素の index
	- `val`：更新後の要素の値．

- `getmin(L, R)`：計算量 $O(\log n)$  
	区間最小値を求める．
	- `L,R`：`[L,R)`を探索区間とする．


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_DSL_2_A.test.cpp.html">test/aoj_DSL_2_A.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/yosupo_staticrmq.test.cpp.html">test/yosupo_staticrmq.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
/*
 * @brief RmQ(区間最小値)
 * @docs ./docs/segtree_RmQ.md
 */

#ifndef lib_segtree_RmQ
#define lib_segtree_RmQ

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T>
struct RmQ {
private:
	int n=1;
	vector<T> node;
	T inf=numeric_limits<T>::max();

public:
	RmQ(vector<T> v) {
		while(n<v.size()) n*=2;
		node.resize(2*n-1,inf);
		for(int i=0; i<v.size(); i++) node[n-1+i]=v[i];
		for(int i=n-2; i>=0; i--) node[i]=min(node[2*i+1],node[2*i+2]);
	}

	void update(int idx, T val) {
		idx+=n-1;
		node[idx]=val;

		while(idx>0) {
			idx=(idx-1)/2;
			node[idx]=min(node[2*idx+1],node[2*idx+2]);
		}
	}

	// 区間[L,R)の最小値
	// now: 今見てるindex
	// 区間[l,r)の最小値はnowの要素
	T getmin(int L, int R) { return getmin__(L, R, 0, 0, n); }
private:
	T getmin__(int L, int R, int now, int l, int r) {
		if(r<=L || R<=l) return inf;
		if(L<=l && r<=R) return node[now];

		T vl=getmin__(L,R,2*now+1,l,(l+r)/2);
		T vr=getmin__(L,R,2*now+2,(l+r)/2,r);
		return min(vl,vr);
	}
public:
};

#endif // lib_segtree_RmQ

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "tree/segtree_RmQ.cpp"
/*
 * @brief RmQ(区間最小値)
 * @docs ./docs/segtree_RmQ.md
 */

#ifndef lib_segtree_RmQ
#define lib_segtree_RmQ

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T>
struct RmQ {
private:
	int n=1;
	vector<T> node;
	T inf=numeric_limits<T>::max();

public:
	RmQ(vector<T> v) {
		while(n<v.size()) n*=2;
		node.resize(2*n-1,inf);
		for(int i=0; i<v.size(); i++) node[n-1+i]=v[i];
		for(int i=n-2; i>=0; i--) node[i]=min(node[2*i+1],node[2*i+2]);
	}

	void update(int idx, T val) {
		idx+=n-1;
		node[idx]=val;

		while(idx>0) {
			idx=(idx-1)/2;
			node[idx]=min(node[2*idx+1],node[2*idx+2]);
		}
	}

	// 区間[L,R)の最小値
	// now: 今見てるindex
	// 区間[l,r)の最小値はnowの要素
	T getmin(int L, int R) { return getmin__(L, R, 0, 0, n); }
private:
	T getmin__(int L, int R, int now, int l, int r) {
		if(r<=L || R<=l) return inf;
		if(L<=l && r<=R) return node[now];

		T vl=getmin__(L,R,2*now+1,l,(l+r)/2);
		T vr=getmin__(L,R,2*now+2,(l+r)/2,r);
		return min(vl,vr);
	}
public:
};

#endif // lib_segtree_RmQ

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

