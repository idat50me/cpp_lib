/*
 * @brief Factorial(階乗)
 */

#ifndef lib_factorial
#define lib_factorial

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../pre/macros.cpp"

ll factorial(ll x, ll p=(1LL<<62)-1) {
	ll res = 1;
	for(int i=2; i<=x; i++) res = res*i%p;
	return res;
}

#endif // lib_factorial
