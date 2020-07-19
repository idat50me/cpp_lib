#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DPL_5_E"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../pre/macros.cpp"
#include "../combinatorics/ncr2.cpp"

int main() {
	int n,k; cin>>n>>k;
	nCr2 table(1000,MPRIME);
	cout<<table.calc(k,n)<<endl;
}
