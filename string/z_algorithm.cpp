#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

vector<int> z_algorithm(const string &S) {
	int N = S.length();
	vector<int> res(N, 0);

	for(int i = 1, c = 0; i < N; i++) {
		int l = i - c;
		if(i + res[l] < c + res[c]) {
			res[i] = res[l];
		}
		else {
			int l = max(c + res[c] - i, 0);
			while(i + l < N && S[l] == S[i + l]) l++;
			res[i] = l;
			c = i;
		}
	}

	res[0] = N;
	return res;
}
