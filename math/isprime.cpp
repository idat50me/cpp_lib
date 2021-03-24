#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

bool isprime(long long n) {
	if(n == 2) return true;
	if(n < 2 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0) return false;

	long long i = 7;
	while(i * i <= n) {
		for(int k : {4, 2, 4, 2, 4, 6, 2, 6}) {
			if(i * i <= n) break;
			if(n % i == 0) return false;
			i += k;
		}
	}

	return true;
}
