#define PROBLEM "https://yukicoder.me/problems/no/556"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "tree/union_find.cpp"

int main() {
	int N,M; cin>>N>>M;
	UnionFind uf(N+1);

	for(int i=0; i<M; i++) {
		int A,B; cin>>A>>B;
		int Asize=uf.size(A), Bsize=uf.size(B);
		if(Asize>Bsize || (Asize==Bsize && uf.root(A)<uf.root(B))) uf.merge(A,B);
		else uf.merge(B,A);
	}

	for(int i=1; i<=N; i++) {
		cout<<uf.root(i)<<'\n';
	}
	cout<<flush;
}
