#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

long long extgcd(long long a, long long b, long long &x, long long &y) {
	long long x_ = abs(a), xd = 1, xdd = 0, y_ = abs(b), yd = 0, ydd = 1, div;
	while(true) {
		if(!y_) {
			x = xd;
			y = xdd;
			return x_;
		}
		div = x_ / y_;
		x_ -= div * y_;
		xd -= div * yd;
		xdd -= div * ydd;

		if(!x_) {
			x = yd;
			y = ydd;
			return y_;
		}
		div = y_ / x_;
		y_ -= div * x_;
		yd -= div * xd;
		ydd -= div * xdd;
	}
	if(a < 0) x = -x;
	if(b < 0) y = -y;
}

long long extgcd(long long a, long long b, long long c, long long &x, long long &y) {
	long long d = extgcd(a, b, x, y);
	if(c % d) return -1;
	x *= c % a / d;
	y *= c % a / d;
	x += c / a;
	return d;
}
