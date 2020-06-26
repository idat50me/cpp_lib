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
    - Last commit date: 2020-06-26 15:36:58+09:00




## Required by

* :heavy_check_mark: <a href="../math/binpow.cpp.html">math/binpow.cpp</a>
* :warning: <a href="../math/factorial.cpp.html">math/factorial.cpp</a>
* :warning: <a href="../math/npr.cpp.html">math/npr.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_NTL_1_B.test.cpp.html">test/aoj_NTL_1_B.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
using ll = long long;
```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "pre/macros.cpp"
using ll = long long;

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

