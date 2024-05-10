// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_A

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/primefact.cpp"

int main() {
	int n;
	cin >> n;
	vector<pair<long long, int>> v = primefact(n);
	cout << n << ":";
	for(auto &p : v) {
		while(p.second--) cout << " " << p.first;
	}
	cout << endl;
}
