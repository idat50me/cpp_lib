#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_B"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/mincostflow.cpp"

int main() {
	int V,E,F; cin>>V>>E>>F;
	mincostflow mcf(V);
	for(int i=0; i<E; i++) {
		int u,v,c,d; cin>>u>>v>>c>>d;
		mcf.add(u,v,c,d);
	}

	cout<<mcf.solve(0,V-1,F)<<endl;
}
