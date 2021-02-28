#define PROBLEM "https://yukicoder.me/problems/no/187"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/garner.cpp"

constexpr int MPRIME = 1000000007;

int main() {
	int N;
	vector<long long> X, Y;

	cin >> N;
	X.resize(N);
	Y.resize(N);
	for(int i = 0; i < N; i++) cin >> X[i] >> Y[i];

	long long lcm = pregarner(X, Y, MPRIME);
	if(lcm == -1) {
		cout << -1 << endl;
		return;
	}

	long long ans = garner(X, Y, MPRIME);
	if(ans == 0) cout << lcm << endl;
	else
		cout << ans << endl;
}
