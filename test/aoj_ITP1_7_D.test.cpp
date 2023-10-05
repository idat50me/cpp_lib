// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_D

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "structure/matrix.cpp"

int main() {
	int N,M,L; cin>>N>>M>>L;
	matrix<long long> A,B;
	A.in(N,M);
	B.in(M,L);
	(A*B).out();
}
