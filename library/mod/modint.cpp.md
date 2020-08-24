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


# :heavy_check_mark: ModInt <small>(mod/modint.cpp)</small>

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#ad148a3ca8bd0ef3b48c52454c493ec5">mod</a>
* <a href="{{ site.github.repository_url }}/blob/master/mod/modint.cpp">View this file on GitHub</a>
    - Last commit date: 2020-08-24 23:39:45+09:00




## Depends on

* :heavy_check_mark: <a href="../math/binpow.cpp.html">Binary-Power(繰り返し二乗法) <small>(math/binpow.cpp)</small></a>
* :heavy_check_mark: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_0341.test.cpp.html">test/aoj_0341.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
/*
 * @brief ModInt
 */

#ifndef lib_mint
#define lib_mint

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../math/binpow.cpp"

template<int mod>
struct mint {
private:

	//int mod;
	long long val;

public:

	mint(long long x=0) : val((mod+x%mod)%mod) {}

	mint pow(long long ex) const {
		return mint(binpow(val, ex, mod));
	}

	mint inv() const {
		return pow(mod-2);
	}

	mint operator-() const {
		return mint(-val);
	}

	mint& operator+=(const mint& a) {
		(val+=a.val) %= mod;
		return *this;
	}
	mint& operator-=(const mint& a) {
		(val+=mod-a.val) %= mod;
		return *this;
	}
	mint& operator*=(const mint& a) {
		(val*=a.val) %= mod;
		return *this;
	}
	mint& operator/=(const mint& a) {
		return (*this) *= a.inv();
	}

	mint operator+(const mint& a) const {
		mint res(*this);
		return res+=a;
	}
	mint operator-(const mint& a) const {
		mint res(*this);
		return res-=a;
	}
	mint operator*(const mint& a) const {
		mint res(*this);
		return res*=a;
	}
	mint operator/(const mint& a) const {
		mint res(*this);
		return res/=a;
	}

	mint& operator++() {
		(++val) %= mod;
		return *this;
	}
	mint operator++(int) {
		mint res(*this);
		(++val) %= mod;
		return res;
	}
	mint& operator--() {
		(val+=mod-1) %= mod;
		return *this;
	}
	mint operator--(int) {
		mint res(*this);
		(val+=mod-1) %= mod;
		return res;
	}

	bool operator==(const mint& a) const {
		return val == a.val;
	}
	bool operator!=(const mint& a) const {
		return val != a.val;
	}
	bool operator<(const mint& a) const {
		return val < a.val;
	}
	bool operator>(const mint& a) const {
		return val > a.val;
	}
	bool operator<=(const mint& a) const {
		return val <= a.val;
	}
	bool operator>=(const mint& a) const {
		return val >= a.val;
	}

	mint& operator=(const mint& a) {
		val = a.val;
		return *this;
	}

	friend ostream& operator<<(ostream& os, const mint& a) {
		return os << a.val;
	}
	friend istream& operator>>(istream& is, mint &a) {
		long long n;
		is >> n;
		a = mint(n);
		return is;
	}
};

#endif // lib_mint

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
Traceback (most recent call last):
  File "/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/docs.py", line 349, in write_contents
    bundled_code = language.bundle(self.file_class.file_path, basedir=pathlib.Path.cwd())
  File "/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py", line 185, in bundle
    bundler.update(path)
  File "/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py", line 398, in update
    raise BundleErrorAt(path, i + 1, "unable to process #include in #if / #ifdef / #ifndef other than include guards")
onlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: mod/modint.cpp: line 14: unable to process #include in #if / #ifdef / #ifndef other than include guards

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

