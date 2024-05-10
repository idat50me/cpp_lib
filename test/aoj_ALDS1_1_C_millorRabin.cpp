// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/millor_rabin.cpp"

int main() {
	int n;
	cin >> n;
	int res = 0;
	for(int i = 0; i < n; i++) {
		int a;
		cin >> a;
		if(isprime(a)) res++;
	}
	cout << res << endl;
}
