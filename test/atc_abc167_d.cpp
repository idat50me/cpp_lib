// competitive-verifier: PROBLEM https://atcoder.jp/contests/abc167/tasks/abc167_d
// competitive-verifier: IGNORE
// to download testcases fails due to some problem

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../dp/doubling.cpp"

int main() {
	int N;
	long long K;
	vector<int> A;

	cin >> N >> K;
	A.resize(N);
	for(int i = 0; i < N; i++) {
		cin >> A[i];
		A[i]--;
	}

	doubling db(A, K);
	cout << db.get_idx(0, K) + 1 << endl;
}
