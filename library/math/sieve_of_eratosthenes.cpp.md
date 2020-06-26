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
    - Last commit date: 2020-06-26 22:31:28+09:00




## Depends on

* :heavy_check_mark: <a href="../pre/macros.cpp.html">pre/macros.cpp</a>


## Verified with

* :heavy_check_mark: <a href="../../verify/test/aoj_ALDS1_1_C.test.cpp.html">test/aoj_ALDS1_1_C.test.cpp</a>


## Code

<a id="unbundled"></a>
{% raw %}
```cpp
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

	Sieve(int N=1) : N(N), f(N+1) {
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

	vector<int> factorlist(int x) {
		vector<int> res;
		while(x!=1) {
			res.push_back(f[x]);
			x/=f[x];
		}
		return res;
	}

	vector<pair<int,int>> factorcnt(int x) {
		vector<int> fl=factorlist(x);
		if(!fl.size()) return {};
		vector<pair<int,int>> res(1,{fl[0],0});
		for(int p: fl) {
			if(res.back().first==p) {
				res.back().second++;
			}
			else {
				res.push_back({p,1});
			}
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
#line 1 "math/sieve_of_eratosthenes.cpp"



#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#line 1 "pre/macros.cpp"



using ll = long long;

#define MPRIME (ll)1e9+7
#define MMPRIME (1LL<<61)-1


#line 11 "math/sieve_of_eratosthenes.cpp"

struct Sieve {
	int N;
	vector<int> f,primes;

	Sieve(int N=1) : N(N), f(N+1) {
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

	vector<int> factorlist(int x) {
		vector<int> res;
		while(x!=1) {
			res.push_back(f[x]);
			x/=f[x];
		}
		return res;
	}

	vector<pair<int,int>> factorcnt(int x) {
		vector<int> fl=factorlist(x);
		if(!fl.size()) return {};
		vector<pair<int,int>> res(1,{fl[0],0});
		for(int p: fl) {
			if(res.back().first==p) {
				res.back().second++;
			}
			else {
				res.push_back({p,1});
			}
		}
		return res;
	}
};



```
{% endraw %}

<a href="../../index.html">Back to top page</a>

