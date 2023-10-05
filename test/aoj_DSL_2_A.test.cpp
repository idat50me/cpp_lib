// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "tree/segtree_RmQ.cpp"

int main() {
	int N,Q; cin>>N>>Q;
	vector<int> v(N,(1<<31)-1);
	RmQ rmq_tree(v);

	for(int i=0; i<Q; i++) {
		int com,x,y; cin>>com>>x>>y;

		if(com==0) rmq_tree.update(x,y);
		else cout<<rmq_tree.getmin(x,y+1)<<'\n';
	}
	cout<<flush;
}
