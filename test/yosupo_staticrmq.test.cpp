#define PROBLEM "https://judge.yosupo.jp/problem/staticrmq"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "tree/segtree_RmQ.cpp"

int main() {
	int N,Q;
	vector<int> v;

	cin>>N>>Q;
	v.resize(N);
	for(int i=0; i<N; i++) cin>>v[i];
	RmQ rmq_tree(v);

	for(int i=0; i<Q; i++) {
		int l,r; cin>>l>>r;
		cout<<rmq_tree.getmin(l,r)<<'\n';
	}
	cout<<flush;
}
