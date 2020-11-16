#define PROBLEM "https://judge.yosupo.jp/problem/static_range_sum"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/segtree.cpp"
using ll = long long;

ll sum_op(ll a, ll b) {
	return a+b;
}

ll e() {
	return 0LL;
}

int main() {
	int N,Q; cin>>N>>Q;
	vector<ll> v(N);
	for(int i=0; i<N; i++) cin>>v[i];
	segtree<ll,sum_op,e> tree(v);

	for(int i=0; i<Q; i++) {
		int l,r; cin>>l>>r;
		cout<<tree.get(l,r)<<'\n';
	}
	cout<<flush;
}
