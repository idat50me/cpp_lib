#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/0341"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../pre/macros.cpp"
#include "../mod/modint.cpp"
#include "../structs/matrix.cpp"

int main() {
	string T,B; cin>>T>>B;
	Matrix<mint<MPRIME>> dp(T.length()+1,B.length()+1,0);
	dp[0][0]=1;

	for(int i=1; i<=T.length(); i++) for(int j=0; j<=B.length(); j++) {
		dp[i][j] += dp[i-1][j];
		if(T[i-1]==B[j] && j+1<=B.length()) dp[i][j+1] += dp[i-1][j];
	}
	cout<<dp[T.length()][B.length()]<<endl;
}
