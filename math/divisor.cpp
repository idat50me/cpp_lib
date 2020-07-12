#ifndef lib_divisor
#define lib_divisor

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

vector<ll> divisor(ll x) {
	vector<ll> result;
	ll i=1;
	for( ; i*i<x; i++) {
		if(x%i) continue;
		result.push_back(i);
		result.push_back(x/i);
	}
	if(i*i==x&&x%i==0)
		result.push_back(i);
	
	sort(result.begin(),result.end());
	return result;
}

#endif // lib_divisor
