#define IGNORE
#define PROBLEM "https://yukicoder.me/problems/no/1013"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "dp/doubling.cpp"

int main() {
	int N, K;
	cin >> N >> K;
	vector<int> P(N + 1), v(N + 1);
	P[0] = v[0] = 0;
	for(int i = 1; i <= N; i++) v[i] = (i + P[i] - 1) % N + 1;

	doubling db(v, K);
	for(int i = 1; i <= N; i++) cout << db.get(i, K) << endl;
}
