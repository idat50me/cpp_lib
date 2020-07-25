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


# :heavy_check_mark: test/aoj_DSL_2_A.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/aoj_DSL_2_A.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-26 03:14:53+09:00


* see: <a href="https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A">https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A</a>


## Depends on

* :heavy_check_mark: <a href="../../library/tree/segtree_RmQ.cpp.html">RmQ(区間最小値) <small>(tree/segtree_RmQ.cpp)</small></a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../tree/segtree_RmQ.cpp"

int main() {
	int N,Q; cin>>N>>Q;
	vector<int> v(N,(1<<31)-1);
	RmQ rmq_tree(v);

	for(int i=0; i<Q; i++) {
		int com,x,y; cin>>com>>x>>y;

		if(com==0) rmq_tree.update(x,y);
		else cout<<rmq_tree.getmin(x,y+1)<<'\n';
	}
	cout<<flush;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/aoj_DSL_2_A.test.cpp"
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

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
#line 10 "test/aoj_DSL_2_A.test.cpp"

int main() {
	int N,Q; cin>>N>>Q;
	vector<int> v(N,(1<<31)-1);
	RmQ rmq_tree(v);

	for(int i=0; i<Q; i++) {
		int com,x,y; cin>>com>>x>>y;

		if(com==0) rmq_tree.update(x,y);
		else cout<<rmq_tree.getmin(x,y+1)<<'\n';
	}
	cout<<flush;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

