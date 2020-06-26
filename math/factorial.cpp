#ifndef lib_factorial
#define lib_factorial

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif
#ifndef call_macros
#define call_macros
#include "pre/macros.cpp"
#endif

ll factorial(ll x, ll p=(1LL<<60)) {
	ll res=1;
	while(x>1) res = res*x%p;
	return res;
}

#endif // lib_factorial
