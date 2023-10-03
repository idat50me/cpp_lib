#define PROBLEM ""

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../graph/topological_sort.cpp"

int main() {
	int N, M;
	v2d<int> G;
	vector<int> parent;

	cin >> N >> M;
	G.assign(N, 0);
	for(int i = 0; i < N - 1 + M; i++) {
		int A, B;
		cin >> A >> B;
		A--, B--;
		G[A].push_back(B);
	}
	parent.resize(N, -1);

	vector<int> v = topological(G);

	for(int a : v) {
		for(int nv : G[a]) parent[nv] = a;
	}

	for(int i = 0; i < N; i++) cout << parent[i] + 1 << endl;
}