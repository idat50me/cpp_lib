#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../structure/2d_array.cpp"

struct centroid_decomposition {
private:
	int n;
	v2d<int> &E;
	vector<int> deleted;
	vector<int> subsizes;
	int found_cent;

	int centroid = -1;
	vector<pair<int, int>> subtrees;

public:
	centroid_decomposition(v2d<int> &E) : E(E), n(E.size()), deleted(n, 0), subsizes(n){};

private:
	int dfs(int x, int tsize, int prev = -1) {
		if(found_cent) return -1;

		int size = 1, cent_flag = 1;
		for(int i = 0; i < E[x].size(); i++) {
			int nx = E[x][i];
			if(deleted[nx] or nx == prev) continue;
			int chsize = dfs(nx, tsize, x);
			if(found_cent) return -1;
			if(chsize > tsize / 2) cent_flag = 0;
			size += chsize;
		}
		if(tsize - size > tsize / 2) cent_flag = 0;
		if(cent_flag) {
			found_cent = 1;
			centroid = x;
			for(int i = 0; i < E[x].size(); i++) {
				int nx = E[x][i];
				if(deleted[nx]) continue;
				if(nx == prev) {
					subtrees.emplace_back(nx, tsize - size);
				}
				else {
					subtrees.emplace_back(nx, subsizes[nx]);
				}
			}
		}

		return subsizes[x] = size;
	}

public:
	pair<int, vector<pair<int, int>>> get(int x, int tsize) {
		subtrees.clear();
		found_cent = 0;
		dfs(x, tsize);
		return pair(centroid, subtrees);
	}

	inline void del(int x) {
		deleted[x] = 1;
	}
};
