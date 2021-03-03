#define PROBLEM "https://yukicoder.me/problems/no/1097"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "dp/doubling.cpp"

int main() {
	int N;
	cin >> N;
	vector<long long> A(N);
	vector<int> v(N);
	for(int i = 0; i < N; i++) {
		cin >> A[i];
		v[i] = (i + A[i]) % N;
	}

	doubling<long long> db(v, A, 1000000000000LL, [](long long l, long long r) { return l + r; });

	int Q;
	cin >> Q;
	while(Q--) {
		long long K;
		cin >> K;
		cout << db.get(0, 0, K) << endl;
	}
}
