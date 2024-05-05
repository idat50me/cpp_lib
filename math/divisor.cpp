#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

vector<long long> divisor(long long x) {
	vector<long long> res = {1};
	long long i = 2, id = 0, sz;
	while(i * i <= x || i == x) {
		if(x % i) {
			i++;
			id = 0;
			continue;
		}
		sz = res.size();
		for(; id < sz; id++) res.emplace_back(res[id] * i);
		x /= i;
	}
	if(x > 1) {
		sz = res.size();
		for(int j = 0; j < sz; j++) res.emplace_back(res[j] * x);
	}

	sort(res.begin(), res.end());
	return res;
}
