// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/DPL_5_E

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "combinatorics/ncr2.cpp"
#define MPRIME 1000000007LL

int main() {
	int n,k; cin>>n>>k;
	NCR ncr(k,1000,MPRIME);
	cout<<ncr.calc(k,n)<<endl;
}
