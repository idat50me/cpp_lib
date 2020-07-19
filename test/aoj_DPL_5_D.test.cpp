#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../pre/macros.cpp"
#include "../combinatorics/combinatorics.cpp"

int main() {
	int n,k; cin>>n>>k;
	Combinatorics cb(2000,MPRIME);
	cout<<cb.nHr(k,n)<<endl;
}
