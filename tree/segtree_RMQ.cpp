/*
 * @brief RMQ(セグメント木)
 */

#ifndef lib_segtree_RMQ
#define lib_segtree_RMQ

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

template<typename T>
struct RMQ {
private:
	int n=1;
	vector<T> node;
	T inf=numeric_limits<T>::max();

public:
	RMQ(vector<T> v) {
		while(n<v.size()) n*=2;
		node.resize(2*n-1,inf);
		for(int i=0; i<v.size(); i++) node[n-1+i]=v[i];
		for(int i=n-2; i>=0; i--) node[i]=min(node[2*i+1],node[2*i+2]);
	}

	void update(int idx, T val) {
		idx+=n-1;
		node[idx]=val;

		while(idx>0) {
			idx=(idx-1)/2;
			node[idx]=min(node[2*idx+1],node[2*idx+2]);
		}
	}

	// 区間[L,R)の最小値
	// now: 今見てるindex
	// 区間[l,r)の最小値はnowの要素
	T getmin(int L, int R) { return getmin__(L, R, 0, 0, n); }
private:
	T getmin__(int L, int R, int now, int l, int r) {
		if(r<=L || R<=l) return inf;
		if(L<=l && r<=R) return node[now];

		T vl=getmin(L,R,2*now+1,l,(l+r)/2);
		T vr=getmin(L,R,2*now+2,(l+r)/2,r);
		return min(vl,vr);
	}
public:
};

#endif // lib_segtree_RMQ
