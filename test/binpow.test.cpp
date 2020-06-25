#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B"
#include "../lib1/include_files.cpp"
#include "../lib1/alias_declaration.cpp"
#include "../lib1/macros.cpp"
#include "../lib1/binpow.cpp"

int main() {
	int m,n; cin>>m>>n;
	cout<<binpow(m,n,MPRIME)<<endl;
}
