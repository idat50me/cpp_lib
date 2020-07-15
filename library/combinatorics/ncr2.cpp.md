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


# :heavy_check_mark: nCr mod p ($r \leq 10^7$, クエリ $O(r)$) <small>(combinatorics/ncr2.cpp)</small>

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#ac1ed416572b96a9f5d69740d174ef3d">combinatorics</a>
* <a href="{{ site.github.repository_url }}/blob/master/combinatorics/ncr2.cpp">View this file on GitHub</a>
    - Last commit date: 2020-07-15 16:59:17+09:00




## なにこれ
${}_nC_r\ (\mathrm{mod}\ p)$ を求める．
計算量が $r$ 依存．

## 制約
- $n \leq 10^9$ 程度
- $r \leq 10^7$ 程度
- $p$ は素数

## コンストラクタ
- `nCr2(n, r, p)`：計算量 $O(r)$  
	$n$ が固定値のとき使う．
	- `n`：固定値 $n$
	- `r`：$r$ の最大値．
	- `p`：値の法．

- `nCr2(r, p)`：計算量 $O(r)$  
	$n$ が不定値のとき使う．
	- `r`：$r$ の最大値．
	- `p`：値の法．


## メンバ関数
- `calc(n, r)`：計算量 $O(1)$ or $O(r)$  
	${}_nC_r$ を求める．  
	$n$ が固定値のときは $O(1)$，不定値のときは $O(r)$


## Depends on

* :heavy_check_mark: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_DPL_5_E.test.cpp.html">test/aoj_DPL_5_E.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/aoj_DPL_5_E_2.test.cpp.html">test/aoj_DPL_5_E_2.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
/*
 * @brief nCr mod p ($r \leq 10^7$, クエリ $O(r)$)
 * @docs ./docs/ncr2.md
 */

#ifndef lib_ncr2
#define lib_ncr2

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

struct nCr2 {
private:
	vector<ll> comb, inv, finv;
	ll P;

	void calc_inv(ll r) {
		inv.resize(r+1);
		finv.resize(r+1);
		inv[1] = finv[0] = finv[1]=1LL;
		for(int i=2; i<=r; i++) {
			inv[i] = P-inv[P%i]*(P/i)%P;
			finv[i] = finv[i-1]*inv[i]%P;
		}
	}

public:
	nCr2(ll n, ll r, ll p) {
		if(n/2 < r) r = n/2;
		P=p;
		calc_inv(r);

		comb.resize(r+1);
		comb[0]=1;
		for(int i=1; i<=r; i++) {
			comb[i] = comb[i-1]*(n-i+1)%P*inv[i]%P;
		}
	}

	nCr2(ll r, ll p) {
		P=p;
		calc_inv(r);
	}

	ll calc(ll n, ll r) {
		assert(r >= 0);
		if(r > n) return 0;
		if(r > n/2) r = n-r;
		if(comb.size() > 0)
			return comb[r];
		else {
			ll f=1;
			for(ll i=n; i>n-r; i--) {
				f = f*i%P;
			}
			return f*finv[r]%P;
		}
	}
};

#endif // lib_ncr2

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
onlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: combinatorics/ncr2.cpp: line 15: unable to process #include in #if / #ifdef / #ifndef other than include guards

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

