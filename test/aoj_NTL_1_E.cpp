// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_E

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/extgcd.cpp"

int main() {
	long long a, b, x, y;
	cin >> a >> b;
	extgcd(a, b, x, y);
	cout << x << " " << y << endl;
}
