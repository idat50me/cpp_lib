// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/shortest_path

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/dijkstra.cpp"

int main() {
	int N, M, s, t;
	cin >> N >> M >> s >> t;
	v2d<int> path(N, 0), cost(N, 0);
	for(int i = 0; i < M; i++) {
		int a, b, c;
		cin >> a >> b >> c;
		path[a].push_back(b);
		cost[a].push_back(c);
	}

	dijkstra dijk(path, cost, s);
	auto ans = dijk.get_path(t);

	if(ans.size() == 1) {
		cout << -1 << endl;
		return 0;
	}

	cout << dijk[t] << " " << ans.size() - 1 << endl;
	for(int i = 0; i < ans.size() - 1; i++) {
		cout << ans[i] << " " << ans[i + 1] << endl;
	}
}
