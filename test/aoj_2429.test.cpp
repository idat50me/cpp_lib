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
	queue<int> F,T;
	queue<string> qstr;
	for(int i=0; i<stat.size(); i++) {
		if(stat[i].from==s || stat[i].to==t) continue;
		int from=stat[i].from, to=stat[i].to-N;
		if(stat[i].used_cap==1) {
			if(mp[from][to]=='.') {
				F.push(from+1), T.push(to+1);
				qstr.push("write");
			}
		}
		else if(mp[from][to]=='o') {
			F.push(from+1), T.push(to+1);
			qstr.push("erase");
		}
	}

	cout<<F.size()<<endl;
	while(!F.empty()) {
		int from=F.front(), to=T.front();
		string str=qstr.front();
		F.pop(); T.pop(); qstr.pop();
		cout<<from<<" "<<to<<" "<<str<<endl;
	}
}
