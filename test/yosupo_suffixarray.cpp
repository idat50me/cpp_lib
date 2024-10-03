// competitive-verifier: PROBLEM https://judge.yosupo.jp/problem/suffixarray

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "string/suffix_array.cpp"

int main() {
	string S;
	cin >> S;
	vector<int> sa = SuffixArray(S).get_array();
	for(int i = 0; i < S.length(); i++) cout << sa[i] << (i == S.length() - 1 ? '\n' : ' ');
}
