/*
 * @brief Millor-Rabin(ミラー・ルビン素数判定法)
 */

#ifndef lib_millor_rabin
#define lib_millor_rabin

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../math/binpow.cpp"

bool isprime(int n) {
	if(n == 2) return true;
	if(n < 2 || n%2 == 0) return false;

	int d=n-1, s=0;
	while(d%2 == 0) {
		s++;
		d >>= 1;
	}

	int a[]={2,7,61};
	for(int i = 0; i < 3; i++) {
		if(a[i] >= n) continue;

		ll r = binpow(a[i], d, n);
		if(r == 1 || r == n-1) continue;
		
		for(int j = 1; j < s; j++) {
			r = r * r % n;
			if(r == n-1) break;
		}
		if(r != n-1) return false;
	}

	return true;
}

#endif // lib_millor_rabin
