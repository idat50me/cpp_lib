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


# :x: math/nhr.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#7e676e9e663beb40fd133f5ee24487c2">math</a>
* <a href="{{ site.github.repository_url }}/blob/master/math/nhr.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-26 16:38:33+09:00




## Depends on

* :x: <a href="ncr.cpp.html">math/ncr.cpp</a>
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
#include "math/ncr.cpp"

ll nHr(ll n, ll r) {
	return nCr(n+r-1,r-1);
}

#endif // lib_nhr

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "math/nhr.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 1 "pre/macros.cpp"



using ll = long long;

#define MPRIME 10e9+7


#line 1 "math/ncr.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 11 "math/ncr.cpp"

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


#line 12 "math/nhr.cpp"

ll nHr(ll n, ll r) {
	return nCr(n+r-1,r-1);
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

