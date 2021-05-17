#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../structure/2d_array.cpp"

template<typename T> struct dijkstra {
	using P = pair<long long, int>;
	const long long inf = (1LL << 62) - 1;

private:
	int n;
	vector<long long> dist;
	vector<int> prev;

public:
	dijkstra(v2d<int> &path, v2d<T> &cost, int s) : n(path.size()), dist(n, inf), prev(n, -1) {
		dist[s] = 0;
		priority_queue<P, vector<P>, greater<P>> q;
		q.emplace(0, s);
		while(not q.empty()) {
			auto [d, x] = q.top();
			q.pop();
			if(d > dist[x]) continue;
			for(int i = 0; i < path[x].size(); i++) {
				int nx = path[x][i];
				long long nd = d + cost[x][i];
				if(nd >= dist[nx]) continue;
				dist[nx] = nd;
				prev[nx] = x;
				q.emplace(nd, nx);
			}
		}
	}

	inline long long operator[](int idx) {
		return dist[idx];
	}

	vector<int> get_path(int t) {
		vector<int> ans;
		for(int x = t; x >= 0; x = prev[x]) ans.emplace_back(x);
		return vector<int>(ans.rbegin(), ans.rend());
	}
};
