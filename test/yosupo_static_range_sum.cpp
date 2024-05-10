// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/static_range_sum

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "tree/segtree.cpp"
using ll = long long;

int main() {
	int N, Q;
	cin >> N >> Q;
	vector<ll> v(N);
	for(int i = 0; i < N; i++) cin >> v[i];
	segtree tree(
		v, [](ll a, ll b) { return a + b; }, 0LL);

	for(int i = 0; i < Q; i++) {
		int l, r;
		cin >> l >> r;
		cout << tree.get(l, r) << '\n';
	}
	cout << flush;
}
