#define PROBLEM "https://yukicoder.me/problems/no/430"

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
	long long ans = 0;
	for(int i = 0; i < M; i++) {
		ans += rh.iscontain(C[i]).size();
	}

	cout << ans << endl;
}
