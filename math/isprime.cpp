/*
 * @brief Isprime(素数判定)
 * @docs 
 */

#ifndef lib_isprime
#define lib_isprime

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

bool isprime(ll n) {
	if (n<2) return false;
	if (n==2) return true;
	if (n%2==0) return false;

	for (ll i=3; i*i<=n; i+=2) if (n%i==0) return false;

	return true;
}

#endif // lib_isprime
