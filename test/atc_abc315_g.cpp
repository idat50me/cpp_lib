// competitive-verifier: PROBLEM https://atcoder.jp/contests/abc315/tasks/abc315_g

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/extgcd.cpp"

long long llceil(long long a, long long b) {
	if(a % b == 0) return a / b;
	if(a >= 0) return a / b + 1;
	return -(-a / b);
}

long long llfloor(long long a, long long b) {
	if(a % b == 0) return a / b;
	if(a >= 0) return a / b;
	return -(-a / b + 1);
}

int main() {
	long long N;
	long long A, B, C, X;
	long long ans = 0;

	cin >> N >> A >> B >> C >> X;

	for(long long k = 1; k <= N; k++) {
		if(X - C * k < 0) break;
		long long i, j;
		long long d = extgcd(A, B, X - C * k, i, j);
		if(d == -1) continue;
		long long Ad = A / d, Bd = B / d;
		long long L1 = llceil(j - N, Ad), R1 = llfloor(j - 1, Ad);
		long long L2 = llceil(1 - i, Bd), R2 = llfloor(N - i, Bd);

		if(R1 < L2 or R2 < L1) continue;
		ans += max(min(R1, R2) - max(L1, L2) + 1, 0ll);
	}
	cout << ans << endl;
}
