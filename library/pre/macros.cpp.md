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


# :heavy_check_mark: pre/macros.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#6bf9e70a1f928aba143ef1eebe2720b5">pre</a>
* <a href="{{ site.github.repository_url }}/blob/master/pre/macros.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-29 22:36:32+09:00




## Required by

* :heavy_check_mark: <a href="../combinatorics/combinatorics.cpp.html">Combinatorics(組合せ数学) <small>(combinatorics/combinatorics.cpp)</small></a>
* :heavy_check_mark: <a href="../combinatorics/mod_ncr.cpp.html">combinatorics/mod_ncr.cpp</a>
* :warning: <a href="../combinatorics/mod_ncr2.cpp.html">combinatorics/mod_ncr2.cpp</a>
* :heavy_check_mark: <a href="../combinatorics/mod_npr.cpp.html">combinatorics/mod_npr.cpp</a>
* :heavy_check_mark: <a href="../combinatorics/ncr.cpp.html">combinatorics/ncr.cpp</a>
* :warning: <a href="../combinatorics/ncr2.cpp.html">nCr mod p ($r \leq 10^7$) <small>(combinatorics/ncr2.cpp)</small></a>
* :heavy_check_mark: <a href="../combinatorics/nhr.cpp.html">combinatorics/nhr.cpp</a>
* :warning: <a href="../combinatorics/npr.cpp.html">combinatorics/npr.cpp</a>
* :heavy_check_mark: <a href="../combinatorics/pre_mod_comb.cpp.html">combinatorics/pre_mod_comb.cpp</a>
* :heavy_check_mark: <a href="../math/binpow.cpp.html">Binary-Power(繰り返し二乗法) <small>(math/binpow.cpp)</small></a>
* :heavy_check_mark: <a href="../math/divisor.cpp.html">Divisor(約数列挙) <small>(math/divisor.cpp)</small></a>
* :warning: <a href="../math/factorial.cpp.html">Factorial(階乗) <small>(math/factorial.cpp)</small></a>
* :heavy_check_mark: <a href="../math/isprime.cpp.html">Isprime(素数判定) <small>(math/isprime.cpp)</small></a>
* :heavy_check_mark: <a href="../math/sieve_of_eratosthenes.cpp.html">Sieve-of-Eratosthenes(エラトステネスの篩) <small>(math/sieve_of_eratosthenes.cpp)</small></a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_ALDS1_1_C.test.cpp.html">test/aoj_ALDS1_1_C.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/aoj_ALDS1_1_C_2.test.cpp.html">test/aoj_ALDS1_1_C_2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/aoj_DPC_5_D.test.cpp.html">test/aoj_DPC_5_D.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/aoj_ITP1_6_B.test.cpp.html">test/aoj_ITP1_6_B.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/aoj_NTL_1_A.test.cpp.html">test/aoj_NTL_1_A.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/aoj_NTL_1_B.test.cpp.html">test/aoj_NTL_1_B.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/yuki_0117.test.cpp.html">test/yuki_0117.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/yuki_0117_2.test.cpp.html">test/yuki_0117_2.test.cpp</a>
* :heavy_check_mark: <a href="../../verify/test/yuki_0888.test.cpp.html">test/yuki_0888.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#ifndef lib_macros
#define lib_macros

using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1

#endif // lib_macros

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "pre/macros.cpp"



using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

