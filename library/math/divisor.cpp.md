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


# :heavy_check_mark: math/divisor.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#7e676e9e663beb40fd133f5ee24487c2">math</a>
* <a href="{{ site.github.repository_url }}/blob/master/math/divisor.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-13 07:30:35+09:00




## Depends on

* :heavy_check_mark: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/yuki_0888.test.cpp.html">test/yuki_0888.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#ifndef lib_divisor
#define lib_divisor

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

vector<ll> divisor(ll x) {
	vector<ll> result;
	ll i=1;
	for( ; i*i<x; i++) {
		if(x%i) continue;
		result.push_back(i);
		result.push_back(x/i);
	}
	if(i*i==x&&x%i==0)
		result.push_back(i);
	
	sort(result.begin(),result.end());
	return result;
}

#endif // lib_divisor

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "math/divisor.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 1 "pre/macros.cpp"



using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1


#line 11 "math/divisor.cpp"

vector<ll> divisor(ll x) {
	vector<ll> result;
	ll i=1;
	for( ; i*i<x; i++) {
		if(x%i) continue;
		result.push_back(i);
		result.push_back(x/i);
	}
	if(i*i==x&&x%i==0)
		result.push_back(i);
	
	sort(result.begin(),result.end());
	return result;
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

