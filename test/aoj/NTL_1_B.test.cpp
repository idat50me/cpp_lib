#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B"
#include "pre/pre.cpp"
#include "math/binpow.cpp"

int main() {
	int m,n; cin>>m>>n;
	cout<<binpow(m,n,MPRIME)<<endl;
}
