#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

bool isprime(long long n) {
	if(n == 2) return true;
	if(n < 2 || n % 2 == 0) return false;

	for(long long i = 3; i * i <= n; i += 2)
		if(n % i == 0) return false;

	return true;
}
