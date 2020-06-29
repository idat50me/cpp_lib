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


# :heavy_check_mark: test/aoj_ALDS1_1_C_2.test.cpp

<a href="../../index.html">Back to top page</a>

* category: <a href="../../index.html#098f6bcd4621d373cade4e832627b4f6">test</a>
* <a href="{{ site.github.repository_url }}/blob/master/test/aoj_ALDS1_1_C_2.test.cpp">View this file on GitHub</a>
    - Last commit date: 2020-06-29 22:12:44+09:00


* see: <a href="https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C">https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C</a>


## Depends on

* :heavy_check_mark: <a href="../../library/math/isprime.cpp.html">math/isprime.cpp</a>
* :question: <a href="../../library/pre/macros.cpp.html">pre/macros.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "math/isprime.cpp"

int main() {
	int n; cin>>n;
	int res=0;
	for(int i=0; i<n; i++) {
		int a; cin>>a;
		if(isprime(a)) res++;
	}
	cout<<res<<endl;
}

```
{% endraw %}

<a id="bundled"></a>
{% raw %}
```cpp
#line 1 "test/aoj_ALDS1_1_C_2.test.cpp"
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 2 "pre/macros.cpp"
//#ifndef lib_macros
//#define lib_macros

using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1

//#endif // lib_macros
#line 1 "math/isprime.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 11 "math/isprime.cpp"

bool isprime(ll n) {
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;

	for (ll i=3; i*i<=n; i+=2) if (n%i==0) return false;

	return true;
}


#line 11 "test/aoj_ALDS1_1_C_2.test.cpp"

int main() {
	int n; cin>>n;
	int res=0;
	for(int i=0; i<n; i++) {
		int a; cin>>a;
		if(isprime(a)) res++;
	}
	cout<<res<<endl;
}

```
{% endraw %}

<a href="../../index.html">Back to top page</a>

