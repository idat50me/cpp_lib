/*
 * @title Factorial(階乗)
 */

#ifndef lib_factorial
#define lib_factorial

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

ll factorial(ll x, ll p=(1LL<<60)) {
	ll res = 1;
	while(x > 1) res = res*x%p;
	return res;
}

#endif // lib_factorial
