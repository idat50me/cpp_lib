#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T>
int LIS(const vector<T> &v, bool strict = true) {
	vector<T> lis;
	if(strict) {
		for(T a: v) {
			auto itr = lower_bound(lis.begin(), lis.end(), a);
			if(itr == lis.end()) lis.push_back(a);
			else *itr = a;
		}
	}
	else {
		for(T a: v) {
			auto itr = upper_bound(lis.begin(), lis.end(), a);
			if(itr == lis.end()) lis.push_back(a);
			else *itr = a;
		}
	}
	return lis.size();
}
