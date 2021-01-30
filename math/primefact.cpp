#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

vector<pair<long long, int>> primefact(long long x) {
	vector<pair<long long, int>> res;

	for(long long i=2; i*i<=x; i++) {
		if(x % i) continue;

		int ex = 0;
		while(x%i == 0) {
			x /= i;
			ex++;
		}
		res.emplace_back(i, ex);
	}

	if(x > 1) res.emplace_back(x, 1);

	return res;
}

