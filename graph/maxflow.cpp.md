---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_GRL_6_A.test.cpp
    title: test/aoj_GRL_6_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_GRL_7_A.test.cpp
    title: test/aoj_GRL_7_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0177.test.cpp
    title: test/yuki_0177.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/maxflow.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nstruct maxflow {\r\nprivate:\r\n\tstruct edge {\r\n\t\tint next;\r\n\t\t\
    int rev;\r\n\t\tlong long cap;\r\n\t\t\r\n\t\tedge(int next, int rev, long long\
    \ cap) : next(next), rev(rev), cap(cap) {}\r\n\t};\r\n\r\n\tconst int vnum;\r\n\
    \tvector<vector<edge>> G;\r\n\tvector<int> used;\r\n\tint ts;\r\n\r\npublic:\r\
    \n\tmaxflow(int V) : vnum(V), G(V), used(V,-1), ts(0) {}\r\n\r\n\tvoid add(int\
    \ from, int to, long long cap) {\r\n\t\tG[from].emplace_back(to, G[to].size(),\
    \ cap);\r\n\t\tG[to].emplace_back(from, G[from].size()-1, 0);\r\n\t}\r\n\r\nprivate:\r\
    \n\tlong long dfs(int s, int t, long long flow) {\r\n\t\tif(s == t) return flow;\r\
    \n\t\tused[s] = ts;\r\n\t\tfor(edge &ed : G[s]) {\r\n\t\t\tif(used[ed.next]!=ts\
    \ && ed.cap>0) {\r\n\t\t\t\tlong long captmp = dfs(ed.next, t, min(flow,ed.cap));\r\
    \n\t\t\t\tif(captmp > 0) {\r\n\t\t\t\t\ted.cap -= captmp;\r\n\t\t\t\t\tG[ed.next][ed.rev].cap\
    \ += captmp;\r\n\t\t\t\t\treturn captmp;\r\n\t\t\t\t}\r\n\t\t\t}\r\n\t\t}\r\n\t\
    \treturn 0LL;\r\n\t}\r\n\r\npublic:\r\n\tlong long solve(int s, int t) {\r\n\t\
    \tlong long res = 0, restmp;\r\n\t\twhile((restmp = dfs(s, t, (1LL<<62)-1)) >\
    \ 0) {\r\n\t\t\tres += restmp;\r\n\t\t\tts++;\r\n\t\t}\r\n\t\treturn res;\r\n\t\
    }\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nstruct maxflow {\r\n\
    private:\r\n\tstruct edge {\r\n\t\tint next;\r\n\t\tint rev;\r\n\t\tlong long\
    \ cap;\r\n\t\t\r\n\t\tedge(int next, int rev, long long cap) : next(next), rev(rev),\
    \ cap(cap) {}\r\n\t};\r\n\r\n\tconst int vnum;\r\n\tvector<vector<edge>> G;\r\n\
    \tvector<int> used;\r\n\tint ts;\r\n\r\npublic:\r\n\tmaxflow(int V) : vnum(V),\
    \ G(V), used(V,-1), ts(0) {}\r\n\r\n\tvoid add(int from, int to, long long cap)\
    \ {\r\n\t\tG[from].emplace_back(to, G[to].size(), cap);\r\n\t\tG[to].emplace_back(from,\
    \ G[from].size()-1, 0);\r\n\t}\r\n\r\nprivate:\r\n\tlong long dfs(int s, int t,\
    \ long long flow) {\r\n\t\tif(s == t) return flow;\r\n\t\tused[s] = ts;\r\n\t\t\
    for(edge &ed : G[s]) {\r\n\t\t\tif(used[ed.next]!=ts && ed.cap>0) {\r\n\t\t\t\t\
    long long captmp = dfs(ed.next, t, min(flow,ed.cap));\r\n\t\t\t\tif(captmp > 0)\
    \ {\r\n\t\t\t\t\ted.cap -= captmp;\r\n\t\t\t\t\tG[ed.next][ed.rev].cap += captmp;\r\
    \n\t\t\t\t\treturn captmp;\r\n\t\t\t\t}\r\n\t\t\t}\r\n\t\t}\r\n\t\treturn 0LL;\r\
    \n\t}\r\n\r\npublic:\r\n\tlong long solve(int s, int t) {\r\n\t\tlong long res\
    \ = 0, restmp;\r\n\t\twhile((restmp = dfs(s, t, (1LL<<62)-1)) > 0) {\r\n\t\t\t\
    res += restmp;\r\n\t\t\tts++;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/maxflow.cpp
  requiredBy: []
  timestamp: '2020-12-26 00:16:48+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0177.test.cpp
  - test/aoj_GRL_7_A.test.cpp
  - test/aoj_GRL_6_A.test.cpp
documentation_of: graph/maxflow.cpp
layout: document
title: "maxflow(\u6700\u5927\u6D41)"
---

## なにこれ
各辺に容量が設定される有向グラフ $G=(V,E)$ 中で，始点から終点まで流せる最大の流量を求める．

## コンストラクタ
- `maxflow(V)`：`V` 頂点 $0$ 辺のグラフを作る．$V \leq 10^8$ 程度．

## メンバ関数
- `add(from, to, cap)`：頂点 `from` から頂点 `to` へ容量 `cap` の有向辺を追加する．$0 \leq cap$
- `solve(s, t)`：頂点 `s` から頂点 `t` へ流せる最大の流量を返す．

## 計算量
$F$を最大流の流量とする．
- `maxflow(V)`：$O(V)$
- `add(from, to, cap)`：ならし $O(1)$
- `solve(s, t)`：$O(F(V+E))$
