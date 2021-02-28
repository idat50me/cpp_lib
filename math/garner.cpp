#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../math/extgcd.cpp"

long long pregarner(vector<long long> &B, vector<long long> &M, const int p) {
	long long lcm = 1, g, gi, gj;
	for(int i = 0; i < M.size(); i++) {
		for(int j = i + 1; j < M.size(); j++) {
			g = gcd(M[i], M[j]);
			if((B[j] - B[i]) % g) return -1;

			M[i] /= g, M[j] /= g;
			gi = gcd(M[i], g), gj = g / gi;

			do {
				g = gcd(gi, gj);
				gi *= g, gj /= g;
			} while(g > 1);

			M[i] *= gi, M[j] *= gj;
			B[i] %= M[i], B[j] %= M[j];
		}
		(lcm *= M[i]) %= p;
	}
	return lcm;
}

long long garner(const vector<long long> &B, const vector<long long> &M, const int p) {
	const int n = M.size();
	vector<long long> mprod(n + 1, 1);
	vector<long long> X(n + 1, 0);
	long long t, x, y, inv;

	for(int k = 0; k < n; k++) {
		if(extgcd(mprod[k], M[k], 1, x, y) == -1) return -1;
		inv = x % M[k];
		if(inv < 0) inv += M[k];
		t = (B[k] - X[k]) * inv % M[k];
		if(t < 0) t += M[k];
		for(int i = k + 1; i < n; i++) {
			(X[i] += t * mprod[i]) %= M[i];
			(mprod[i] *= M[k]) %= M[i];
		}
		(X[n] += t * mprod[n]) %= p;
		(mprod[n] *= M[k]) %= p;
	}
	return X.back();
}
