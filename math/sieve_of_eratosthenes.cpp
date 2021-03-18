#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct Sieve {
private:
	int N;
	vector<int> dv, primes;

public:
	Sieve(int n) : N(n), dv(n + 1, 0) {
		dv[0] = dv[1] = -1;
		for(int i = 2; i <= N; i++) {
			if(!dv[i]) {
				primes.emplace_back(i);
				dv[i] = i;
			}

			for(const int &p : primes) {
				if(p > dv[i] || (long long)i * p > N) break;
				dv[i * p] = p;
			}
		}
	}

	bool isprime(int x) {
		return dv[x] == x;
	}

	vector<pair<int, int>> primefact(int n) {
		if(n == 1) return vector<pair<int, int>>({});
		vector<pair<int, int>> res = {pair<int, int>(dv[n], 1)};
		n /= dv[n];
		while(n > 1) {
			int d = dv[n];
			if(res.back().first == d) res.back().second++;
			else
				res.emplace_back(d, 1);
			n /= d;
		}
		return res;
	}

	int divisorcount(int n) {
		int res = 1;
		vector<pair<int, int>> flist = primefact(n);
		for(pair<int, int> &p : flist) {
			res *= p.second + 1;
		}
		return res;
	}
};
