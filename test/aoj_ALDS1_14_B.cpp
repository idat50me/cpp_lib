// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_14_B

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "string/kmp.cpp"

int main() {
	string T, P;
	cin >> T >> P;

	vector<int> ans = KMP(T, P);
	for(int &i : ans) cout << i << endl;
}
