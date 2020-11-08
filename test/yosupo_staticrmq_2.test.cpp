#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "tree/segtree.cpp"

int op(int l, int r) {
	return min(l,r);
}

int e() {
	return numeric_limits<int>::max();
}

int main() {
	int N,Q;
	vector<int> v;

	cin>>N>>Q;
	v.resize(N);
	for(int i=0; i<N; i++) cin>>v[i];
	segtree<int, op, e> tree(v);

	for(int i=0; i<Q; i++) {
		int l,r; cin>>l>>r;
		cout<<tree.get(l,r)<<'\n';
	}
	cout<<flush;
}
