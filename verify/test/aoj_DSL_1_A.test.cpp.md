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


# :heavy_check_mark: test/aoj_DSL_1_A.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/aoj_DSL_1_A.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-27 15:49:04+09:00


* see: <a href="https://onlinejudge.u-aizu.ac.jp/problems/DSL_1_A">https://onlinejudge.u-aizu.ac.jp/problems/DSL_1_A</a>


## Depends on

* :heavy_check_mark: <a href="../../library/tree/union_find.cpp.html">Union-Find木 <small>(tree/union_find.cpp)</small></a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_1_A"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../tree/union_find.cpp"

int main() {
	int N,Q; cin>>N>>Q;
	Union_Find uf(N);

	for(int i=0; i<Q; i++) {
		int com,x,y; cin>>com>>x>>y;

		if(com==0) uf.merge(x,y);
		else cout<<(uf.same(x,y) ? 1 : 0)<<'\n';
	}

	cout<<flush;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/aoj_DSL_1_A.test.cpp"
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_1_A"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

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
#line 10 "test/aoj_DSL_1_A.test.cpp"

int main() {
	int N,Q; cin>>N>>Q;
	Union_Find uf(N);

	for(int i=0; i<Q; i++) {
		int com,x,y; cin>>com>>x>>y;

		if(com==0) uf.merge(x,y);
		else cout<<(uf.same(x,y) ? 1 : 0)<<'\n';
	}

	cout<<flush;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

