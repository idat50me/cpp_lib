#define PROBLEM "https://yukicoder.me/problems/no/1301"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/mincostflow.cpp"

int main() {
	int N,M; cin>>N>>M;
	mincostflow mcf(N+1);
	for(int i=0; i<M; i++) {
		int u,v,c,d; cin>>u>>v>>c>>d;
		mcf.add(u,v,1,c);
		mcf.add(u,v,1,d);
		mcf.add(v,u,1,c);
		mcf.add(v,u,1,d);
	}

	cout<<mcf.solve(1,N,2)<<endl;
}
