#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

long long nPr(long long n, long long r, long long p = (1LL << 61) - 1) {
	if(n < r) return 0LL;

	long long res = 1LL;
	for(int i = 0; i < r; i++) (res *= (n - i)) %= p;
	return res;
}
