/*
 * @brief Union-Find木
 * @docs ./docs/union_find.md
 */

#ifndef lib_union_find
#define lib_union_find

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct Union_Find {
private:
	vector<int> parent;
	vector<int> num;
	int treenum;

public:
	Union_Find(int n) : parent(n),num(n,1) {
		treenum=n;
		for(int i=0; i<n; i++) {
			parent[i]=i;
		}
	}

	int root(int x) {
		assert(x < n);
		if(parent[x]==x) return x;
		return parent[x]=root(parent[x]);
	}

	int size(int x) {
		return num[root(x)];
	}

	void merge(int x, int y) {
		int xrt=root(x);
		int yrt=root(y);
		if(xrt==yrt) return;
		parent[xrt]=yrt;
		num[yrt]+=num[xrt];
		treenum--;
	}

	bool same(int x, int y) {
		return root(x)==root(y);
	}

	int tnum() {
		return treenum;
	}
};


#endif // lib_union_find
