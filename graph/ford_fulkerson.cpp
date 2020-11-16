#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct Ford_Fulkerson {
private:
	struct edge_ {
		// 逆辺のedge_がG[next][rev]に存在する
		int next;
		int rev;
		long long cap;
	};

	vector<vector<edge_>> G;
	vector<bool> used;

public:
	Ford_Fulkerson(int N) : G(N),used(N) {}

	void add(int from, int to, long long cap) {
		G[from].push_back((edge_){to, (int)G[to].size(), cap});
		G[to].push_back((edge_){from, (int)G[from].size()-1, 0});
	}

	long long f_dfs(int s, int t, long long flow) {
		if(s == t) return flow;
		used[s] = true;
		for(edge_ &ed : G[s]) {
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

	// 最大二部マッチング問題の準備（StartNodeをN+1, GoalNodeをN+2に設定）
	// これからつくる
};
