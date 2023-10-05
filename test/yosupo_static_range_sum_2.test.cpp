// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/static_range_sum

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "tree/binary_indexed_tree.cpp"

int main() {
	int N,Q; cin>>N>>Q;
	BIT<long long> bt(N);
	for(int i=1; i<=N; i++) {
		int A; cin>>A;
		bt.add(i, A);
	}
	while(Q--) {
		int l,r; cin>>l>>r;
		cout<<bt.sum(l+1,r)<<endl;
	}
}
