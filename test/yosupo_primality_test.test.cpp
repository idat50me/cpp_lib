// competitive-verifier: PROBLEM "https://judge.yosupo.jp/problem/primality_test"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../math/millor_rabin.cpp"

int main() {
	int Q;
	for(int i = 0; i < Q; i++) {
		long long N;
		cin >> N;
		if(isprime(N)) {
			cout << "Yes" << endl;
		}
		else {
			cout << "No" << endl;
		}
	}
}
