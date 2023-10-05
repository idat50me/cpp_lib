#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

int LCS(const string &s1, const string &s2) {
	vector<vector<int>> comlen(s1.length() + 1, vector<int>(s2.length() + 1, 0));

	for(int i = 1; i <= s1.length(); i++)
		for(int j = 1; j <= s2.length(); j++) {
			comlen[i][j] = max({comlen[i - 1][j], comlen[i][j - 1],
								comlen[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 1 : 0)});
		}

	return comlen[s1.length()][s2.length()];
}

template<typename T> int LCS(const vector<T> &v1, const vector<T> &v2) {
	vector<vector<int>> comlen(v1.length() + 1, vector<int>(v2.length() + 1, 0));

	for(int i = 1; i <= v1.length(); i++)
		for(int j = 1; j <= v2.length(); j++) {
			comlen[i][j] = max({comlen[i - 1][j], comlen[i][j - 1],
								comlen[i - 1][j - 1] + (v1[i - 1] == v2[j - 1] ? 1 : 0)});
		}

	return comlen[v1.length()][v2.length()];
}
