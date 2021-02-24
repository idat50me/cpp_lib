#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/0560"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "structure/2d_array.cpp"
#include "dp/2d_cumulative_sum.cpp"

int main() {
	int M, N, K;
	v2d<int> J, O, I;
	cin >> M >> N >> K;
	J.assign(M, N, 0);
	O.assign(M, N, 0);
	I.assign(M, N, 0);
	for(int i = 0; i < M; i++)
		for(int j = 0; j < N; j++) {
			char ch;
			cin >> ch;
			if(ch == 'J') J[i][j] = 1;
			else if(ch == 'O')
				O[i][j] = 1;
			else
				I[i][j] = 1;
		}

	sum2d sumj(J), sumo(O), sumi(I);
	for(int i = 0; i < K; i++) {
		int a, b, c, d;
		cin >> a >> b >> c >> d;
		a--, b--;
		cout << sumj.get(a, b, c, d) << " " << sumo.get(a, b, c, d) << " " << sumi.get(a, b, c, d)
			 << endl;
	}
}
