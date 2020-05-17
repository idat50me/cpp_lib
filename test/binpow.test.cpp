#define PROBLEM "https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B"
#include "../include_files.hpp"
#include "../lib1/alias_declaration.hpp"
#include "../macros.hpp"
#include "../binpow.hpp"

int main() {
	int m,n; cin>>m>>n;
	cout<<binpow(m,n,MPRIME)<<endl;
}
