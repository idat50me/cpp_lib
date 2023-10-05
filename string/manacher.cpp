#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

vector<int> manacher(const string &S) {
	int N = S.length();
	vector<int> res(N, 1);

	for(int i = 0, c = 0; i < N; i++) {
		int l = c - (i - c);
		if(i + res[l] < c + res[c]) {
			res[i] = res[l];
		}
		else {
			int r = c + res[c] - i;
			while(i - r >= 0 && i + r < N && S[i - r] == S[i + r]) r++;
			res[i] = r;
			c = i;
		}
	}

	return res;
}

vector<int> manacher_even(const string &S) {
	string S2;
	for(const char &c : S) (S2 += c) += '$';
	S2.pop_back();

	vector<int> res = manacher(S2);
	for(int i = 0; i < S.length() - 1; i++) {
		++res[i + i] >>= 1;
		res[i + i + 1] >>= 1;
	}
	++res[res.size() - 1] >>= 1;

	return res;
}
