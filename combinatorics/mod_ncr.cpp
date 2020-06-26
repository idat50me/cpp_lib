#ifndef lib_mod_ncr
#define lib_mod_ncr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

ll mod_nCr(ll n, ll r, ll p, vector<ll> &fact, vector<ll> &inv, vector<ll> &finv) {
	if (r > n) return 0;
	return fact[n]*finv[r]%p*finv[n-r]%p;
}

#endif // lib_mod_ncr
