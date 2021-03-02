#define PROBLEM "https://yukicoder.me/problems/no/497"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "structure/2d_array.cpp"
#include "graph/topological_sort.cpp"

int main() {
	int N, ans = 0;
	cin >> N;
	vector<int> X(N), Y(N), Z(N), tpl, dp(N, 1);
	v2d<int> lst(N, 0);
	for(int i = 0; i < N; i++) {
		cin >> X[i] >> Y[i] >> Z[i];
		if(X[i] > Y[i]) swap(X[i], Y[i]);
		if(X[i] > Z[i]) swap(X[i], Z[i]);
		if(Y[i] > Z[i]) swap(Y[i], Z[i]);
	}

	for(int i = 0; i < N; i++)
		for(int j = i + 1; j < N; j++) {
			if(X[i] < X[j] && Y[i] < Y[j] && Z[i] < Z[j]) lst[j].push_back(i);
			if(X[i] > X[j] && Y[i] > Y[j] && Z[i] > Z[j]) lst[i].push_back(j);
		}

	tpl = topological(lst);
	for(int i = 0; i < N; i++) {
		int v = tpl[i];
		ans = max(ans, dp[v]);
		for(int nv : lst[v]) dp[nv] = max(dp[nv], dp[v] + 1);
	}
	cout << ans;
}
