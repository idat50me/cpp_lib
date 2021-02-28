#define PROBLEM "https://yukicoder.me/problems/no/186"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/chinese_remainder_theorem.cpp"

int main() {
	int x1, y1, x2, y2, x3, y3;
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	auto [r, m] = crt({x1, x2, x3}, {y1, y2, y3});
	if(m == 0) {
		cout << -1 << endl;
	}
	else if(r == 0) {
		cout << m << endl;
	}
	else {
		cout << r << endl;
	}
}
