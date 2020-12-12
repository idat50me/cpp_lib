#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/2429"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/mincostflow_nega.cpp"
#include "structs/matrix.cpp"

int main() {
	int N; cin>>N;
	matrix<int> W(N,N),E(N,N);
	matrix<char> mp(N,N);
	W.in(); E.in(); mp.in();
	mincostflow mcf(N+N+2);
	int s=N+N, t=s+1, ans=0;

	for(int i=0; i<N; i++) for(int j=0; j<N; j++) {
		if(mp[i][j]=='o') {
			ans += E[i][j];
			mcf.add(i,N+j,1,-E[i][j]);
		}
		else {
			mcf.add(i,N+j,1,W[i][j]);
		}
	}
	for(int i=0; i<N; i++) {
		mcf.add(s,i,1,0);
		mcf.add(N+i,t,1,0);
	}

	cout<<ans+mcf.solve(s,t,N)<<endl;

	auto stat = mcf.stat();
	queue<pair<int,int>> wr,er;
	for(int i=0; i<stat.size(); i++) {
		if(stat[i].from==s || stat[i].to==t) continue;
		int from=stat[i].from, to=stat[i].to-N;
		if(stat[i].used_cap==1)
			if(mp[from][to]=='.') wr.push({from+1,to+1});
		else
			if(mp[from][to]=='o') er.push({from+1,to+1});
	}

	cout<<wr.size()+er.size()<<endl;
	while(!er.empty()) {
		int from=er.front().first, to=er.front().second;
		er.pop();
		cout<<from<<" "<<to<<" write"<<endl;
	}
	while(!wr.empty()) {
		int from=wr.front().first, to=wr.front().second;
		wr.pop();
		cout<<from<<" "<<to<<" write"<<endl;
	}
}
