#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct maxflow {
private:
	struct edge {
		int next;
		int rev;
		long long cap;
		
		edge(int next, int rev, long long cap) : next(next), rev(rev), cap(cap) {}
	};

	const int vnum;
	vector<vector<edge>> G;
	vector<bool> used;

public:
	maxflow(int V) : vnum(V), G(V), used(V) {}

	void add(int from, int to, long long cap) {
		G[from].push_back(edge(to, G[to].size(), cap));
		G[to].push_back(edge(from, G[from].size()-1, 0));
	}

private:
	long long dfs(int s, int t, long long flow) {
		if(s == t) return flow;
		used[s] = true;
		for(edge &ed : G[s]) {
			if(!used[ed.next] && ed.cap>0) {
				long long captmp = dfs(ed.next, t, min(flow,ed.cap));
				if(captmp > 0) {
					ed.cap -= captmp;
					G[ed.next][ed.rev].cap += captmp;
					return captmp;
				}
			}
		}
		return 0LL;
	}

public:
	long long solve(int s, int t) {
		long long res = 0;
		while(1) {
			used.assign(vnum, false);
			long long restmp = dfs(s, t, (1LL<<62)-1);
			if(restmp == 0) return res;
			res += restmp;
		}
	}
};
