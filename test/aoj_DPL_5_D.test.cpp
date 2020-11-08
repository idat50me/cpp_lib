#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "combinatorics/combinatorics.cpp"
#define MPRIME 1000000007LL

int main() {
	int n,k; cin>>n>>k;
	COMB cb(2000,MPRIME);
	cout<<cb.nhr(k,n)<<endl;
}
