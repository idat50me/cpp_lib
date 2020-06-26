#ifndef lib_nhr
#define lib_nhr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "combinatorics/pre_mod_comb.cpp"
#include "combinatorics/ncr.cpp"
#include "combinatorics/mod_ncr.cpp"
#include "combinatorics/mod_ncr2.cpp"

vector<ll> dummy;

ll nHr(ll n, ll r) {
	if(n==0) return 0;
	if(r==0) return 1;
	return nCr(n+r-1,n-1);
}

ll nHr(ll n, ll r, ll p, vector<ll> &fact, vector<ll> &inv, vector<ll> &finv) {
	if(n==0) return 0;
	if(r==0) return 1;
	return mod_nCr(n+r-1,n-1,p,fact,inv,finv);
}

#endif // lib_nhr
