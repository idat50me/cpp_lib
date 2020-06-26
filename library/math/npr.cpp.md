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


# :warning: math/npr.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#7e676e9e663beb40fd133f5ee24487c2">math</a>
* <a href="{{ site.github.repository_url }}/blob/master/math/npr.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-26 15:29:49+09:00




## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#ifndef lib_npr
#define lib_npr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

long long nPr(long long n, long long r, long long p=numeric_limits<long long>::max()) {
	if(n<r) return 0LL;

	long long res=1LL;
	for(int i=0; i<r; i++) res = res*(n-i)%p;
	return res;
}

#endif // lib_npr
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "math/npr.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

long long nPr(long long n, long long r, long long p=numeric_limits<long long>::max()) {
	if(n<r) return 0LL;

	long long res=1LL;
	for(int i=0; i<r; i++) res = res*(n-i)%p;
	return res;
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

