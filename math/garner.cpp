#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../math/extgcd.cpp"

long long pregarner(vector<long long> &b, vector<long long> &m, const int p) {
	long long lcm = 1, g, gi, gj;
	for(int i = 0; i < m.size(); i++) {
		for(int j = i + 1; j < m.size(); j++) {
			g = gcd(m[i], m[j]);
			if((b[j] - b[i]) % g) return -1;

			m[i] /= g, m[j] /= g;
			gi = gcd(m[i], g), gj = g / gi;

			do {
				g = gcd(gi, gj);
				gi *= g, gj /= g;
			} while(g > 1);

			m[i] *= gi, m[j] *= gj;
			b[i] %= m[i], b[j] %= m[j];
		}
		(lcm *= m[i]) %= p;
	}
	return lcm;
}

long long garner(const vector<long long> &b, const vector<long long> &m, const int p) {
	const int n = m.size();
	vector<long long> mprod(n + 1, 1);
	vector<long long> X(n + 1, 0);
	long long t, x, y, inv;

	for(int k = 0; k < n; k++) {
		if(extgcd(mprod[k], m[k], 1, x, y) == -1) return -1;
		inv = x % m[k];
		if(inv < 0) inv += m[k];
		t = (b[k] - X[k]) * inv % m[k];
		if(t < 0) t += m[k];
		for(int i = k + 1; i < n; i++) {
			(X[i] += t * mprod[i]) %= m[i];
			(mprod[i] *= m[k]) %= m[i];
		}
		(X[n] += t * mprod[n]) %= p;
		(mprod[n] *= m[k]) %= p;
	}
	return X.back();
}
