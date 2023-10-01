#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T> long long largest_histogram_rectangle(vector<T> &v) {
	v.emplace_back(0);
	int n = v.size();
	long long mxrec = 0;
	stack<pair<T, int>> s;
	for(int i = 0; i < n; i++) {
		int ni = i;
		while(s.size() > 0 and s.top().first > v[i]) {
			long long h = s.top().first, w = i - s.top().second;
			long long rec = h * w;
			if(mxrec < rec) mxrec = rec;
			ni = s.top().second;
			s.pop();
		}
		s.emplace(v[i], ni);
	}
	return mxrec;
}
