#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

int levenshtein(const string &s1, const string &s2) {
	if(s1.length() == 0) return s2.length();
	if(s2.length() == 0) return s1.length();

	vector<vector<int>> dist(s1.length() + 1, vector<int>(s2.length() + 1, (1 << 30) - 1));

	for(int i = 0; i <= s1.length(); i++) dist[i][0] = i;
	for(int i = 1; i <= s2.length(); i++) dist[0][i] = i;
	for(int i = 1; i <= s1.length(); i++)
		for(int j = 1; j <= s2.length(); j++) {
			dist[i][j] = min({dist[i - 1][j] + 1, dist[i][j - 1] + 1,
							  dist[i - 1][j - 1] + (s1[i - 1] == s2[j - 1] ? 0 : 1)});
		}

	return dist[s1.length()][s2.length()];
}

template<typename T> int levenshtein(const vector<T> &v1, const vector<T> &v2) {
	if(v1.size() == 0) return v2.size();
	if(v2.size() == 0) return v1.size();

	vector<vector<int>> dist(v1.size() + 1, vector<int>(v2.size() + 1, (1 << 30) - 1));

	for(int i = 0; i <= v1.size(); i++) dist[i][0] = i;
	for(int i = 1; i <= v2.size(); i++) dist[0][i] = i;
	for(int i = 1; i <= v1.size(); i++)
		for(int j = 1; j <= v2.size(); j++) {
			dist[i][j] = min({dist[i - 1][j] + 1, dist[i][j - 1] + 1,
							  dist[i - 1][j - 1] + (v1[i - 1] == v2[j - 1] ? 0 : 1)});
		}

	return dist[v1.size()][v2.size()];
}
