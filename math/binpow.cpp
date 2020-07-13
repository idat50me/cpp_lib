/*
 * @title Binary-Power(繰り返し二乗法)
 */

#ifndef lib_binpow
#define lib_binpow

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

ll binpow(ll a, ll ex, ll p=(1LL<<60)) {
	ll res = 1;
	while(ex > 0) {
		if(ex & 1) res = res*a%p;
		ex>>=1;
		a = a*a%p;
	}
	return res;
}

#endif /* lib_binpow */