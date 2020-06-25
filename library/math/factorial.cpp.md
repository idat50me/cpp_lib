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


# :x: math/factorial.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#7e676e9e663beb40fd133f5ee24487c2">math</a>
* <a href="{{ site.github.repository_url }}/blob/master/math/factorial.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-25 23:23:03+09:00




## Verified with

* :x: <a href="../../verify/test/aoj_0019.test.cpp.html">test/aoj_0019.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#ifndef lib_factorial
#define lib_factorial

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

long long factorial(long long x, long long p=(1LL<<60)) {
	long long res=1;
	while(x>1) res = res*x%p;
	return res;
}

#endif // lib_factorial

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "math/factorial.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

long long factorial(long long x, long long p=(1LL<<60)) {
	long long res=1;
	while(x>1) res = res*x%p;
	return res;
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

