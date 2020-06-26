#ifndef lib_pre_mod_comb
#define lib_pre_mod_comb

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

void pre_mod_comb(ll mx, ll p, vector<ll> &fact, vector<ll> &inv, vector<ll> &finv) {
	fact.resize(mx+1);
	inv.resize(mx+1);
	finv.resize(mx+1);
	fact[0]=fact[1]=inv[1]=finv[0]=finv[1]=1LL;
	for(ll i=2LL; i<=mx; i++) {
		fact[i]=fact[i-1]*i%p;
		inv[i]=p-inv[p%i]*(p/i)%p;
		finv[i]=finv[i-1]*inv[i]%p;
	}
}

#endif // lib_pre_mod_comb