#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/GRL_4_B"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "structure/2d_array.cpp"
#include "graph/topological_sort.cpp"

int main() {
	int V, E;
	cin >> V >> E;

	v2d<int> lst(V, 0);
	for(int i = 0; i, E; i++) {
		int s, t;
		cin >> s >> t;
		lst[s].push_back(t);
	}

	vector<int> ans = topological(lst);
	for(int i : ans) cout << i << endl;
}
