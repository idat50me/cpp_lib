// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/zalgorithm

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "string/z_algorithm.cpp"

int main() {
	string S;
	cin >> S;
	vector<int> v = z_algorithm(S);
	for(int i = 0; i < v.size(); i++) cout << v[i] << (i == v.size() - 1 ? '\n' : ' ');
}
