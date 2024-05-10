// competitive-verifier: PROBLEM https://yukicoder.me/problems/no/430

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../string/rolling_hash.cpp"

int main() {
	string S;
	int M;
	vector<string> C;

	cin >> S >> M;
	C.resize(M);
	for(int i = 0; i < M; i++) cin >> C[i];

	RollingHash rh(S);
	map<pair<long long, long long>, long long> m;
	for(int i = 0; i < S.size(); i++) {
		for(int n = 1; n <= 10; n++) {
			if(i + n <= S.size()) m[rh.get(i, i + n)]++;
		}
	}
	long long ans = 0;
	for(int i = 0; i < M; i++) {
		pair<long long, long long> hasht = rh.get(C[i]);
		ans += m[hasht];
	}

	cout << ans << endl;
}
