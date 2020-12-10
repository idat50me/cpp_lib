---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_GRL_6_A.test.cpp
    title: test/aoj_GRL_6_A.test.cpp
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
    \tvector<vector<edge>> G;\r\n\tvector<bool> used;\r\n\r\npublic:\r\n\tmaxflow(int\
    \ N) : vnum(N), G(N), used(N) {}\r\n\r\n\tvoid add(int from, int to, long long\
    \ cap) {\r\n\t\tG[from].push_back(edge(to, G[to].size(), cap));\r\n\t\tG[to].push_back(edge(from,\
    \ G[from].size()-1, 0));\r\n\t}\r\n\r\nprivate:\r\n\tlong long dfs(int s, int\
    \ t, long long flow) {\r\n\t\tif(s == t) return flow;\r\n\t\tused[s] = true;\r\
    \n\t\tfor(edge &ed : G[s]) {\r\n\t\t\tif(!used[ed.next] && ed.cap>0) {\r\n\t\t\
    \t\tlong long captmp = dfs(ed.next, t, min(flow,ed.cap));\r\n\t\t\t\tif(captmp\
    \ > 0) {\r\n\t\t\t\t\ted.cap -= captmp;\r\n\t\t\t\t\tG[ed.next][ed.rev].cap +=\
    \ captmp;\r\n\t\t\t\t\treturn captmp;\r\n\t\t\t\t}\r\n\t\t\t}\r\n\t\t}\r\n\t\t\
    return 0LL;\r\n\t}\r\n\r\npublic:\r\n\tlong long solve(int s, int t) {\r\n\t\t\
    long long res = 0;\r\n\t\twhile(1) {\r\n\t\t\tused.assign(vnum, false);\r\n\t\t\
    \tlong long restmp = dfs(s, t, (1LL<<62)-1);\r\n\t\t\tif(restmp == 0) return res;\r\
    \n\t\t\tres += restmp;\r\n\t\t}\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nstruct maxflow {\r\n\
    private:\r\n\tstruct edge {\r\n\t\tint next;\r\n\t\tint rev;\r\n\t\tlong long\
    \ cap;\r\n\t\t\r\n\t\tedge(int next, int rev, long long cap) : next(next), rev(rev),\
    \ cap(cap) {}\r\n\t};\r\n\r\n\tconst int vnum;\r\n\tvector<vector<edge>> G;\r\n\
    \tvector<bool> used;\r\n\r\npublic:\r\n\tmaxflow(int N) : vnum(N), G(N), used(N)\
    \ {}\r\n\r\n\tvoid add(int from, int to, long long cap) {\r\n\t\tG[from].push_back(edge(to,\
    \ G[to].size(), cap));\r\n\t\tG[to].push_back(edge(from, G[from].size()-1, 0));\r\
    \n\t}\r\n\r\nprivate:\r\n\tlong long dfs(int s, int t, long long flow) {\r\n\t\
    \tif(s == t) return flow;\r\n\t\tused[s] = true;\r\n\t\tfor(edge &ed : G[s]) {\r\
    \n\t\t\tif(!used[ed.next] && ed.cap>0) {\r\n\t\t\t\tlong long captmp = dfs(ed.next,\
    \ t, min(flow,ed.cap));\r\n\t\t\t\tif(captmp > 0) {\r\n\t\t\t\t\ted.cap -= captmp;\r\
    \n\t\t\t\t\tG[ed.next][ed.rev].cap += captmp;\r\n\t\t\t\t\treturn captmp;\r\n\t\
    \t\t\t}\r\n\t\t\t}\r\n\t\t}\r\n\t\treturn 0LL;\r\n\t}\r\n\r\npublic:\r\n\tlong\
    \ long solve(int s, int t) {\r\n\t\tlong long res = 0;\r\n\t\twhile(1) {\r\n\t\
    \t\tused.assign(vnum, false);\r\n\t\t\tlong long restmp = dfs(s, t, (1LL<<62)-1);\r\
    \n\t\t\tif(restmp == 0) return res;\r\n\t\t\tres += restmp;\r\n\t\t}\r\n\t}\r\n\
    };\r\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/maxflow.cpp
  requiredBy: []
  timestamp: '2020-12-09 02:14:06+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_GRL_6_A.test.cpp
  - test/yuki_0177.test.cpp
documentation_of: graph/maxflow.cpp
layout: document
title: "maxflow(\u6700\u5927\u6D41)"
---

## なにこれ
これからかきます

## 制約


## コンストラクタ


## メンバ関数

