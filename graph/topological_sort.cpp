#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../structure/2d_array.cpp"

vector<int> topological(v2d<int> &lst, vector<int> &indeg) {
	int V = lst.size(), vtmp = lst.size();
	vector<int> res;

	queue<int> q;
	for(int i = 0; i < V; i++) {
		if(indeg[i] == 0) q.push(i);
	}

	while(!q.empty()) {
		int v = q.front();
		q.pop();

		for(const int nv : lst[v]) {
			indeg[nv]--;
			if(indeg[nv] == 0) q.push(nv);
		}

		res.emplace_back(v);
		vtmp--;
	}

	if(vtmp) return {-1};
	return res;
}

vector<int> topological(v2d<int> &lst) {
	vector<int> indeg(lst.size(), 0);

	for(int i = 0; i < lst.size(); i++)
		for(const int v : lst[i]) indeg[v]++;

	return topological(lst, indeg);
}
