---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_GRL_6_A.test.cpp
    title: test/aoj_GRL_6_A.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/ford_fulkerson.cpp\"\n\r\n#ifndef call_include\r\n\
    #define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nstruct Ford_Fulkerson {\r\nprivate:\r\n\tstruct edge {\r\n\t\tint next;\r\
    \n\t\tint rev;\r\n\t\tlong long cap;\r\n\t\tlong long cost;\r\n\t\t\r\n\t\tedge(int\
    \ next, int rev, long long cap) : next(next), rev(rev), cap(cap), cost(0) {}\r\
    \n\t\tedge(int next, int rev, long long cap, long long cost) : next(next), rev(rev),\
    \ cap(cap), cost(cost) {}\r\n\t};\r\n\r\n\tvector<vector<edge>> G;\r\n\tvector<bool>\
    \ used;\r\n\r\npublic:\r\n\tFord_Fulkerson(int N) : G(N),used(N) {}\r\n\r\n\t\
    void add(int from, int to, long long cap) {\r\n\t\tG[from].push_back(edge(to,\
    \ G[to].size(), cap));\r\n\t\tG[to].push_back(edge(from, G[from].size()-1, 0));\r\
    \n\t}\r\n\tvoid add(int from, int to, long long cap, long long cost) {\r\n\t\t\
    G[from].push_back(edge(to, G[to].size(), cap, cost));\r\n\t\tG[to].push_back(edge(from,\
    \ G[from].size()-1, 0, -cost));\r\n\t}\r\n\r\n\tlong long f_dfs(int s, int t,\
    \ long long flow) {\r\n\t\tif(s == t) return flow;\r\n\t\tused[s] = true;\r\n\t\
    \tfor(edge &ed : G[s]) {\r\n\t\t\tif(!used[ed.next] && ed.cap>0) {\r\n\t\t\t\t\
    long long captmp = f_dfs(ed.next, t, min(flow,ed.cap));\r\n\t\t\t\tif(captmp >\
    \ 0) {\r\n\t\t\t\t\ted.cap -= captmp;\r\n\t\t\t\t\tG[ed.next][ed.rev].cap += captmp;\r\
    \n\t\t\t\t\treturn captmp;\r\n\t\t\t\t}\r\n\t\t\t}\r\n\t\t}\r\n\t\treturn 0LL;\r\
    \n\t}\r\n\r\n\t// \u6700\u5927\u6D41\u554F\u984C\r\n\tlong long max_flow(int s,\
    \ int t) {\r\n\t\tlong long res = 0;\r\n\t\twhile(1) { // \u6700\u5927\u306B\u306A\
    \u308B\u307E\u3067\u7E70\u308A\u8FD4\u3057\r\n\t\t\tused.assign(used.size(), false);\r\
    \n\t\t\tlong long restmp = f_dfs(s, t, (1LL<<62)-1);\r\n\t\t\tif(restmp == 0)\
    \ return res;\r\n\t\t\tres += restmp;\r\n\t\t}\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nstruct Ford_Fulkerson\
    \ {\r\nprivate:\r\n\tstruct edge {\r\n\t\tint next;\r\n\t\tint rev;\r\n\t\tlong\
    \ long cap;\r\n\t\tlong long cost;\r\n\t\t\r\n\t\tedge(int next, int rev, long\
    \ long cap) : next(next), rev(rev), cap(cap), cost(0) {}\r\n\t\tedge(int next,\
    \ int rev, long long cap, long long cost) : next(next), rev(rev), cap(cap), cost(cost)\
    \ {}\r\n\t};\r\n\r\n\tvector<vector<edge>> G;\r\n\tvector<bool> used;\r\n\r\n\
    public:\r\n\tFord_Fulkerson(int N) : G(N),used(N) {}\r\n\r\n\tvoid add(int from,\
    \ int to, long long cap) {\r\n\t\tG[from].push_back(edge(to, G[to].size(), cap));\r\
    \n\t\tG[to].push_back(edge(from, G[from].size()-1, 0));\r\n\t}\r\n\tvoid add(int\
    \ from, int to, long long cap, long long cost) {\r\n\t\tG[from].push_back(edge(to,\
    \ G[to].size(), cap, cost));\r\n\t\tG[to].push_back(edge(from, G[from].size()-1,\
    \ 0, -cost));\r\n\t}\r\n\r\n\tlong long f_dfs(int s, int t, long long flow) {\r\
    \n\t\tif(s == t) return flow;\r\n\t\tused[s] = true;\r\n\t\tfor(edge &ed : G[s])\
    \ {\r\n\t\t\tif(!used[ed.next] && ed.cap>0) {\r\n\t\t\t\tlong long captmp = f_dfs(ed.next,\
    \ t, min(flow,ed.cap));\r\n\t\t\t\tif(captmp > 0) {\r\n\t\t\t\t\ted.cap -= captmp;\r\
    \n\t\t\t\t\tG[ed.next][ed.rev].cap += captmp;\r\n\t\t\t\t\treturn captmp;\r\n\t\
    \t\t\t}\r\n\t\t\t}\r\n\t\t}\r\n\t\treturn 0LL;\r\n\t}\r\n\r\n\t// \u6700\u5927\
    \u6D41\u554F\u984C\r\n\tlong long max_flow(int s, int t) {\r\n\t\tlong long res\
    \ = 0;\r\n\t\twhile(1) { // \u6700\u5927\u306B\u306A\u308B\u307E\u3067\u7E70\u308A\
    \u8FD4\u3057\r\n\t\t\tused.assign(used.size(), false);\r\n\t\t\tlong long restmp\
    \ = f_dfs(s, t, (1LL<<62)-1);\r\n\t\t\tif(restmp == 0) return res;\r\n\t\t\tres\
    \ += restmp;\r\n\t\t}\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/ford_fulkerson.cpp
  requiredBy: []
  timestamp: '2020-12-02 17:10:53+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_GRL_6_A.test.cpp
documentation_of: graph/ford_fulkerson.cpp
layout: document
redirect_from:
- /library/graph/ford_fulkerson.cpp
- /library/graph/ford_fulkerson.cpp.html
title: graph/ford_fulkerson.cpp
---
