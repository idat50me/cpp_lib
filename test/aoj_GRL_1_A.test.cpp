#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/GRL_1_A"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "graph/dijkstra.cpp"

int main() {
	int V, E, r;
	cin >> V >> E >> r;
	v2d<int> path(V, 0), cost(V, 0);
	for(int i = 0; i < E; i++) {
		int s, t, d;
		cin >> s >> t >> d;
		path[s].push_back(t);
		cost[s].push_back(d);
	}

	dijkstra dijk(path, cost, r);
	for(int i = 0; i < V; i++) {
		if(dijk[i] == dijk.inf) {
			cout << "INF" << endl;
		}
		else {
			cout << dijk[i] << endl;
		}
	}
}
