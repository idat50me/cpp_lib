#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

bool isprime(long long n) {
	if(n == 2) return true;
	if(n < 2 || n % 2 == 0) return false;

	if(n < 200000) {
		for(long long i = 3; i * i <= n; i += 2)
			if(n % i == 0) return false;
		return true;
	}

	long long d = n >> 1;
	int s = 1;
	while(!(d & 1)) {
		s++;
		d >>= 1;
	}

	for(int k : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {
		if(k >= n) break;

		__int128_t r = 1, q = k;
		while(d > 0) {
			if(d & 1) (r *= q) %= n;
			d >>= 1;
			(q *= q) %= n;
		}
		if(r == 1 || r == n - 1) continue;

		for(int i = 1; i < s; i++) {
			(r *= r) %= n;
			if(r == n - 1) break;
		}
		if(r != n - 1) return false;
	}

	return true;
}
