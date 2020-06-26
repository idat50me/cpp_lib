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


# :x: combinatorics/nhr.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#ac1ed416572b96a9f5d69740d174ef3d">combinatorics</a>
* <a href="{{ site.github.repository_url }}/blob/master/combinatorics/nhr.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-26 18:06:56+09:00




## Depends on

* :x: <a href="mod_ncr.cpp.html">combinatorics/mod_ncr.cpp</a>
* :x: <a href="mod_ncr2.cpp.html">combinatorics/mod_ncr2.cpp</a>
* :x: <a href="ncr.cpp.html">combinatorics/ncr.cpp</a>
* :x: <a href="pre_mod_comb.cpp.html">combinatorics/pre_mod_comb.cpp</a>
* :question: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :x: <a href="../../verify/test/yuki_0117.test.cpp.html">test/yuki_0117.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#ifndef lib_nhr
#define lib_nhr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "combinatorics/pre_mod_comb.cpp"
#include "combinatorics/ncr.cpp"
#include "combinatorics/mod_ncr.cpp"
#include "combinatorics/mod_ncr2.cpp"

// ncrmd is func nCr mode
// (0: nCr  1: mod_nCr  2: mod_nCr2)
ll nHr(ll n, ll r, int ncrmd=0) {
	switch(ncrmd) {
		case 0:
			return nCr(n+r-1,r-1);
		case 1:
			return mod_nCr(n+r-1,r-1);
		default:
			return mod_nCr2(n+r-1,r-1);
	}
}

#endif // lib_nhr

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "combinatorics/nhr.cpp"



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


#line 1 "combinatorics/ncr.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 11 "combinatorics/ncr.cpp"

ll nCr(ll n, ll r) {
	if(n == r) return 1;
	if(r > n) return 0;
	if(n == 0) return 0;

	if(r > n / 2) r = n-r;
	if(r == 0) return 1;

	ll res = 1;
	for(ll i = 1; i <= r; i++) {
		res *= (n - i + 1) / i;
	}

	return res;
}


#line 1 "combinatorics/mod_ncr.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 12 "combinatorics/mod_ncr.cpp"

extern vector<ll> fact__,inv__,finv__;
extern ll mod_comb_p__;

ll mod_nCr(ll n, ll r) {
	ll p=mod_comb_p__;
	if (r > n) return 0;
	return fact__[n]*finv__[r]%p*finv__[n-r]%p;
}


#line 1 "combinatorics/mod_ncr2.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

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


#line 15 "combinatorics/nhr.cpp"

// ncrmd is func nCr mode
// (0: nCr  1: mod_nCr  2: mod_nCr2)
ll nHr(ll n, ll r, int ncrmd=0) {
	switch(ncrmd) {
		case 0:
			return nCr(n+r-1,r-1);
		case 1:
			return mod_nCr(n+r-1,r-1);
		default:
			return mod_nCr2(n+r-1,r-1);
	}
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

