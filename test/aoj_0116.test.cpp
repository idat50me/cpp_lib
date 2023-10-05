#define IGNORE
// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/0116

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../dp/largest_histogram_rectangle.cpp"
#include "../structure/2d_array.cpp"

int main() {
	while(1) {
		int H, W;
		cin >> H >> W;
		if(H == 0 and W == 0) return 0;

		v2d<char> m;
		m.in(H, W);
		v2d<int> hist(H, W);

		for(int j = 0; j < W; j++) {
			hist[0][j] = (m[0][j] == '*' ? 0 : 1);
		}
		for(int i = 1; i < H; i++) {
			for(int j = 0; j < W; j++) {
				hist[i][j] = (m[i][j] == '*' ? 0 : hist[i - 1][j] + 1);
			}
		}

		int ans = 0;
		for(int i = 0; i < H; i++) ans = max(ans, (int)largest_histogram_rectangle(hist[i]));
		cout << ans << endl;
	}
}
