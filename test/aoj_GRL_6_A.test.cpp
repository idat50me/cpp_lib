#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_A"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/maxflow.cpp"

int main() {
	int V,E; cin>>V>>E;
	maxflow mf(V);
	for(int i=0; i<E; i++) {
		int u,v,c; cin>>u>>v>>c;
		mf.add(u,v,c);
	}

	cout<<mf.solve(0,V-1)<<endl;
}
