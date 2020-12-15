#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_H"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/lazy_segtree.cpp"

int main() {
	int N,Q; cin>>N>>Q;
	const int in = 2147483647;
	vector<int> v(N,0);
	lazy_segtree<int,int> lsg(
		v,
		[](int l, int r){return min(l,r);},
		[](int x, int m){return x+m;},
		[](int l, int r){return l+r;},
		1000000000, 0
	);

	while(Q--) {
		int mode; cin>>mode;
		if(mode==0) {
			int S,T,X; cin>>S>>T>>X;
			lsg.update(S,T+1,X);
		}
		else {
			int S,T; cin>>S>>T;
			cout<<lsg.get(S,T+1)<<endl;
		}
	}
}
