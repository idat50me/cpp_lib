// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_B

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/extgcd.cpp"

int main() {
	int x,y; cin>>x>>y;
	long long z;
	cout<<extgcd(x,y,z,z)<<endl;
}
