#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "combinatorics/pre_mod_comb.cpp"
#include "combinatorics/nhr.cpp"

int main() {
	vector<ll> fact,inv,finv;
	pre_mod_comb(2100,MPRIME,fact,inv,finv);
	int n,k; cin>>n>>k;
	cout<<nHr(k,n,MPRIME,fact,inv,finv)<<endl;
}
