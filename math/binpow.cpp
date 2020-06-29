#ifndef lib_binpow
#define lib_binpow

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

ll binpow(ll a, ll ex, ll p=(1LL<<60)) {
	ll result=1;
	while(ex>0) {
		if(ex&1) result=result*a%p;
		ex>>=1;
		a=a*a%p;
	}
	return result;
}

#endif /* lib_binpow */