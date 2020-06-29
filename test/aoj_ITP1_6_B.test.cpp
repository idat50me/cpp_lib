#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "structs/matrix.cpp"

int main() {
	int N; cin>>N;
	Matrix card(4,14,true);
	map<char,int> ch2i;
	ch2i['S']=0, ch2i['H']=1, ch2i['C']=2, ch2i['D']=3;
	map<int,char> i2ch;
	i2ch[0]='S', i2ch[1]='H', i2ch[2]='C', i2ch[3]='D';

	for(int i=0; i<N; i++) {
		char ch; int num;
		cin>>ch>>num;
		card[ch2i[ch]][num]=false;
	}

	for(int i=0; i<4; i++)for(int j=1; j<=13; j++) {
		if(card[i][j]) {
			cout<<i2ch[i]<<" "<<j<<endl;
		}
	}
}
