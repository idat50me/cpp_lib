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


# :heavy_check_mark: test/aoj_DPC_5_D.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/aoj_DPC_5_D.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-26 21:55:37+09:00


* see: <a href="https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D">https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D</a>


## Depends on

* :heavy_check_mark: <a href="../../library/combinatorics/mod_ncr.cpp.html">combinatorics/mod_ncr.cpp</a>
* :heavy_check_mark: <a href="../../library/combinatorics/ncr.cpp.html">combinatorics/ncr.cpp</a>
* :heavy_check_mark: <a href="../../library/combinatorics/nhr.cpp.html">combinatorics/nhr.cpp</a>
* :heavy_check_mark: <a href="../../library/combinatorics/pre_mod_comb.cpp.html">combinatorics/pre_mod_comb.cpp</a>
* :question: <a href="../../library/pre/macros.cpp.html">pre/macros.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "combinatorics/pre_mod_comb.cpp"
#include "combinatorics/nhr.cpp"

int main() {
	vector<ll> fact,inv,finv;
	pre_mod_comb(2100,MPRIME,fact,inv,finv);
	int n,k; cin>>n>>k;
	cout<<nHr(k,n,MPRIME,fact,inv,finv)<<endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/aoj_DPC_5_D.test.cpp"
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 1 "pre/macros.cpp"



using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1


#line 1 "combinatorics/pre_mod_comb.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 11 "combinatorics/pre_mod_comb.cpp"

void pre_mod_comb(ll mx, ll p, vector<ll> &fact, vector<ll> &inv, vector<ll> &finv) {
	fact.resize(mx+1);
	inv.resize(mx+1);
	finv.resize(mx+1);
	fact[0]=fact[1]=inv[1]=finv[0]=finv[1]=1LL;
	for(ll i=2LL; i<=mx; i++) {
		fact[i]=fact[i-1]*i%p;
		inv[i]=p-inv[p%i]*(p/i)%p;
		finv[i]=finv[i-1]*inv[i]%p;
	}
}


#line 1 "combinatorics/nhr.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

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


#line 12 "test/aoj_DPC_5_D.test.cpp"

int main() {
	vector<ll> fact,inv,finv;
	pre_mod_comb(2100,MPRIME,fact,inv,finv);
	int n,k; cin>>n>>k;
	cout<<nHr(k,n,MPRIME,fact,inv,finv)<<endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

