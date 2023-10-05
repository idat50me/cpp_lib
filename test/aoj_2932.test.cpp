// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/2932

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/primefact.cpp"

using ll = long long;

int main() {
	ll N;
	cin >> N;
	vector<pair<ll, int>> v = primefact(N);

	ll mx = 1;
	for(auto &p : v) mx *= p.second + 1;

	cout << v.size() << " " << mx - 1 << endl;
}
