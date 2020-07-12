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


# :heavy_check_mark: math/sieve_of_eratosthenes.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#7e676e9e663beb40fd133f5ee24487c2">math</a>
* <a href="{{ site.github.repository_url }}/blob/master/math/sieve_of_eratosthenes.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-13 02:29:15+09:00




## なにこれ



## Depends on

* :heavy_check_mark: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_ALDS1_1_C.test.cpp.html">test/aoj_ALDS1_1_C.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
// @docs ./docs/sieve_of_eratosthenes.md

#ifndef lib_sieve_of_eratosthenes
#define lib_sieve_of_eratosthenes

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

struct Sieve {
	int N;
	vector<int> f,primes;

	Sieve(int n=1) : N(n), f(n+1,0) {
		f[0]=f[1]=-1;
		for(int i=2; i<=N; i++) {
			if(f[i]) continue;
			primes.push_back(i);
			f[i]=i;
			if(i>(1<<15)) continue;
			for(int j=i*i; j<=N; j+=i) if(!f[j]) f[j]=i;
		}
	}

	bool isprime(int x) { return f[x]==x; }

	vector<pair<int,int>> primefact(int x) {
		vector<pair<int,int>> res;
		for(int i=0; i<primes.size() && x>1; i++) {
			int cnt=0;
			while(x%primes[i]==0) {
				x/=primes[i];
				cnt++;
			}
			if(cnt) res.push_back({primes[i],cnt});
		}
		return res;
	}

	int divisorcount(int x) {
		int res=1;
		vector<pair<int,int>> fl=primefact(x);
		for(int i=0; i<fl.size(); i++) {
			res*=fl[i].second;
		}
		return res;
	}
};

#endif // lib_sieve_of_eratosthenes

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
onlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: math/sieve_of_eratosthenes.cpp: line 12: unable to process #include in #if / #ifdef / #ifndef other than include guards

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

