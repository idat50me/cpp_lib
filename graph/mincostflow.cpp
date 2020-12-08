#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct mincostflow {
private:
	struct edge {
		int next;
		int rev;
		long long cap;
		long long cost;
		
		edge(int next, int rev, long long cap, long long cost) : next(next), rev(rev), cap(cap), cost(cost) {}
	};

	const int vnum;
	vector<vector<edge>> G;
	vector<bool> used;

public:
	mincostflow(int N) : vnum(N), G(N), used(N) {}

	void add(int from, int to, long long cap, long long cost) {
		G[from].push_back(edge(to, G[to].size(), cap, cost));
		G[to].push_back(edge(from, G[from].size()-1, 0, -cost));
	}

private:
	long long Bellman_Ford(int s, int t) {
		const long long inf = (1LL<<62)-1;
		vector<long long> dist(vnum, inf);
		vector<int> pv(vnum), pe(vnum);
		dist[s] = 0;
		for(int i=0; i<vnum; i++) {
			bool upd = false;
			for(int j=0; j<vnum; j++) {
				if(dist[j] == inf) continue;
				for(int k=0; k<G[j].size(); k++) {
					edge &ed = G[j][k];
					if(ed.cap>0 && dist[ed.next]>dist[j]+ed.cost) {
						if(i == vnum-1) return -1;
						upd = true;
						dist[ed.next] = dist[j]+ed.cost;
						pv[ed.next] = j;
						pe[ed.next] = k;
					}
				}
			}
			if(!upd) break;
		}
		for(int v=t; v!=s; v=pv[v]) {
			edge &ed = G[pv[v]][pe[v]];
			ed.cap--;
			G[ed.next][ed.rev].cap++;
		}
		if(dist[t] == inf) return -1;
		return dist[t];
	}

public:
	long long solve(int s, int t, int f) {
		long long res = 0;
		for(int i=0; i<f; i++) {
			used.assign(vnum, false);
			long long restmp = Bellman_Ford(s, t);
			if(restmp < 0) return -1;
			res += restmp;
		}
		return res;
	}
};
