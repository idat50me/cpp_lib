/*
 * @brief Combinatorics(組合せ数学)
 * @docs ./docs/combinatorics.md
 */

#ifndef lib_combinatorics
#define lib_combinatorics

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

struct Combinatorics {
private:
	vector<ll> fact, inv, finv;
	ll P;

	void pre_mod_comb(ll mx) {
		fact.resize(mx+1);
		inv.resize(mx+1);
		finv.resize(mx+1);
		fact[0] = fact[1] = inv[1] = finv[0] = finv[1] = 1LL;
		for(ll i=2LL; i<=mx; i++) {
			fact[i] = fact[i-1]*i%P;
			inv[i] = P-inv[P%i]*(P/i)%P;
			finv[i] = finv[i-1]*inv[i]%P;
		}
	}

public:
	Combinatorics(ll mx, ll p) {
		P=p;
		fact.resize(mx+1);
		inv.resize(mx+1);
		finv.resize(mx+1);
		fact[0] = fact[1] = inv[1] = finv[0] = finv[1] = 1LL;
		for(ll i=2LL; i<=mx; i++) {
			fact[i] = fact[i-1]*i%P;
			inv[i] = P-inv[P%i]*(P/i)%P;
			finv[i] = finv[i-1]*inv[i]%P;
		}
	}

	ll nPr(ll n, ll r) {
		assert(n>=0 && r>=0);
		if (r > n) return 0;
		return fact[n]*finv[n-r]%P;
	}

	ll nCr(ll n, ll r) {
		assert(n>=0 && r>=0);
		if (r > n) return 0;
		return fact[n]*finv[r]%P*finv[n-r]%P;
	}

	ll nHr(ll n, ll r) {
		assert(n>=0 && r>=0);
		if(r == 0) return 1;
		if(n == 0) return 0;
		return nCr(n+r-1,n-1);
	}
};

#endif // lib_combinatorics
