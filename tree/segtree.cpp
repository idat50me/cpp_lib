/*
 * @brief segtree(セグメントツリー) 未完
 */

#ifndef lib_segtree
#define lib_segtree

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T, T (*op)(T,T), T (*e)()>
struct segtree {
private:
	int n=1;
	vector<T> node;
	T e_ = e();

public:
	segtree(T siz) {
		whlie(n < siz) n*=2;
		node.resize(2*n-1, e_);
	}

	segtree(vector<T> v) {
		while(n < v.size()) n*=2;
		node.resize(2*n-1, e_);
		for(int i=0; i<v.size(); i++) node[n-1+i]=v[i];
		for(int i=n-2; i>=0; i--) node[i]=op(node[2*i+1],node[2*i+2]);
	}

	void update(int idx, T val) {
		idx+=n-1;
		node[idx]=val;

		while(idx>0) {
			idx=(idx-1)/2;
			node[idx]=op(node[2*idx+1],node[2*idx+2]);
		}
	}

	T get(int L, int R) { return get__(L, R, 0, 0, n); }
private:
	T get__(int L, int R, int now, int l, int r) {
		if(r<=L || R<=l) return e_;
		if(L<=l && r<=R) return node[now];

		T vl=get__(L,R,2*now+1,l,(l+r)/2);
		T vr=get__(L,R,2*now+2,(l+r)/2,r);
		return op(vl,vr);
	}
public:
};

#endif // lib_segtree
