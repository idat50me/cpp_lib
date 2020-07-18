/*
 * @brief nHr
 * 
 */

#ifndef lib_nhr
#define lib_nhr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../pre/macros.cpp"
#include "../combinatorics/ncr.cpp"

ll nHr(ll n, ll r) {
	if(r == 0) return 1;
	if(n == 0) return 0;
	return nCr(n+r-1,n-1);
}

#endif // lib_nhr
