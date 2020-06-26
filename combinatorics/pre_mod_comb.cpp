#ifndef lib_pre_mod_comb
#define lib_pre_mod_comb

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

vector<ll> fact__,inv__,finv__;
ll mod_comb_p__;

void pre_mod_comb(ll mx, ll p) {
	mod_comb_p__=p;
	fact__.resize(mx+1);
	inv__.resize(mx+1);
	finv__.resize(mx+1);
	fact__[0]=fact__[1]=inv__[1]=finv__[0]=finv__[1]=1LL;
	for(ll i=2LL; i<=mx; i++) {
		fact__[i]=fact__[i-1]*i%p;
		inv__[i]=p-inv__[p%i]*(p/i)%p;
		finv__[i]=finv__[i-1]*inv__[i]%p;
	}
}

#endif // lib_pre_mod_comb