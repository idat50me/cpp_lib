#define PROBLEM "https://yukicoder.me/problems/no/888"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../pre/macros.cpp"
#include "../math/divisor.cpp"

int main() {
	ll N; cin>>N;
	vector<ll> v=divisor(N);
	ll res=0;

	for(int i=0; i<v.size(); i++) res+=v[i];
	cout<<res<<endl;
}
