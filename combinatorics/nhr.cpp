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

// ncrmd is func nCr mode
// (0: nCr  1: mod_nCr  2: mod_nCr2)
ll nHr(ll n, ll r, int ncrmd=0) {
	switch(ncrmd) {
		case 0:
			return nCr(n+r-1,r-1);
		case 1:
			return mod_nCr(n+r-1,r-1);
		default:
			return mod_nCr2(n+r-1,r-1);
	}
}

#endif // lib_nhr
