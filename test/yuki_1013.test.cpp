// competitive-verifier: PROBLEM https://yukicoder.me/problems/no/1013

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "dp/doubling.cpp"

int main() {
	int N, K;
	cin >> N >> K;
	vector<long long> P(N + 1), Pv(N + 1);
	vector<int> v(N + 1);
	P[0] = v[0] = 0;
	for(int i = 1; i <= N; i++) {
		cin >> P[i];
		v[i] = (i + P[i] - 1) % N + 1;
	}

	doubling<long long> db(v, P, K, [](long long l, long long r) { return l + r; });
	for(int i = 1; i <= N; i++) cout << db.get(i, i, K) << endl;
}
