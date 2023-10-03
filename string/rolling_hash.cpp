#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct RollingHash {
	const int N;
	const long long MOD1 = 1000000007;
	const long long MOD2 = 1992732529;
	long long base1, base2;
	vector<long long> hash1, hash2, pw1, pw2;

	RollingHash(string &s) :
		N(s.size()), hash1(N + 1, 0), hash2(N + 1, 0), pw1(N + 1, 1), pw2(N + 1, 1) {
		random_device rd;
		mt19937 mt(rd());
		uniform_int_distribution<long long> dist1(2, MOD1 - 2);
		uniform_int_distribution<long long> dist2(2, MOD2 - 2);
		base1 = dist1(mt);
		base2 = dist2(mt);

		for(int i = 0; i < N; i++) {
			pw1[i + 1] = pw1[i] * base1 % MOD1;
			pw2[i + 1] = pw2[i] * base2 % MOD2;
			hash1[i + 1] = (hash1[i] * base1 + (s[i] - 'a')) % MOD1;
			hash2[i + 1] = (hash2[i] * base2 + (s[i] - 'a')) % MOD2;
		}
	}

	pair<long long, long long> get(int l, int r) {
		assert(l <= r);
		assert(0 <= l and r <= N);
		long long h1 = (hash1[r] + MOD1 - hash1[l] * pw1[r - l] % MOD1) % MOD1;
		long long h2 = (hash2[r] + MOD2 - hash2[l] * pw2[r - l] % MOD2) % MOD2;
		return pair(h1, h2);
	}

	bool iscontain(string &t) {}
};
