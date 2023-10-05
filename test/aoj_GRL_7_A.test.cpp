// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/7/GRL_7_A

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/maxflow.cpp"

int main() {
	int X,Y,E; cin>>X>>Y>>E;
	int s=X+Y, t=s+1;
	maxflow mf(X+Y+2);

	for(int i=0; i<E; i++) {
		int x,y; cin>>x>>y;
		mf.add(x,X+y,1);
	}
	for(int i=0; i<X; i++) mf.add(s,i,1);
	for(int i=0; i<Y; i++) mf.add(X+i,t,1);

	cout<<mf.solve(s,t)<<endl;
}
