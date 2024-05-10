// competitive-verifier: PROBLEM https://yukicoder.me/problems/no/674

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "structure/segment_set.cpp"

int main() {
	long long D;
	int Q;
	SegmentSet<long long> s;

	cin >> D >> Q;

	long long ans = 0;
	for(int i = 0; i < Q; i++) {
		long long A, B;
		cin >> A >> B;
		s.insert(A, B);
		auto p = s.get_seg(A);
		ans = max(ans, p.second - p.first + 1);
		cout << ans << endl;
	}
}
