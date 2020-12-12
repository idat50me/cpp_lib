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
		bool isrev;
		
		edge(int next, int rev, long long cap, long long cost, bool isrev) : next(next), rev(rev), cap(cap), cost(cost), isrev(isrev) {}
	};

	struct stat_e {
		int from, to;
		long long used_cap;

		stat_e(int from, int to, long long cap) : from(from), to(to), used_cap(cap) {}
	};

public:
	const long long inf = (1LL<<62)-1;

private:
	const int vnum;
	vector<vector<edge>> G;
	vector<long long> pot;
	vector<int> pv, pe;

public:
	mincostflow(int V) : vnum(V), G(V), pot(V,0), pv(V), pe(V) {}

	void add(int from, int to, long long cap, long long cost) {
		assert(cost >= 0);
		G[from].push_back(edge(to, G[to].size(), cap, cost, false));
		G[to].push_back(edge(from, G[from].size()-1, 0, -cost, true));
	}

private:
	long long dijkstra(int s, int t) {
		long long ans = 0;
		priority_queue<pair<long long,int>, vector<pair<long long,int>>, greater<pair<long long,int>>> q;
		vector<long long> dist(vnum, inf);
		pv.assign(vnum, -1);
		pe.assign(vnum, -1);
		q.push(make_pair(0LL,s));
		dist[s] = 0;

		while(!q.empty()) {
			long long d = q.top().first, v = q.top().second;
			q.pop();
			if(dist[v] < d) continue;
			for(int i=0; i<G[v].size(); i++) {
				edge &ed = G[v][i];
				long long nd = d+ed.cost+pot[v]-pot[ed.next];
				if(ed.cap>0 && dist[ed.next]>nd) {
					dist[ed.next] = nd;
					pv[ed.next] = v;
					pe[ed.next] = i;
					q.push(make_pair(nd,ed.next));
				}
			}
		}

		if(dist[t] == inf) return inf;

		ans = dist[t]+pot[t];
		for(int v=0; v<vnum; v++) {
			if(dist[v] == inf) pot[v] = inf;
			else pot[v] += dist[v];
		}
		return ans;
	}

public:
	// inf: 未到達
	long long solve(int s, int t, int f) {
		long long res = 0;

		while(f > 0) {
			long long restmp = dijkstra(s, t);
			int add_f = f;
			if(restmp == inf) return inf;
			for(int v=t; v!=s; v=pv[v]) add_f = min((long long)add_f, G[pv[v]][pe[v]].cap);
			f -= add_f;
			res += restmp*add_f;
			for(int v=t; v!=s; v=pv[v]) {
				edge &ed = G[pv[v]][pe[v]];
				ed.cap -= add_f;
				G[v][ed.rev].cap += add_f;
			}
		}
		return res;
	}

	vector<stat_e> stat() {
		vector<stat_e> res;
		for(int i=0; i<vnum; i++) for(const edge &ed: G[i]) {
			if(!ed.isrev) res.push_back(stat_e(i, ed.next, G[ed.next][ed.rev].cap));
		}
		return res;
	}
};
