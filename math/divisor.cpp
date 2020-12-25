#pragma once
/*
 * @brief Divisor(約数列挙)
 */

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif


vector<long long> divisor(long long x) {
	vector<long long> res;
	long long i = 1;
	for( ; i*i < x; i++) {
		if(x%i) continue;
		res.emplace_back(i);
		res.emplace_back(x/i);
	}
	if(i*i==x)
		res.emplace_back(i);
	
	sort(res.begin(),res.end());
	return res;
}
