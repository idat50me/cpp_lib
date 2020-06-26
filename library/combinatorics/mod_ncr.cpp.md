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


# :x: combinatorics/mod_ncr.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#ac1ed416572b96a9f5d69740d174ef3d">combinatorics</a>
* <a href="{{ site.github.repository_url }}/blob/master/combinatorics/mod_ncr.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-26 17:55:02+09:00




## Depends on

* :x: <a href="pre_mod_comb.cpp.html">combinatorics/pre_mod_comb.cpp</a>
* :question: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Required by

* :x: <a href="nhr.cpp.html">combinatorics/nhr.cpp</a>


## Verified with

* :x: <a href="../../verify/test/yuki_0117.test.cpp.html">test/yuki_0117.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#ifndef lib_mod_ncr
#define lib_mod_ncr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "combinatorics/pre_mod_comb.cpp"

ll mod_nCr(ll n, ll r) {
	ll p=mod_comb_p__;
	if (r > n) return 0;
	return fact__[n]*finv__[r]%p*finv__[n-r]%p;
}

#endif // lib_mod_ncr
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "combinatorics/mod_ncr.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 1 "pre/macros.cpp"



using ll = long long;

#define MPRIME (ll)10e9+7
#define MMPRIME (1LL<<61)-1


#line 1 "combinatorics/pre_mod_comb.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 11 "combinatorics/pre_mod_comb.cpp"

vector<ll> fact__,inv__,finv__;
ll mod_comb_p__;

void pre_mod_comb(ll mx, ll p) {
	mod_comb_p__=p;
	fact__.resize(mx+1);
	inv__.resize(mx+1);
	finv__.resize(mx+1);
	fact__[0]=fact__[1]=inv__[1]=finv__[0]=finv__[1]=1LL;
	for(ll i=2LL; i<=mx; i++) {
		fact__[i]=fact__[i-1]*i%p;
		inv__[i]=p-inv__[p%i]*(p/i)%p;
		finv__[i]=finv__[i-1]*inv__[i]%p;
	}
}


#line 12 "combinatorics/mod_ncr.cpp"

ll mod_nCr(ll n, ll r) {
	ll p=mod_comb_p__;
	if (r > n) return 0;
	return fact__[n]*finv__[r]%p*finv__[n-r]%p;
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

