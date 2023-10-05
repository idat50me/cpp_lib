// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "dp/lis.cpp"

int main() {
	int N; cin>>N;
	vector<int> v(N);
	for(int &a: v) cin>>a;
	cout<<LIS(v)<<endl;
}
