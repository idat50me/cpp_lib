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

public:
	const long long inf = (1LL<<62)-1;

private:
	const int vnum;
	vector<vector<edge>> G;
	vector<long long> pot;
	vector<int> pv, pe;

public:
	mincostflow(int N) : vnum(N), G(N), pot(N), pv(N), pe(N) {}

	void add(int from, int to, long long cap, long long cost) {
		G[from].push_back(edge(to, G[to].size(), cap, cost));
		G[to].push_back(edge(from, G[from].size()-1, 0, -cost));
	}

//private:
	long long bellman_ford(int s, int t, int &f) {
		pot.assign(vnum, inf);
		pot[s] = 0;
		for(int i=0; i<vnum; i++) {
			for(int j=0; j<vnum; j++) {
				if(pot[j] == inf) continue;
				for(const edge &ed: G[j]) {
					if(ed.cap>0 && pot[ed.next]>pot[j]+ed.cost) {
						if(i == vnum-1) return -inf;
						pot[ed.next] = pot[j]+ed.cost;
					}
				}
			}
		}

		int add_f = f;
		for(int v=t; v!=s; v=pv[v]) add_f = min((long long)add_f, G[pv[v]][pe[v]].cap);
		f -= add_f;
		for(int v=t; v!=s; v=pv[v]) {
			edge &ed = G[pv[v]][pe[v]];
			ed.cap -= add_f;
			G[v][ed.rev].cap += add_f;
		}
		return pot[t]*add_f;
	}

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
				cout<<v<<" "<<ed.next<<" "<<nd<<endl;
				if(ed.cap>0 && dist[ed.next]>nd) {
					dist[ed.next] = nd;
					pv[ed.next] = v;
					pe[ed.next] = i;
					q.push(make_pair(nd,ed.next));
				}
			}
		}

		for(int v=0; v<vnum; v++) {
			if(dist[v] == inf) pot[v] = inf;
			else pot[v] += dist[v];
		}

		return dist[t];
	}

public:
	// -inf: 負閉路検出  inf: 未到達
	long long solve(int s, int t, int f) {
		long long res = bellman_ford(s, t, f);
		if(abs(res) == inf) return res;

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
};
