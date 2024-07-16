// competitive-verifier: PROBLEM https://atcoder.jp/contests/abc291/tasks/abc291_h

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/centroid_decomposition.cpp"

int main() {
	int N;
	v2d<int> E;
	vector<int> ans;

	cin >> N;
	for(int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		E[a].emplace_back(b);
		E[b].emplace_back(a);
	}
	ans.resize(N);

	auto cd = centroid_decomposition(E);
	queue<tuple<int, int, int>> q;
	q.emplace(0, N, -1);
	while(not q.empty()) {
		auto [x, xs, par] = q.front();
		q.pop();

		auto [cent, v] = cd.get(x, xs);
		ans[cent] = par;
		cd.del(cent);
		for(int i = 0; i < v.size(); i++) {
			q.emplace(v[i].first, v[i].second, cent + 1);
		}
	}

	for(int i = 0; i < N; i++) cout << ans[i] << (i == N - 1 ? '\n' : ' ');
}
