// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/DPL_3_C

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../dp/largest_histogram_rectangle.cpp"

int main() {
	int n;
	vector<long long> v;
	cin >> n;
	v.resize(n);
	for(int i = 0; i < n; i++) cin >> v[i];
	cout << largest_histogram_rectangle(v) << endl;
}
