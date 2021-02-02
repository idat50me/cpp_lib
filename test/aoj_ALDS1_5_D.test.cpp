#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_5_D"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/inversion_number.cpp"

int main() {
	int N; cin>>N;
	vector<int> A(N);
	for(int &a: A) cin>>a;
	cout<<inv_count(A)<<endl;
}
