#ifndef lib_nhr
#define lib_nhr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "pre/macros.cpp"
#include "math/ncr.cpp"

ll nHr(ll n, ll r) {
	return nCr(n+r-1,r-1);
}

#endif // lib_nhr