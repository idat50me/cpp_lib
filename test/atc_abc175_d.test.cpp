#define PROBLEM "https://atcoder.jp/contests/abc175/tasks/abc175_d"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../dp/doubling.cpp"

const long long LLINF = (1LL << 62) - 1;

using plint = pair<long long, long long>;

int main() {
	int N, K;
	vector<int> P, C;
	vector<plint> v;
	long long ans = -LLINF;

	cin >> N >> K;
	P.resize(N);
	C.resize(N);
	v.resize(N);
	for(int i = 0; i < N; i++) {
		cin >> P[i];
		P[i]--;
	}
	for(int i = 0; i < N; i++) cin >> C[i];
	for(int i = 0; i < N; i++) {
		v[i] = {C[P[i]], C[P[i]]};
	}

	doubling<plint> db(P, v, K, [](plint &l, plint &r) {
		plint res;
		res.first = l.first + r.first;
		res.second = max({l.second, l.first + r.second, res.first});
		return res;
	});

	for(int i = 0; i < N; i++) ans = max(ans, db.get(i, {0, -LLINF}, K).second);
	cout << ans << endl;
}