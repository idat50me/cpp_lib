#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct Ford_Fulkerson {
private:
	struct edge {
		int next;
		int rev;
		long long cap;
		long long cost;
		
		edge(int next, int rev, long long cap) : next(next), rev(rev), cap(cap), cost(0) {}
		edge(int next, int rev, long long cap, long long cost) : next(next), rev(rev), cap(cap), cost(cost) {}
	};

	vector<vector<edge>> G;
	vector<bool> used;

public:
	Ford_Fulkerson(int N) : G(N),used(N) {}

	void add(int from, int to, long long cap) {
		G[from].push_back(edge(to, G[to].size(), cap));
		G[to].push_back(edge(from, G[from].size()-1, 0));
	}
	void add(int from, int to, long long cap, long long cost) {
		G[from].push_back(edge(to, G[to].size(), cap, cost));
		G[to].push_back(edge(from, G[from].size()-1, 0, -cost));
	}

	long long f_dfs(int s, int t, long long flow) {
		if(s == t) return flow;
		used[s] = true;
		for(edge &ed : G[s]) {
			if(!used[ed.next] && ed.cap>0) {
				long long captmp = f_dfs(ed.next, t, min(flow,ed.cap));
				if(captmp > 0) {
					ed.cap -= captmp;
					G[ed.next][ed.rev].cap += captmp;
					return captmp;
				}
			}
		}
		return 0LL;
	}

	// 最大流問題
	long long max_flow(int s, int t) {
		long long res = 0;
		while(1) { // 最大になるまで繰り返し
			used.assign(used.size(), false);
			long long restmp = f_dfs(s, t, (1LL<<62)-1);
			if(restmp == 0) return res;
			res += restmp;
		}
	}
};
