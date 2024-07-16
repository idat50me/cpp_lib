// competitive-verifier: PROBLEM https://codeforces.com/problemset/problem/321/C
// competitive-verifier: IGNORE
// non-supported site

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "structure/2d_array.cpp"
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
	char c = 'A';
	queue<int> q, qs;
	auto cd = centroid_decomposition(E);
	q.push(0);
	qs.push(N);
	while(not q.empty()) {
		queue<int> q2, qs2;
		while(not q.empty()) {
			int x = q.front(), xs = qs.front();
			q.pop(), qs.pop();

			auto res = cd.get(x, xs);
			int centroid = res.first;
			auto v = res.second;
			ans[centroid] = c;
			cd.del(centroid);
			for(int i = 0; i < v.size(); i++) {
				q2.push(v[i].first);
				qs2.push(v[i].second);
			}
		}
		swap(q, q2);
		swap(qs, qs2);
		c++;
	}

	for(int i = 0; i < N; i++) cout << ans[i] << (i < N - 1 ? ' ' : '\n');
}
