#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct spncr {
private:
	vector<long long> pnum, excp, inv;
	const long long P;

public:
	spncr(int n, int p) : pnum(n + 1), excp(n + 1), inv(p), P(p) {
		int tmp;
		pnum[0] = 0;
		excp[0] = 1;
		for(int i = 1; i <= n; i++) {
			tmp = i;
			pnum[i] = pnum[i - 1];
			while(tmp % p == 0) pnum[i]++, tmp /= p;
			excp[i] = excp[i - 1] * tmp % p;
		}

		inv[1] = 1;
		for(int i = 2; i < p; i++) inv[i] = P - inv[P % i] * (P / i) % P;
	}

	long long operator()(int n, int r) {
		assert(n >= 0 && r >= 0);
		if(r > n || pnum[n] - pnum[r] - pnum[n - r] > 0) return 0;
		return excp[n] * inv[excp[r] * excp[n - r] % P] % P;
	}
};
