// @docs ./docs/sieve_of_eratosthenes.md

#ifndef lib_sieve_of_eratosthenes
#define lib_sieve_of_eratosthenes

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"

struct Sieve {
	int N;
	vector<int> f,primes;

	Sieve(int n=1) : N(n), f(n+1,0) {
		f[0]=f[1]=-1;
		for(int i=2; i<=N; i++) {
			if(f[i]) continue;
			primes.push_back(i);
			f[i]=i;
			if(i>(1<<15)) continue;
			for(int j=i*i; j<=N; j+=i) if(!f[j]) f[j]=i;
		}
	}

	bool isprime(int x) { return f[x]==x; }

	vector<pair<int,int>> primefact(int x) {
		vector<pair<int,int>> res;
		for(int i=0; i<primes.size() && x>1; i++) {
			int cnt=0;
			while(x%primes[i]==0) {
				x/=primes[i];
				cnt++;
			}
			if(cnt) res.push_back({primes[i],cnt});
		}
		return res;
	}

	int divisorcount(int x) {
		int res=1;
		vector<pair<int,int>> fl=primefact(x);
		for(int i=0; i<fl.size(); i++) {
			res*=fl[i].second;
		}
		return res;
	}
};

#endif // lib_sieve_of_eratosthenes
