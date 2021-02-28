#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../math/extgcd.cpp"

pair<long long, long long> crt(const vector<long long> &B, const vector<long long> &M) {
	long long r = 0, m = 1, p, q, d;
	for(int i = 0; i < B.size(); i++) {
		d = extgcd(m, M[i], B[i] - r, p, q);
		if(d == -1) return make_pair(0LL, 0LL);
		r += p % (M[i] / d) * m; // r = r + m * p
		m *= M[i] / d;           // m = lcm(m, M[i])
		r %= m;                  // r = r % lcm(m, M[i])
		if(r < 0) r += m;
	}
	return make_pair(r, m);
}
