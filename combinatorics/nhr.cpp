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

// ncrmd is func nCr mode
// (0: nCr  1: mod_nCr)
ll nHr(ll n, ll r, ll p=-1, vector<ll> &fact=dummy, vector<ll> &inv=dummy, vector<ll> &finv=dummy, int ncrmd=0) {
	switch(ncrmd) {
		case 0:
			return nCr(n+r-1,r-1);
		case 1:
			return mod_nCr(n+r-1,r-1,p,fact,inv,finv);
		default:
			return -1;
	}
}

#endif // lib_nhr
