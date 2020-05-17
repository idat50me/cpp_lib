#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_B"
#include "ilb1/include_files.hpp"
#include "lib1/alias_declaration.hpp"
#include "lib1/macros.hpp"
#include "lib1/binpow.hpp"

int main() {
	int m,n; cin>>m>>n;
	cout<<binpow(m,n,MPRIME)<<endl;
}
