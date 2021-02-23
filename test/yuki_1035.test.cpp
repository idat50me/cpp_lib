#define PROBLEM "https://yukicoder.me/problems/no/1035"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "combinatorics/combinatorics.cpp"
#include "mod/modint.cpp"
#include "math/binpow.cpp"
const int MPRIME = 1000000007;

int main() {
	int N, M;
	cin >> N >> M;
	modint<MPRIME> res = 0;
	COMB cb(M + 10, MPRIME);

	for(int i = 0; i < M; i++) {
		if(i % 2 == 0) res += cb.ncr(M, M - i) * binpow(M - i, N, MPRIME);
		else
			res -= cb.ncr(M, M - i) * binpow(M - i, N, MPRIME);
	}

	cout << res << endl;
}
