#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_E"

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "dp/levenshtein_distance.cpp"

int main() {
	string s1,s2; cin>>s1>>s2;
	cout<<levenshtein(s1,s2)<<endl;
}
