---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_GRL_6_B.test.cpp
    title: test/aoj_GRL_6_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_1301.test.cpp
    title: test/yuki_1301.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/mincostflow.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nstruct mincostflow {\r\nprivate:\r\n\tstruct edge {\r\n\t\tint next;\r\n\
    \t\tint rev;\r\n\t\tlong long cap;\r\n\t\tlong long cost;\r\n\t\tbool isrev;\r\
    \n\t\t\r\n\t\tedge(int next, int rev, long long cap, long long cost, bool isrev)\
    \ : next(next), rev(rev), cap(cap), cost(cost), isrev(isrev) {}\r\n\t};\r\n\r\n\
    \tstruct stat_e {\r\n\t\tint from, to;\r\n\t\tlong long used_cap;\r\n\r\n\t\t\
    stat_e(int from, int to, long long cap) : from(from), to(to), used_cap(cap) {}\r\
    \n\t};\r\n\r\npublic:\r\n\tconst long long inf = (1LL<<62)-1;\r\n\r\nprivate:\r\
    \n\tconst int vnum;\r\n\tvector<vector<edge>> G;\r\n\tvector<long long> pot;\r\
    \n\tvector<int> pv, pe;\r\n\r\npublic:\r\n\tmincostflow(int V) : vnum(V), G(V),\
    \ pot(V,0), pv(V), pe(V) {}\r\n\r\n\tvoid add(int from, int to, long long cap,\
    \ long long cost) {\r\n\t\tassert(cost >= 0);\r\n\t\tG[from].emplace_back(to,\
    \ G[to].size(), cap, cost, false);\r\n\t\tG[to].emplace_back(from, G[from].size()-1,\
    \ 0, -cost, true);\r\n\t}\r\n\r\nprivate:\r\n\tlong long dijkstra(int s, int t)\
    \ {\r\n\t\tlong long ans = 0;\r\n\t\tpriority_queue<pair<long long,int>, vector<pair<long\
    \ long,int>>, greater<pair<long long,int>>> q;\r\n\t\tvector<long long> dist(vnum,\
    \ inf);\r\n\t\tpv.assign(vnum, -1);\r\n\t\tpe.assign(vnum, -1);\r\n\t\tq.emplace(0LL,s);\r\
    \n\t\tdist[s] = 0;\r\n\r\n\t\twhile(!q.empty()) {\r\n\t\t\tlong long d = q.top().first,\
    \ v = q.top().second;\r\n\t\t\tq.pop();\r\n\t\t\tif(dist[v] < d) continue;\r\n\
    \t\t\tfor(int i=0; i<G[v].size(); i++) {\r\n\t\t\t\tedge &ed = G[v][i];\r\n\t\t\
    \t\tlong long nd = d+ed.cost+pot[v]-pot[ed.next];\r\n\t\t\t\tif(ed.cap>0 && dist[ed.next]>nd)\
    \ {\r\n\t\t\t\t\tdist[ed.next] = nd;\r\n\t\t\t\t\tpv[ed.next] = v;\r\n\t\t\t\t\
    \tpe[ed.next] = i;\r\n\t\t\t\t\tq.emplace(nd,ed.next);\r\n\t\t\t\t}\r\n\t\t\t\
    }\r\n\t\t}\r\n\r\n\t\tif(dist[t] == inf) return inf;\r\n\r\n\t\tans = dist[t]+pot[t];\r\
    \n\t\tfor(int v=0; v<vnum; v++) {\r\n\t\t\tif(dist[v] == inf) pot[v] = inf;\r\n\
    \t\t\telse pot[v] += dist[v];\r\n\t\t}\r\n\t\treturn ans;\r\n\t}\r\n\r\npublic:\r\
    \n\t// inf: \u672A\u5230\u9054\r\n\tlong long solve(int s, int t, int f) {\r\n\
    \t\tlong long res = 0;\r\n\r\n\t\twhile(f > 0) {\r\n\t\t\tlong long restmp = dijkstra(s,\
    \ t);\r\n\t\t\tint add_f = f;\r\n\t\t\tif(restmp == inf) return inf;\r\n\t\t\t\
    for(int v=t; v!=s; v=pv[v]) add_f = min((long long)add_f, G[pv[v]][pe[v]].cap);\r\
    \n\t\t\tf -= add_f;\r\n\t\t\tres += restmp*add_f;\r\n\t\t\tfor(int v=t; v!=s;\
    \ v=pv[v]) {\r\n\t\t\t\tedge &ed = G[pv[v]][pe[v]];\r\n\t\t\t\ted.cap -= add_f;\r\
    \n\t\t\t\tG[v][ed.rev].cap += add_f;\r\n\t\t\t}\r\n\t\t}\r\n\t\treturn res;\r\n\
    \t}\r\n\r\n\tvector<stat_e> stat() {\r\n\t\tvector<stat_e> res;\r\n\t\tfor(int\
    \ i=0; i<vnum; i++) for(const edge &ed: G[i]) {\r\n\t\t\tif(!ed.isrev) res.emplace_back(i,\
    \ ed.next, G[ed.next][ed.rev].cap);\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n};\r\
    \n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nstruct mincostflow\
    \ {\r\nprivate:\r\n\tstruct edge {\r\n\t\tint next;\r\n\t\tint rev;\r\n\t\tlong\
    \ long cap;\r\n\t\tlong long cost;\r\n\t\tbool isrev;\r\n\t\t\r\n\t\tedge(int\
    \ next, int rev, long long cap, long long cost, bool isrev) : next(next), rev(rev),\
    \ cap(cap), cost(cost), isrev(isrev) {}\r\n\t};\r\n\r\n\tstruct stat_e {\r\n\t\
    \tint from, to;\r\n\t\tlong long used_cap;\r\n\r\n\t\tstat_e(int from, int to,\
    \ long long cap) : from(from), to(to), used_cap(cap) {}\r\n\t};\r\n\r\npublic:\r\
    \n\tconst long long inf = (1LL<<62)-1;\r\n\r\nprivate:\r\n\tconst int vnum;\r\n\
    \tvector<vector<edge>> G;\r\n\tvector<long long> pot;\r\n\tvector<int> pv, pe;\r\
    \n\r\npublic:\r\n\tmincostflow(int V) : vnum(V), G(V), pot(V,0), pv(V), pe(V)\
    \ {}\r\n\r\n\tvoid add(int from, int to, long long cap, long long cost) {\r\n\t\
    \tassert(cost >= 0);\r\n\t\tG[from].emplace_back(to, G[to].size(), cap, cost,\
    \ false);\r\n\t\tG[to].emplace_back(from, G[from].size()-1, 0, -cost, true);\r\
    \n\t}\r\n\r\nprivate:\r\n\tlong long dijkstra(int s, int t) {\r\n\t\tlong long\
    \ ans = 0;\r\n\t\tpriority_queue<pair<long long,int>, vector<pair<long long,int>>,\
    \ greater<pair<long long,int>>> q;\r\n\t\tvector<long long> dist(vnum, inf);\r\
    \n\t\tpv.assign(vnum, -1);\r\n\t\tpe.assign(vnum, -1);\r\n\t\tq.emplace(0LL,s);\r\
    \n\t\tdist[s] = 0;\r\n\r\n\t\twhile(!q.empty()) {\r\n\t\t\tlong long d = q.top().first,\
    \ v = q.top().second;\r\n\t\t\tq.pop();\r\n\t\t\tif(dist[v] < d) continue;\r\n\
    \t\t\tfor(int i=0; i<G[v].size(); i++) {\r\n\t\t\t\tedge &ed = G[v][i];\r\n\t\t\
    \t\tlong long nd = d+ed.cost+pot[v]-pot[ed.next];\r\n\t\t\t\tif(ed.cap>0 && dist[ed.next]>nd)\
    \ {\r\n\t\t\t\t\tdist[ed.next] = nd;\r\n\t\t\t\t\tpv[ed.next] = v;\r\n\t\t\t\t\
    \tpe[ed.next] = i;\r\n\t\t\t\t\tq.emplace(nd,ed.next);\r\n\t\t\t\t}\r\n\t\t\t\
    }\r\n\t\t}\r\n\r\n\t\tif(dist[t] == inf) return inf;\r\n\r\n\t\tans = dist[t]+pot[t];\r\
    \n\t\tfor(int v=0; v<vnum; v++) {\r\n\t\t\tif(dist[v] == inf) pot[v] = inf;\r\n\
    \t\t\telse pot[v] += dist[v];\r\n\t\t}\r\n\t\treturn ans;\r\n\t}\r\n\r\npublic:\r\
    \n\t// inf: \u672A\u5230\u9054\r\n\tlong long solve(int s, int t, int f) {\r\n\
    \t\tlong long res = 0;\r\n\r\n\t\twhile(f > 0) {\r\n\t\t\tlong long restmp = dijkstra(s,\
    \ t);\r\n\t\t\tint add_f = f;\r\n\t\t\tif(restmp == inf) return inf;\r\n\t\t\t\
    for(int v=t; v!=s; v=pv[v]) add_f = min((long long)add_f, G[pv[v]][pe[v]].cap);\r\
    \n\t\t\tf -= add_f;\r\n\t\t\tres += restmp*add_f;\r\n\t\t\tfor(int v=t; v!=s;\
    \ v=pv[v]) {\r\n\t\t\t\tedge &ed = G[pv[v]][pe[v]];\r\n\t\t\t\ted.cap -= add_f;\r\
    \n\t\t\t\tG[v][ed.rev].cap += add_f;\r\n\t\t\t}\r\n\t\t}\r\n\t\treturn res;\r\n\
    \t}\r\n\r\n\tvector<stat_e> stat() {\r\n\t\tvector<stat_e> res;\r\n\t\tfor(int\
    \ i=0; i<vnum; i++) for(const edge &ed: G[i]) {\r\n\t\t\tif(!ed.isrev) res.emplace_back(i,\
    \ ed.next, G[ed.next][ed.rev].cap);\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n};\r\
    \n"
  dependsOn: []
  isVerificationFile: false
  path: graph/mincostflow.cpp
  requiredBy: []
  timestamp: '2020-12-26 00:26:25+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_GRL_6_B.test.cpp
  - test/yuki_1301.test.cpp
documentation_of: graph/mincostflow.cpp
layout: document
title: "mincostflow(\u6700\u5C0F\u8CBB\u7528\u6D41)"
---

## なにこれ
各辺に容量と非負のコストが設定される有向グラフ $G=(V,E)$ 中で，
始点から終点まで流量 $F$ を流すのに必要な最小費用を求める．

## コンストラクタ
- `mincostflow(V)`：`V` 頂点 $0$ 辺のグラフを構築する．$V \leq 10^8$ 程度．

## メンバ関数
- `add(from, to, cap, cost)`：頂点 `from` から頂点 `to` へ容量 `cap`，コスト `cost` の有向辺を追加する．$0 \leq cap, cost$
- `solve(s, t, f)`：頂点 `s` から頂点 `t` へ流量 `f` を流すのに必要な最小費用を返す．流量 `f` を流せない場合は `mincostflow::inf` を返す．
- `stat()`：各辺の端点と現在流れている流量を格納した配列を返す．

## 計算量
- `mincostflow(V)`：$O(V)$
- `add(from, to, cap, cost)`：ならし $O(1)$
- `solve(s, t, f)`：$O(F(E+V)\log V)$
- `stat()`：$O(E)$
