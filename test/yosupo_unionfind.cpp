// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/unionfind

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/union_find.cpp"

int main() {
	int N, Q;
	cin >> N >> Q;
	UnionFind uf(N);

	for(int i = 0; i < Q; i++) {
		int t, u, v;
		cin >> t >> u >> v;

		if(t == 0) uf.merge(u, v);
		else
			cout << (uf.same(u, v) ? 1 : 0) << '\n';
	}

	cout << flush;
}
