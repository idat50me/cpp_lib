#define PROBLEM "https://yukicoder.me/problems/177"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/maxflow.cpp"
#include "structure/2d_array.cpp"

int main() {
	int W,N,M;
	vector<int> J,C;
	v2d<bool> X;
	cin>>W>>N;
	J.resize(N);
	for(int &j: J) cin>>j;
	cin>>M;
	C.resize(M);
	for(int &c: C) cin>>c;
	X.assign(N,M,true);
	for(int i=0; i<M; i++) {
		int Q; cin>>Q;
		for(int j=0; j<Q; j++) {
			int x; cin>>x;
			X[--x][i] = false;
		}
	}

	maxflow mf(N+M+2);
	for(int i=0; i<N; i++) {
		mf.add(N+M, i, J[i]);
		for(int j=0; j<M; j++) {
			if(X[i][j]) mf.add(i, N+j, (1LL<<62)-1);
		}
	}
	for(int i=0; i<M; i++) mf.add(N+i, N+M+1, C[i]);

	if(W <= mf.solve(N+M, N+M+1)) cout<<"SHIROBAKO"<<endl;
	else cout<<"BANSAKUTSUKITA"<<endl;
}
