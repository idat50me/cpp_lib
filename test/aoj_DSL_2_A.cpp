// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "tree/segtree.cpp"

int main() {
	int N, Q;
	cin >> N >> Q;
	const int INF = (1 << 31) - 1;
	vector<int> v(N, INF);
	auto op = [](int l, int r) { return min(l, r); };
	auto rmq_tree = segtree(v, op, INF);

	for(int i = 0; i < Q; i++) {
		int com, x, y;
		cin >> com >> x >> y;

		if(com == 0) rmq_tree.update(x, y);
		else
			cout << rmq_tree.get(x, y + 1) << '\n';
	}
	cout << flush;
}
