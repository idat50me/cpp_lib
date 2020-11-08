/*
 * @brief Millor-Rabin(ミラー・ラビン素数判定法)
 * @docs docs/millor_rabin.md
 */

#ifndef lib_millor_rabin
#define lib_millor_rabin

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/binpow.cpp"

bool isprime(int n) {
	if(n == 2) return true;
	if(n < 2 || n%2 == 0) return false;

	int d=n-1, s=0;
	while(d%2 == 0) {
		s++;
		d >>= 1;
	}

	int a[]={2,7,61};
	for(int k = 0; k < 3; k++) {
		if(a[k] >= n) break;
		
		long long r = binpow(a[k], d, n);
		if(r == 1 || r == n-1) continue;
		
		for(int i = 1; i < s; i++) {
			(r*=r) %= n;
			if(r == n-1) break;
		}
		if(r != n-1) return false;
	}

	return true;
}

#endif // lib_millor_rabin
