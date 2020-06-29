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


# :heavy_check_mark: math/isprime.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#7e676e9e663beb40fd133f5ee24487c2">math</a>
* <a href="{{ site.github.repository_url }}/blob/master/math/isprime.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-29 22:36:32+09:00




## Depends on

* :question: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_ALDS1_1_C_2.test.cpp.html">test/aoj_ALDS1_1_C_2.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#ifndef lib_isprime
#define lib_isprime

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

bool isprime(ll n) {
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;

	for (ll i=3; i*i<=n; i+=2) if (n%i==0) return false;

	return true;
}

#endif // lib_isprime

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "math/isprime.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 1 "pre/macros.cpp"



using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1


#line 11 "math/isprime.cpp"

bool isprime(ll n) {
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;

	for (ll i=3; i*i<=n; i+=2) if (n%i==0) return false;

	return true;
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

