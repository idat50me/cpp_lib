#ifndef lib_mod_ncr
#define lib_mod_ncr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "combinatorics/pre_mod_comb.cpp"

extern vector<ll> fact__,inv__,finv__;
extern ll mod_comb_p__;

ll mod_nCr(ll n, ll r) {
	ll p=mod_comb_p__;
	if (r > n) return 0;
	return fact__[n]*finv__[r]%p*finv__[n-r]%p;
}

#endif // lib_mod_ncr