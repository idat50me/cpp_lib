#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../pre/macros.cpp"
#include "../math/sieve_of_eratosthenes.cpp"

int main() {
	Sieve sv(100000010);
	int n; cin>>n;
	int res=0;
	for(int i=0; i<n; i++) {
		int a; cin>>a;
		if(sv.isprime(a)) res++;
	}
	cout<<res<<endl;
}
