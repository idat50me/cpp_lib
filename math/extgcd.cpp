#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

long long extgcd(long long a, long long b, long long &x, long long &y) {
	if(b == 0) {
		x = 1; y = 0;
		return a;
	}
	long long d = extgcd(b, a%b, y, x);
	y -= a/b*x;
	return d;
}

long long extgcd(long long a, long long b, long long c, long long &x, long long &y) {
	long long d = extgcd(a, b, x, y);
	if(c%d) return -1;
	x *= c/d;
	y *= c/d;
	return d;
}
