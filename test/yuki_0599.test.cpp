#define PROBLEM "https://yukicoder.me/problems/no/599"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "string/z_algorithm.cpp"
#include "mod/modint.cpp"

using mi = mint<1000000007>;

int main() {
	string S; cin>>S;
	vector<mi> dp(S.length()/2+1, 0);
	dp[0] = 1;

	for(int i=0; i<=(S.length()-1)/2; i++) {
		vector<int> v = z_algorithm(string(S.begin()+i, S.end()-i));
		for(int j=1; j<=v.size()/2; j++) {
			if(v[v.size()-j]==j) dp[i+j] += dp[i];
		}
	}

	cout<<accumulate(dp.begin(), dp.end(), mi(0));
}
