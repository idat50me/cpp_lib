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


# :heavy_check_mark: combinatorics/mod_npr.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#ac1ed416572b96a9f5d69740d174ef3d">combinatorics</a>
* <a href="{{ site.github.repository_url }}/blob/master/combinatorics/mod_npr.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-29 22:36:32+09:00




## Depends on

* :question: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/yuki_0117.test.cpp.html">test/yuki_0117.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#ifndef lib_mod_npr
#define lib_mod_npr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

ll mod_nPr(ll n, ll r, ll p, vector<ll> &fact, vector<ll> &inv, vector<ll> &finv) {
	if (r > n) return 0;
	return fact[n]*finv[n-r]%p;
}

#endif // lib_mod_npr
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "combinatorics/mod_npr.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 1 "pre/macros.cpp"



using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1


#line 11 "combinatorics/mod_npr.cpp"

ll mod_nPr(ll n, ll r, ll p, vector<ll> &fact, vector<ll> &inv, vector<ll> &finv) {
	if (r > n) return 0;
	return fact[n]*finv[n-r]%p;
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

