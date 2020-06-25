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


# :heavy_check_mark: lib1/binpow.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#1a64425dc154a154c48dd8215d3c7c84">lib1</a>
* <a href="{{ site.github.repository_url }}/blob/master/lib1/binpow.cpp">View this file on GitHub</a>
    - Last commit date: 2020-05-17 15:15:53+09:00




## Depends on

* :heavy_check_mark: <a href="alias_declaration.cpp.html">lib1/alias_declaration.cpp</a>
* :heavy_check_mark: <a href="include_files.cpp.html">lib1/include_files.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj/NTL_1_B.test.cpp.html">test/aoj/NTL_1_B.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#ifndef lib_binpow
#define lib_binpow
#include "lib1/alias_declaration.cpp"

ll binpow(ll a, ll ex, ll p) {
	ll result=1;
	while(ex>0) {
		if(ex&1) result=result*a%p;
		ex>>=1;
		a=a*a%p;
	}
	return result;
}

#endif /* lib_binpow */
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "lib1/binpow.cpp"


#line 1 "lib1/alias_declaration.cpp"


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



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

