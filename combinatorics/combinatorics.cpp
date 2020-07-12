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
	vector<ll> fact_, inv_, finv_;
	ll P;

	void pre_mod_comb(ll mx) {
		fact_.resize(mx+1);
		inv_.resize(mx+1);
		finv_.resize(mx+1);
		fact_[0] = fact_[1] = inv_[1] = finv_[0] = finv_[1] = 1LL;
		for(ll i=2LL; i<=mx; i++) {
			fact_[i] = fact_[i-1]*i%P;
			inv_[i] = P-inv_[P%i]*(P/i)%P;
			finv_[i] = finv_[i-1]*inv_[i]%P;
		}
	}

public:
	Combinatorics(ll mx, ll p) {
		P=p;
		pre_mod_comb(mx);
	}

	ll nPr(ll n, ll r) {
		assert(n>=0 && r>=0);
		if (r > n) return 0;
		return fact_[n]*finv_[n-r]%P;
	}

	ll nCr(ll n, ll r) {
		assert(n>=0 && r>=0);
		if (r > n) return 0;
		return fact_[n]*finv_[r]%P*finv_[n-r]%P;
	}

	ll nHr(ll n, ll r) {
		assert(n>=0 && r>=0);
		if(r == 0) return 1;
		if(n == 0) return 0;
		return nCr(n+r-1,n-1);
	}
};

#endif // lib_combinatorics
