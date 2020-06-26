// @docs ../docs/sieve_of_eratosthenes.md

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

	Sieve(int N=1) : N(N), f(N+1) {
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

	vector<int> factorlist(int x) {
		vector<int> res;
		while(x!=1) {
			res.push_back(f[x]);
			x/=f[x];
		}
		return res;
	}

	vector<pair<int,int>> factorcnt(int x) {
		vector<int> fl=factorlist(x);
		if(!fl.size()) return {};
		vector<pair<int,int>> res(1,{fl[0],0});
		for(int p: fl) {
			if(res.back().first==p) {
				res.back().second++;
			}
			else {
				res.push_back({p,1});
			}
		}
		return res;
	}
};

#endif // lib_sieve_of_eratosthenes
