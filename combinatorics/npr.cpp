/*
 * @brief nPr mod p
 * 
 */

#ifndef lib_npr
#define lib_npr

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif
#include "pre/macros.cpp"

ll nPr(ll n, ll r, ll p=MMPRIME) {
	if(n < r) return 0LL;

	ll res = 1LL;
	for(int i=0; i<r; i++) res = res*(n-i)%p;
	return res;
}

#endif // lib_npr
