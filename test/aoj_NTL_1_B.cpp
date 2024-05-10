// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/binpow.cpp"
#define MPRIME 1000000007LL

int main() {
	int m, n;
	cin >> m >> n;
	cout << binpow(m, n, MPRIME) << endl;
}
