#ifndef lib_mod_npr
#define lib_mod_npr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "combinatorics/pre_mod_comb.cpp"

ll mod_nPr(ll n, ll r) {
	ll p=mod_comb_p__;
	if (r > n) return 0;
	return fact__[n]*finv__[n-r]%p;
}

#endif // lib_mod_npr