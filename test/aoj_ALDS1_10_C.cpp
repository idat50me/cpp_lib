// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "dp/lcs.cpp"

int main() {
	int Q;
	cin >> Q;
	while(Q--) {
		string X, Y;
		cin >> X >> Y;
		cout << LCS(X, Y) << endl;
	}
}
