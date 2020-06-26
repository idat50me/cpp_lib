#define PROBLEM "https://yukicoder.me/problems/no/117"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/npr.cpp"
#include "math/ncr.cpp"
#include "math/nhr.cpp"

int main() {
	int T; cin>>T;
	for(int i=0; i<T; i++) {
		int n=0, r=0, mode;
		string S; cin>>S;
		bool fn=false;
		for(int i=0; i<S.length(); i++) {
			char ch=S[i];
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
				cout<<nCr(n,r)<<endl;
				break;
			case 1:
				cout<<nPr(n,r)<<endl;
				break;
			case 2:
				cout<<nHr(n,r)<<endl;
				break;
		}
	}
}
