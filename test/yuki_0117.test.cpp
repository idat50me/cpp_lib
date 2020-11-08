#define PROBLEM "https://yukicoder.me/problems/no/117"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "combinatorics/combinatorics.cpp"
#define MPRIME 1000000007LL

int main() {
	COMB comb(2100000,MPRIME);

	int T; cin>>T;
	for(int i=0; i<T; i++) {
		int n=0, r=0, mode=-1;
		string S; cin>>S;
		bool fn=false;
		for(int j=0; j<S.length(); j++) {
			char ch=S[j];
			switch(ch) {
				case 'C':
					mode=0;
					break;
				case 'P':
					mode=1;
					break;
				case 'H':
					mode=2;
					break;
				case ',':
					fn=true;
					break;
				case '(':
				case ')':
					break;
				default:
					int d=(int)(ch-'0');
					if(fn) r=r*10+d;
					else   n=n*10+d;
					break;
			}
		}
		switch(mode) {
			case 0:
				cout<<comb.ncr(n,r)<<endl;
				break;
			case 1:
				cout<<comb.npr(n,r)<<endl;
				break;
			case 2:
				cout<<comb.nhr(n,r)<<endl;
				break;
			default:
				return 0;
		}
	}
}
