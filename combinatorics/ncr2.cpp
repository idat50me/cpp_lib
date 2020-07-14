/*
 * @brief nCr mod p ($r \leq 10^7$)
 * @docs ./docs/ncr2.md
 */

#ifndef lib_ncr2
#define lib_ncr2

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

struct nCr2 {
private:
	vector<ll> fact, inv, finv;
	ll P;

public:
	nCr2(ll n, ll r, ll p) {
		P=p;
		fact.resize(r+1);
		inv.resize(r+1);
		finv.resize(r+1);
		fact[0] = n%P; fact[1] = n%P*(n-1)%P;
		inv[1] = finv[0] = finv[1]=1LL;
		for(ll i=2LL; i<=r; i++) {
			fact[i] = fact[i-1]*(n-i)%P;
			inv[i] = inv[P%i]*(P/i)%P;
			finv[i] = finv[i-1]*inv[i]%P;
		}
	}

	ll calc(ll n, ll r) {
		return fact[r-1]*finv[r]%P;
	}
};

#endif // lib_ncr2
