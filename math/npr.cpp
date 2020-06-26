#ifndef lib_npr
#define lib_npr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

long long nPr(long long n, long long r, long long p=numeric_limits<long long>::max()) {
	if(n<r) return 0LL;

	long long res=1LL;
	for(int i=0; i<r; i++) res = res*(n-i)%p;
	return res;
}

#endif // lib_npr