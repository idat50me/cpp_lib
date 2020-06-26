#ifndef lib_mod_ncr2
#define lib_mod_ncr2

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

vector<ll> fact2__,inv2__,finv2__;
ll mod_ncr2_p__;

void pre_mod_nCr2(ll n, ll r, ll p) {
	mod_ncr2_p__=p;
	fact2__.resize(r+1);
	inv2__.resize(r+1);
	finv2__.resize(r+1);
	fact2__[0]=n%p, fact2__[1]=n%p*(n-1)%p;
	inv2__[1]=finv2__[0]=finv2__[1]=1LL;
	for(ll i=2LL; i<=r; i++) {
		fact2__[i]=fact2__[i-1]*(n-i)%p;
		inv2__[i]=p-inv2__[p%i]*(p/i)%p;
		finv2__[i]=finv2__[i-1]*inv2__[i]%p;
	}
}

ll mod_nCr2(ll n, ll r) {
	return fact2__[r-1]*finv2__[r]%mod_ncr2_p__;
}

#endif // lib_mod_ncr2