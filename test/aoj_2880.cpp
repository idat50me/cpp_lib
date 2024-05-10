// competitive-verifier: PROBLEM https://onlinejudge.u-aizu.ac.jp/problems/2880

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "structure/segment_set.cpp"

struct task {
	int mode;
	int day;
	int a, b;
	int id;

	task(int mode, int day, int a, int b, int id = -1) : mode(mode), day(day), a(a), b(b), id(id){};
};

int main() {
	int N, M, Q;
	vector<task> v;

	cin >> N >> M >> Q;

	for(int i = 0; i < M; i++) {
		int d, a, b;
		cin >> d >> a >> b;
		v.emplace_back(0, d, 2 * a, 2 * b);
	}
	for(int i = 0; i < Q; i++) {
		int e, s, t;
		cin >> e >> s >> t;
		v.emplace_back(1, e, 2 * s, 2 * t, i);
	}

	sort(v.begin(), v.end(),
		 [](task &l, task &r) { return l.day == r.day ? l.mode > r.mode : l.day < r.day; });

	SegmentSet<int> s;
	vector<string> ans(Q);

	for(int i = 0; i < v.size(); i++) {
		if(v[i].mode == 0) {
			s.insert(v[i].a, v[i].b);
		}
		else {
			int h = v[i].a;
			auto seg = s.get_seg(v[i].a);
			if(seg.first <= seg.second) h = max(h, seg.second);
			ans[v[i].id] = (v[i].b <= h ? "Yes" : "No");
		}
	}

	for(string &st : ans) cout << st << endl;
}
