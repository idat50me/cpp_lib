#define IGNORE // テストケース取得不可
#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/challenges/sources/PCK/Final/0019"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "math/factorial.cpp"

int main() {
	int n; cin>>n;
	cout<<factorial(n)<<endl;
}