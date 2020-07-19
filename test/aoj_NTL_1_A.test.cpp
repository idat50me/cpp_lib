#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../math/sieve_of_eratosthenes.cpp"

int main() {
	int n; cin>>n;
	Sieve sv(n);
	vector<pair<int,int>> flist=sv.primefact(n);

	cout<<n<<':';
	for(int i=0; i<flist.size(); i++) {
		for(int j=0; j<flist[i].second; j++) {
			cout<<" "<<flist[i].first;
		}
	}
	cout<<endl;
}
