#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../math/montgomery.cpp"

struct RollingHash {
private:
	const int N;
	const long long MOD1 = 1000000007;
	const long long MOD2 = 1992732529;
	Montgomery mg1 = Montgomery(MOD1);
	Montgomery mg2 = Montgomery(MOD2);
	long long base1, base2;
	vector<long long> hash1, hash2, pw1, pw2;

public:
	RollingHash(string &s) :
		N(s.size()), hash1(N + 1, 0), hash2(N + 1, 0), pw1(N + 1, 1), pw2(N + 1, 1) {
		random_device rd;
		mt19937 mt(rd());
		uniform_int_distribution<long long> dist1(257, MOD1 - 2);
		uniform_int_distribution<long long> dist2(257, MOD2 - 2);
		base1 = dist1(mt);
		base2 = dist2(mt);

		for(int i = 0; i < N; i++) {
			pw1[i + 1] = mg1.mul(pw1[i], base1);
			pw2[i + 1] = mg2.mul(pw2[i], base2);
			hash1[i + 1] = mg1.mul(hash1[i], base1) + int(s[i]);
			hash2[i + 1] = mg2.mul(hash2[i], base2) + int(s[i]);
			if(hash1[i + 1] >= MOD1) hash1[i + 1] -= MOD1;
			if(hash2[i + 1] >= MOD2) hash2[i + 1] -= MOD2;
		}
	}

	pair<long long, long long> get(int l, int r) {
		assert(l <= r);
		assert(0 <= l and r <= N);
		long long h1 = hash1[r] - mg1.mul(hash1[l], pw1[r - l]);
		long long h2 = hash2[r] - mg2.mul(hash2[l], pw2[r - l]);
		if(h1 < 0) h1 += MOD1;
		if(h2 < 0) h2 += MOD2;
		return pair(h1, h2);
	}

	vector<int> iscontain(string &t) {
		const int M = t.size();
		if(N < M) return {};

		vector<int> ret;
		long long h1_t = 0, h2_t = 0;
		for(int i = 0; i < M; i++) {
			h1_t = mg1.mul(h1_t, base1) + int(t[i]);
			h2_t = mg2.mul(h2_t, base2) + int(t[i]);
			if(h1_t >= MOD1) h1_t -= MOD1;
			if(h2_t >= MOD2) h2_t -= MOD2;
		}

		for(int i = 0; i + M <= N; i++) {
			pair<long long, long long> p = get(i, i + M);
			if(p.first == h1_t and p.second == h2_t) ret.emplace_back(i);
		}

		return ret;
	}
};
