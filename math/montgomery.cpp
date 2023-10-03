#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#define dbg(x) cerr << #x << ": " << (x) << endl

struct Montgomery {
private:
	const long long P;
	const int R_bit = 32;
	const long long R = (1ll << R_bit);
	const long long R2;
	long long P2 = 0;
	const long long mask = (1ll << R_bit) - 1;

	long long reduction(long long x) {
		unsigned long long ret = (x * P2) & mask;
		ret = x + ret * P;
		ret >>= R_bit;
		if(ret >= P) ret -= P;
		return ret;
	}

public:
	Montgomery(const long long mod) : P(mod), R2(R % P * R % P) {
		long long t = 0, vi = 1;
		int ni = R_bit;
		while(ni--) {
			if((t & 1) == 0) {
				t += P;
				P2 += vi;
			}
			t >>= 1;
			vi <<= 1;
		}
	}

	long long mul(long long a, long long b) {
		long long tmp = a * R2;
		return reduction(reduction(a * b) * R2);
	}
};
