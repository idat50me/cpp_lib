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


# :warning: combinatorics/mod_ncr2.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#ac1ed416572b96a9f5d69740d174ef3d">combinatorics</a>
* <a href="{{ site.github.repository_url }}/blob/master/combinatorics/mod_ncr2.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-29 22:12:44+09:00




## Depends on

* :question: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#ifndef lib_mod_ncr2
#define lib_mod_ncr2

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

vector<ll> fact2__,inv2__,finv2__;
ll mod_ncr2_p__;

void pre_mod_nCr2(ll n, ll r, ll p) {
	mod_ncr2_p__=p;
	fact2__.resize(r+1);
	inv2__.resize(r+1);
	finv2__.resize(r+1);
	fact2__[0]=n%p, fact2__[1]=n%p*(n-1)%p;
	inv2__[1]=finv2__[0]=finv2__[1]=1LL;
	for(ll i=2LL; i<=r; i++) {
		fact2__[i]=fact2__[i-1]*(n-i)%p;
		inv2__[i]=p-inv2__[p%i]*(p/i)%p;
		finv2__[i]=finv2__[i-1]*inv2__[i]%p;
	}
}

ll mod_nCr2(ll n, ll r) {
	return fact2__[r-1]*finv2__[r]%mod_ncr2_p__;
}

#endif // lib_mod_ncr2
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "combinatorics/mod_ncr2.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 2 "pre/macros.cpp"
//#ifndef lib_macros
//#define lib_macros

using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1

//#endif // lib_macros
#line 11 "combinatorics/mod_ncr2.cpp"

vector<ll> fact2__,inv2__,finv2__;
ll mod_ncr2_p__;

void pre_mod_nCr2(ll n, ll r, ll p) {
	mod_ncr2_p__=p;
	fact2__.resize(r+1);
	inv2__.resize(r+1);
	finv2__.resize(r+1);
	fact2__[0]=n%p, fact2__[1]=n%p*(n-1)%p;
	inv2__[1]=finv2__[0]=finv2__[1]=1LL;
	for(ll i=2LL; i<=r; i++) {
		fact2__[i]=fact2__[i-1]*(n-i)%p;
		inv2__[i]=p-inv2__[p%i]*(p/i)%p;
		finv2__[i]=finv2__[i-1]*inv2__[i]%p;
	}
}

ll mod_nCr2(ll n, ll r) {
	return fact2__[r-1]*finv2__[r]%mod_ncr2_p__;
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

