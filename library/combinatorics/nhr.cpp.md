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


# :question: combinatorics/nhr.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#ac1ed416572b96a9f5d69740d174ef3d">combinatorics</a>
* <a href="{{ site.github.repository_url }}/blob/master/combinatorics/nhr.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-29 22:12:44+09:00




## Depends on

* :question: <a href="mod_ncr.cpp.html">combinatorics/mod_ncr.cpp</a>
* :question: <a href="ncr.cpp.html">combinatorics/ncr.cpp</a>
* :question: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_DPC_5_D.test.cpp.html">test/aoj_DPC_5_D.test.cpp</a>
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
#include "combinatorics/ncr.cpp"
#include "combinatorics/mod_ncr.cpp"

ll nHr(ll n, ll r) {
	if(r==0) return 1;
	if(n==0) return 0;
	return nCr(n+r-1,n-1);
}

ll nHr(ll n, ll r, ll p, vector<ll> &fact, vector<ll> &inv, vector<ll> &finv) {
	if(r==0) return 1;
	if(n==0) return 0;
	return mod_nCr(n+r-1,n-1,p,fact,inv,finv);
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

#line 2 "pre/macros.cpp"
//#ifndef lib_macros
//#define lib_macros

using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1

//#endif // lib_macros
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

#line 11 "combinatorics/mod_ncr.cpp"

ll mod_nCr(ll n, ll r, ll p, vector<ll> &fact, vector<ll> &inv, vector<ll> &finv) {
	if (r > n) return 0;
	return fact[n]*finv[r]%p*finv[n-r]%p;
}


#line 13 "combinatorics/nhr.cpp"

ll nHr(ll n, ll r) {
	if(r==0) return 1;
	if(n==0) return 0;
	return nCr(n+r-1,n-1);
}

ll nHr(ll n, ll r, ll p, vector<ll> &fact, vector<ll> &inv, vector<ll> &finv) {
	if(r==0) return 1;
	if(n==0) return 0;
	return mod_nCr(n+r-1,n-1,p,fact,inv,finv);
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

