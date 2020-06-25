#ifndef lib_factorial
#define lib_factorial

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

long long factorial(long long x, long long p=(1LL<<60)) {
	long long res=1;
	while(x>1) res = res*x%p;
	return res;
}

#endif // lib_factorial
