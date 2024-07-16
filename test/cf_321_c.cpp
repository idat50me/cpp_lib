// competitive-verifier: PROBLEM https://codeforces.com/problemset/problem/321/C
// competitive-verifier: IGNORE
// non-supported site

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/centroid_decomposition.cpp"

int main() {
	int N;
	v2d<int> E;

	cin >> N;
	E.assign(N, 0);
	for(int i = 0; i < N - 1; i++) {
		int a, b;
		cin >> a >> b;
		a--, b--;
		E[a].emplace_back(b);
		E[b].emplace_back(a);
	}

	vector<char> ans(N);
	queue<tuple<int, int, char>> q;
	auto cd = centroid_decomposition(E);
	q.emplace(0, N, 'A');
	while(not q.empty()) {
		auto [x, xs, c] = q.front();
		q.pop();

		auto res = cd.get(x, xs);
		int centroid = res.first;
		auto v = res.second;
		ans[centroid] = c;
		cd.del(centroid);
		for(int i = 0; i < v.size(); i++) {
			q.emplace(v[i].first, v[i].second, c + 1);
		}
	}

	for(int i = 0; i < N; i++) cout << ans[i] << (i < N - 1 ? ' ' : '\n');
}
