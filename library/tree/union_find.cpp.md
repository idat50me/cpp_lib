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


# :question: Union-Find木 <small>(tree/union_find.cpp)</small>

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#c0af77cf8294ff93a5cdb2963ca9f038">tree</a>
* <a href="{{ site.github.repository_url }}/blob/master/tree/union_find.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-27 15:49:04+09:00




## なにこれ
$n$ 頂点を持つ Union-Find 木です．

## 制約
- $n \leq 10^8$ 程度

## コンストラクタ
- `Union_Find(n)`：計算量 $O(n)$  
	- `n`：頂点数

## メンバ関数
- `root(x)`：償却計算量 $O(1)$  
	`x` が属する木の根を返す．
	- `x`：頂点の番号．

- `size(x)`：償却計算量 $O(1)$  
	`x` が属する木のサイズを返す．
	- `x`：頂点の番号．

- `merge(x, y)`：償却計算量 $O(1)$  
	`x` と `y` を結合する．  
	グラフ上では `y` が `x` の下につく．
	- `x,y`：結合する頂点の番号．

- `same(x, y)`：償却計算量 $O(1)$  
	`x` と `y` が同じ木に属するか判定する．
	- `x,y`：判定する頂点の番号．

- `tnum()`：計算量 $O(1)$  
	木の数を返す．


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_DSL_1_A.test.cpp.html">test/aoj_DSL_1_A.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/yosupo_unionfind.test.cpp.html">test/yosupo_unionfind.test.cpp</a>
* :x: <a href="../../verify/test/yuki_0556.test.cpp.html">test/yuki_0556.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
/*
 * @brief Union-Find木
 * @docs ./docs/union_find.md
 */

#ifndef lib_union_find
#define lib_union_find

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct Union_Find {
private:
	vector<int> parent;
	vector<int> num;
	int treenum;

public:
	Union_Find(int n) : parent(n),num(n,1) {
		treenum=n;
		for(int i=0; i<n; i++) {
			parent[i]=i;
		}
	}

	int root(int x) {
		assert(x < parent.size());
		if(parent[x]==x) return x;
		return parent[x]=root(parent[x]);
	}

	int size(int x) {
		return num[root(x)];
	}

	void merge(int x, int y) {
		int xrt=root(x);
		int yrt=root(y);
		if(xrt==yrt) return;
		parent[yrt]=xrt;
		num[xrt]+=num[yrt];
		treenum--;
	}

	bool same(int x, int y) {
		return root(x)==root(y);
	}

	int tnum() {
		return treenum;
	}
};


#endif // lib_union_find

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "tree/union_find.cpp"
/*
 * @brief Union-Find木
 * @docs ./docs/union_find.md
 */

#ifndef lib_union_find
#define lib_union_find

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct Union_Find {
private:
	vector<int> parent;
	vector<int> num;
	int treenum;

public:
	Union_Find(int n) : parent(n),num(n,1) {
		treenum=n;
		for(int i=0; i<n; i++) {
			parent[i]=i;
		}
	}

	int root(int x) {
		assert(x < parent.size());
		if(parent[x]==x) return x;
		return parent[x]=root(parent[x]);
	}

	int size(int x) {
		return num[root(x)];
	}

	void merge(int x, int y) {
		int xrt=root(x);
		int yrt=root(y);
		if(xrt==yrt) return;
		parent[yrt]=xrt;
		num[xrt]+=num[yrt];
		treenum--;
	}

	bool same(int x, int y) {
		return root(x)==root(y);
	}

	int tnum() {
		return treenum;
	}
};


#endif // lib_union_find

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

