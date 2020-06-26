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


# :warning: combinatorics/npr.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#ac1ed416572b96a9f5d69740d174ef3d">combinatorics</a>
* <a href="{{ site.github.repository_url }}/blob/master/combinatorics/npr.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-26 17:55:02+09:00




## Depends on

* :heavy_check_mark: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


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
#include "pre/macros.cpp"

ll nPr(ll n, ll r, ll p=MMPRIME) {
	if(n<r) return 0LL;

	ll res=1LL;
	for(int i=0; i<r; i++) res = res*(n-i)%p;
	return res;
}

#endif // lib_npr

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "combinatorics/npr.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif
#line 1 "pre/macros.cpp"



using ll = long long;

#define MPRIME (ll)10e9+7
#define MMPRIME (1LL<<61)-1


#line 10 "combinatorics/npr.cpp"

ll nPr(ll n, ll r, ll p=MMPRIME) {
	if(n<r) return 0LL;

	ll res=1LL;
	for(int i=0; i<r; i++) res = res*(n-i)%p;
	return res;
}



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

