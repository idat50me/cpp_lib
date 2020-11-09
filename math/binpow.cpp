/*
 * @brief Binary-Power(繰り返し二乗法)
 */

#ifndef lib_binpow
#define lib_binpow

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

long long binpow(long long a, long long ex, long long p=(1LL<<61)-1) {
	long long res = 1;
	while(ex > 0) {
		if(ex & 1) (res*=a) %= p;
		ex>>=1;
		(a*=a) %= p;
	}
	return res;
}

#endif /* lib_binpow */