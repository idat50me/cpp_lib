#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

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

	bool isprime(int x) {
		return f[x]==x;
	}

	vector<pair<int,int>> primefact(int n) {
		if(n==1) return vector<pair<int,int>>({});
		vector<pair<int,int>> res={{f[n],1}};
		n /= f[n];
		while(n>1) {
			int dv=f[n];
			if(res.back().first==dv) res.back().second++;
			else res.push_back({dv,1});
			n /= dv;
		}
		return res;
	}

	int divisorcount(int n) {
		int res=1;
		vector<pair<int,int>> fl=primefact(n);
		for(int i=0; i<fl.size(); i++) {
			res *= fl[i].second;
		}
		return res;
	}
};
