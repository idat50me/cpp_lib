#define PROBLEM "https://judge.yosupo.jp/problem/enumerate_palindromes"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "string/manacher.cpp"

int main() {
	string S; cin>>S;
	vector<int> R = manacher_even(S);
	for(int i=0; i<R.size(); i++) {
		if(i%2==0) cout<<2*R[i]-1;
		else cout<<2*R[i];
		cout<<(i==R.size()-1?'\n':' ');
	}
}
