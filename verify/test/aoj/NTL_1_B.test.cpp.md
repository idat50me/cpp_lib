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
<script type="text/javascript" src="../../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../../assets/css/copy-button.css" />


# :heavy_check_mark: test/aoj/NTL_1_B.test.cpp

<a href="../../../index.html">Back to top page</a>

* category: <a href="../../../index.html#0d0c91c0cca30af9c1c9faef0cf04aa9">test/aoj</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/aoj/NTL_1_B.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-25 17:27:07+09:00


* see: <a href="https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B">https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B</a>


## Depends on

* :heavy_check_mark: <a href="../../../library/lib1/alias_declaration.cpp.html">lib1/alias_declaration.cpp</a>
* :heavy_check_mark: <a href="../../../library/lib1/binpow.cpp.html">lib1/binpow.cpp</a>
* :heavy_check_mark: <a href="../../../library/lib1/include_files.cpp.html">lib1/include_files.cpp</a>
* :heavy_check_mark: <a href="../../../library/lib1/macros.cpp.html">lib1/macros.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B"
#include "lib1/include_files.cpp"
#include "lib1/alias_declaration.cpp"
#include "lib1/macros.cpp"
#include "lib1/binpow.cpp"

int main() {
	int m,n; cin>>m>>n;
	cout<<binpow(m,n,MPRIME)<<endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/aoj/NTL_1_B.test.cpp"
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B"
#line 1 "lib1/include_files.cpp"


#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <tuple>
#include <string>
#include <algorithm>
#include <functional>
#include <queue>
#include <stack>
#include <cmath>
#include <bitset>

using namespace std;


#line 1 "lib1/alias_declaration.cpp"


#line 4 "lib1/alias_declaration.cpp"

using ll=long long;
using intpair=pair<int,int>;
using intpv=vector<intpair>;
using llpair=pair<ll,ll>;
using llpv=vector<llpair>;
using intvec=vector<int>;
using llvec=vector<ll>;
using intq=queue<int>;
using llq=queue<ll>;
using intmat=vector<intvec>;
using llmat=vector<llvec>;
using pairmat=vector<llpv>;

template<typename T>
using matrix=vector<vector<T>>;
template<typename T>
using pque=priority_queue<T>;
template<typename T>
using lpque=priority_queue<T,vector<T>,greater<T>>;


#line 1 "lib1/macros.cpp"


#define PI 3.141592653589793
#define INTINF 1<<30
#define LLINF 1LL<<60
#define MPRIME 1000000007
#define MPRIME9 998244353

#define pushb push_back
#define fi first
#define se second

#define setpr fixed<<setprecision(15)
#define iter(name) decltype(name)::iterator
#define all(name) name.begin(),name.end()
#define rall(name) name.rbegin(),name.rend()
#define gsort(vbeg,vend) sort(vbeg,vend,greater<>())
#define init(v,size) v.resize(size); for(auto &a__: v) cin>>a__
#define matin(mat,H,W) for(int i__=0; i__<H; i__++)for(int j__=0; j__<W; j__++) cin>>mat[i__][j__]
#define out(n) cout<<n<<endl


#line 1 "lib1/binpow.cpp"


#line 4 "lib1/binpow.cpp"

ll binpow(ll a, ll ex, ll p) {
	ll result=1;
	while(ex>0) {
		if(ex&1) result=result*a%p;
		ex>>=1;
		a=a*a%p;
	}
	return result;
}


#line 6 "test/aoj/NTL_1_B.test.cpp"

int main() {
	int m,n; cin>>m>>n;
	cout<<binpow(m,n,MPRIME)<<endl;
}

```
{% endraw %}

<a href="../../../index.html">Back to top page</a>

