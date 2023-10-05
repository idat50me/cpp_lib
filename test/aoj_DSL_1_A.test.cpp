// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/DSL_1_A

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/union_find.cpp"

int main() {
	int N,Q; cin>>N>>Q;
	UnionFind uf(N);

	for(int i=0; i<Q; i++) {
		int com,x,y; cin>>com>>x>>y;

		if(com==0) uf.merge(x,y);
		else cout<<(uf.same(x,y) ? 1 : 0)<<'\n';
	}

	cout<<flush;
}
