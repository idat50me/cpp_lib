#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_F"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "tree/segtree_lazy.cpp"

int main() {
	int N,Q; cin>>N>>Q;
	const int in = 2147483647;
	segtree_lazy<int,int> lsg(
		N,
		[](int l, int r){return min(l,r);},
		[](int x, int m){return m;},
		[](int l, int r){return r;},
		in, in
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
