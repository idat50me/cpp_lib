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


# :heavy_check_mark: Sieve-of-Eratosthenes(エラトステネスの篩) <small>(math/sieve_of_eratosthenes.cpp)</small>

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#7e676e9e663beb40fd133f5ee24487c2">math</a>
* <a href="{{ site.github.repository_url }}/blob/master/math/sieve_of_eratosthenes.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-27 00:41:15+09:00




## なにこれ
エラトステネスの篩というやつ．
前処理して素数判定を高速にやるなど．

## 制約
- $n \leq 10^7$ 程度．

## コンストラクタ
- `Sieve(n)`：計算量 $O(n \log\log n)$  
	- `n`：処理する最大値．

## メンバ関数
- `isprime(x)`：計算量 $O(1)$  
	$x$ の素数判定

- `primefact(n)`：計算量 $O(\log n)$  
	$n$ の素因数分解．$\\{素因数,個数\\}$ の pair の vector を返す．

- `divisorcount(n)`：計算量 $O(\log n)$  
	$n$ の約数の個数  
	計算量は`primefact(n)`依存


## Depends on

* :question: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_ALDS1_1_C.test.cpp.html">test/aoj_ALDS1_1_C.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/aoj_NTL_1_A.test.cpp.html">test/aoj_NTL_1_A.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
/*
 * @brief Sieve-of-Eratosthenes(エラトステネスの篩)
 * @docs ./docs/sieve_of_eratosthenes.md
 */

#ifndef lib_sieve_of_eratosthenes
#define lib_sieve_of_eratosthenes

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../pre/macros.cpp"

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

	bool isprime(int x) {
		return f[x]==x;
	}

	vector<pair<int,int>> primefact(int n) {
		vector<pair<int,int>> res={{f[n],1}};
		n /= f[n];
		while(n>1) {
			int dv=f[n];
			if(res.back().first==dv) res.back().second++;
			else res.push_back({dv,1});
			n /= dv;
		}
		return res;
	}

	int divisorcount(int n) {
		int res=1;
		vector<pair<int,int>> fl=primefact(n);
		for(int i=0; i<fl.size(); i++) {
			res *= fl[i].second;
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
onlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: math/sieve_of_eratosthenes.cpp: line 15: unable to process #include in #if / #ifdef / #ifndef other than include guards

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

