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


# :heavy_check_mark: Millor-Rabin(ミラー・ルビン素数判定法) <small>(math/millor_rabin.cpp)</small>

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#7e676e9e663beb40fd133f5ee24487c2">math</a>
* <a href="{{ site.github.repository_url }}/blob/master/math/millor_rabin.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-18 12:54:39+09:00




## Depends on

* :heavy_check_mark: <a href="binpow.cpp.html">Binary-Power(繰り返し二乗法) <small>(math/binpow.cpp)</small></a>
* :heavy_check_mark: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_ALDS1_1_C_3.test.cpp.html">test/aoj_ALDS1_1_C_3.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
/*
 * @brief Millor-Rabin(ミラー・ルビン素数判定法)
 */

#ifndef lib_millor_rabin
#define lib_millor_rabin

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../math/binpow.cpp"

bool isprime(int n) {
	if(n == 2) return true;
	if(n < 2 || n%2 == 0) return false;

	int d=n-1, s=0;
	while(d%2 == 0) {
		s++;
		d >>= 1;
	}

	int a[]={2,7,61};
	for(int i = 0; i < 3; i++) {
		if(a[i] >= n) continue;

		ll r = binpow(a[i], d, n);
		if(r == 1 || r == n-1) continue;
		
		for(int j = 1; j < s; j++) {
			r = r * r % n;
			if(r == n-1) break;
		}
		if(r != n-1) return false;
	}

	return true;
}

#endif // lib_millor_rabin

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
Traceback (most recent call last):
  File "/opt/hostedtoolcache/Python/3.8.3/x64/lib/python3.8/site-packages/onlinejudge_verify/docs.py", line 349, in write_contents
    bundled_code = language.bundle(self.file_class.file_path, basedir=pathlib.Path.cwd())
  File "/opt/hostedtoolcache/Python/3.8.3/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py", line 185, in bundle
    bundler.update(path)
  File "/opt/hostedtoolcache/Python/3.8.3/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py", line 306, in update
    raise BundleErrorAt(path, i + 1, "unable to process #include in #if / #ifdef / #ifndef other than include guards")
onlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: math/millor_rabin.cpp: line 14: unable to process #include in #if / #ifdef / #ifndef other than include guards

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

