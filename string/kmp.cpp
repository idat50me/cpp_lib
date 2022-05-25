#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

vector<int> KMP(const string &S, const string &T) {
	vector<int> ans;
	vector<int> nxt_idx(T.length() + 1, 0);
	nxt_idx[0] = -1;

	for(int i = 1, j = -1; i <= T.length(); i++) {
		while(j >= 0 && T[i - 1] != T[j]) j = nxt_idx[j];
		j++;
		if(i < T.length() && T[i] == T[j]) nxt_idx[i] = nxt_idx[j];
		else
			nxt_idx[i] = j;
	}

	for(int i = 0, j = 0; i < S.length(); i++) {
		while(j >= 0 && S[i] != T[j]) j = nxt_idx[j];
		j++;
		if(j == T.length()) {
			ans.emplace_back(i - j + 1);
			j = nxt_idx[j];
		}
	}

	return ans;
}
