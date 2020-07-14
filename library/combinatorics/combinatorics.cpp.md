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


# :heavy_check_mark: Combinatorics(組合せ数学) <small>(combinatorics/combinatorics.cpp)</small>

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#ac1ed416572b96a9f5d69740d174ef3d">combinatorics</a>
* <a href="{{ site.github.repository_url }}/blob/master/combinatorics/combinatorics.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-14 02:10:50+09:00




## なにこれ
${}_nP_r, {}_nC_r, {}_nH_r\ (\mathrm{mod}\ p)$ を求める．

## 制約
- $n \leq 10^7$ 程度
- $p$ は素数

## コンストラクタ
- `Combinatorics(mx, p)`：計算量 $O(n)$
	- `mx`：$n$ の最大値．ただし ${}_nH_r$ を求める場合は $(n+r-1)$ の最大値．
	- `p`：値の法．

## メンバ関数
- `nPr(n, r)`：計算量 $O(1)$

- `nCr(n, r)`：計算量 $O(1)$

- `nHr(n, r)`：計算量 $O(1)$


## Depends on

* :heavy_check_mark: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_DPL_5_D.test.cpp.html">test/aoj_DPL_5_D.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/yuki_0117.test.cpp.html">test/yuki_0117.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
/*
 * @brief Combinatorics(組合せ数学)
 * @docs ./docs/combinatorics.md
 */

#ifndef lib_combinatorics
#define lib_combinatorics

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

struct Combinatorics {
private:
	vector<ll> fact, inv, finv;
	ll P;

	void pre_mod_comb(ll mx) {
		fact.resize(mx+1);
		inv.resize(mx+1);
		finv.resize(mx+1);
		fact[0] = fact[1] = inv[1] = finv[0] = finv[1] = 1LL;
		for(ll i=2LL; i<=mx; i++) {
			fact[i] = fact[i-1]*i%P;
			inv[i] = P-inv[P%i]*(P/i)%P;
			finv[i] = finv[i-1]*inv[i]%P;
		}
	}

public:
	Combinatorics(ll mx, ll p) {
		P=p;
		fact.resize(mx+1);
		inv.resize(mx+1);
		finv.resize(mx+1);
		fact[0] = fact[1] = inv[1] = finv[0] = finv[1] = 1LL;
		for(ll i=2LL; i<=mx; i++) {
			fact[i] = fact[i-1]*i%P;
			inv[i] = P-inv[P%i]*(P/i)%P;
			finv[i] = finv[i-1]*inv[i]%P;
		}
	}

	ll nPr(ll n, ll r) {
		assert(n>=0 && r>=0);
		if (r > n) return 0;
		return fact[n]*finv[n-r]%P;
	}

	ll nCr(ll n, ll r) {
		assert(n>=0 && r>=0);
		if (r > n) return 0;
		return fact[n]*finv[r]%P*finv[n-r]%P;
	}

	ll nHr(ll n, ll r) {
		assert(n>=0 && r>=0);
		if(r == 0) return 1;
		if(n == 0) return 0;
		return nCr(n+r-1,n-1);
	}
};

#endif // lib_combinatorics

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
onlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: combinatorics/combinatorics.cpp: line 15: unable to process #include in #if / #ifdef / #ifndef other than include guards

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

