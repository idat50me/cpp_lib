// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/staticrmq

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "tree/segtree.cpp"

int main() {
	int N, Q;
	vector<int> v;

	cin >> N >> Q;
	v.resize(N);
	for(int i = 0; i < N; i++) cin >> v[i];
	segtree tree(
		v, [](int l, int r) { return min(l, r); }, numeric_limits<int>::max());

	for(int i = 0; i < Q; i++) {
		int l, r;
		cin >> l >> r;
		cout << tree.get(l, r) << '\n';
	}
	cout << flush;
}
