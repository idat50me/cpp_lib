// competitive-verifier: PROBLEM https://atcoder.jp/contests/arc117/tasks/arc117_c

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../combinatorics/small_p_ncr.cpp"
#include "../math/binpow.cpp"

int main() {
	spncr ncr(400010, 3);
	int N;
	long long ans = 0;
	long long thnum = 0;
	long long r = 1;

	cin >> N;

	for(int i = 0; i < N; i++) {
		char ch;
		cin >> ch;
		int n = -1;
		if(ch == 'B') n = 0;
		else if(ch == 'W')
			n = 1;
		else if(ch == 'R')
			n = 2;

		ans += ncr(N - 1, i) * n;
		ans %= 3;
	}
	ans *= binpow(2, N - 1, 3);
	ans %= 3;

	vector<string> v = {"B", "W", "R"};
	cout << v[ans] << endl;
}
