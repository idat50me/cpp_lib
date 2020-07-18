/*
 * @brief nCr mod p ($r \leq 10^7$, クエリ $O(r)$)
 * @docs ./docs/ncr2.md
 */

#ifndef lib_ncr2
#define lib_ncr2

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../pre/macros.cpp"

struct nCr2 {
private:
	vector<ll> comb, inv, finv;
	ll P;

	void calc_inv(ll r) {
		inv.resize(r+1);
		finv.resize(r+1);
		inv[1] = finv[0] = finv[1]=1LL;
		for(int i=2; i<=r; i++) {
			inv[i] = P-inv[P%i]*(P/i)%P;
			finv[i] = finv[i-1]*inv[i]%P;
		}
	}

public:
	nCr2(ll n, ll r, ll p) {
		if(n/2 < r) r = n/2;
		P=p;
		calc_inv(r);

		comb.resize(r+1);
		comb[0]=1;
		for(int i=1; i<=r; i++) {
			comb[i] = comb[i-1]*(n-i+1)%P*inv[i]%P;
		}
	}

	nCr2(ll r, ll p) {
		P=p;
		calc_inv(r);
	}

	ll calc(ll n, ll r) {
		assert(r >= 0);
		if(r > n) return 0;
		if(r > n/2) r = n-r;
		if(comb.size() > 0)
			return comb[r];
		else {
			ll f=1;
			for(ll i=n; i>n-r; i--) {
				f = f*i%P;
			}
			return f*finv[r]%P;
		}
	}
};

#endif // lib_ncr2
