/*
 * @brief Divisor(約数列挙)
 */

#ifndef lib_divisor
#define lib_divisor

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

vector<ll> divisor(ll x) {
	vector<ll> res;
	ll i = 1;
	for( ; i*i < x; i++) {
		if(x%i) continue;
		res.push_back(i);
		res.push_back(x/i);
	}
	if(i*i==x && x%i==0)
		res.push_back(i);
	
	sort(res.begin(),res.end());
	return res;
}

#endif // lib_divisor
