// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "string/rolling_hash.cpp"

int main() {
	string T, P;
	cin >> T >> P;

	RollingHash rh(T);
	vector<int> ans = rh.match(P);
	for(int &i : ans) cout << i << endl;
}
