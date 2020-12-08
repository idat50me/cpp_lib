---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_GRL_6_B.test.cpp
    title: test/aoj_GRL_6_B.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/mincostflow.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nstruct mincostflow {\r\nprivate:\r\n\tstruct edge {\r\n\t\tint next;\r\n\
    \t\tint rev;\r\n\t\tlong long cap;\r\n\t\tlong long cost;\r\n\t\t\r\n\t\tedge(int\
    \ next, int rev, long long cap, long long cost) : next(next), rev(rev), cap(cap),\
    \ cost(cost) {}\r\n\t};\r\n\r\n\tconst int vnum;\r\n\tvector<vector<edge>> G;\r\
    \n\tvector<bool> used;\r\n\r\npublic:\r\n\tmincostflow(int N) : vnum(N), G(N),\
    \ used(N) {}\r\n\r\n\tvoid add(int from, int to, long long cap, long long cost)\
    \ {\r\n\t\tG[from].push_back(edge(to, G[to].size(), cap, cost));\r\n\t\tG[to].push_back(edge(from,\
    \ G[from].size()-1, 0, -cost));\r\n\t}\r\n\r\nprivate:\r\n\tlong long Bellman_Ford(int\
    \ s, int t) {\r\n\t\tconst long long inf = (1LL<<62)-1;\r\n\t\tvector<long long>\
    \ dist(vnum, inf);\r\n\t\tvector<int> pv(vnum), pe(vnum);\r\n\t\tdist[s] = 0;\r\
    \n\t\tfor(int i=0; i<vnum; i++) {\r\n\t\t\tbool upd = false;\r\n\t\t\tfor(int\
    \ j=0; j<vnum; j++) {\r\n\t\t\t\tif(dist[j] == inf) continue;\r\n\t\t\t\tfor(int\
    \ k=0; k<G[j].size(); k++) {\r\n\t\t\t\t\tedge &ed = G[j][k];\r\n\t\t\t\t\tif(ed.cap>0\
    \ && dist[ed.next]>dist[j]+ed.cost) {\r\n\t\t\t\t\t\tif(i == vnum-1) return -1;\r\
    \n\t\t\t\t\t\tupd = true;\r\n\t\t\t\t\t\tdist[ed.next] = dist[j]+ed.cost;\r\n\t\
    \t\t\t\t\tpv[ed.next] = j;\r\n\t\t\t\t\t\tpe[ed.next] = k;\r\n\t\t\t\t\t}\r\n\t\
    \t\t\t}\r\n\t\t\t}\r\n\t\t\tif(!upd) break;\r\n\t\t}\r\n\t\tfor(int v=t; v!=s;\
    \ v=pv[v]) {\r\n\t\t\tedge &ed = G[pv[v]][pe[v]];\r\n\t\t\ted.cap--;\r\n\t\t\t\
    G[ed.next][ed.rev].cap++;\r\n\t\t}\r\n\t\tif(dist[t] == inf) return -1;\r\n\t\t\
    return dist[t];\r\n\t}\r\n\r\npublic:\r\n\tlong long solve(int s, int t, int f)\
    \ {\r\n\t\tlong long res = 0;\r\n\t\tfor(int i=0; i<f; i++) {\r\n\t\t\tused.assign(vnum,\
    \ false);\r\n\t\t\tlong long restmp = Bellman_Ford(s, t);\r\n\t\t\tif(restmp <\
    \ 0) return -1;\r\n\t\t\tres += restmp;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\
    };\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nstruct mincostflow\
    \ {\r\nprivate:\r\n\tstruct edge {\r\n\t\tint next;\r\n\t\tint rev;\r\n\t\tlong\
    \ long cap;\r\n\t\tlong long cost;\r\n\t\t\r\n\t\tedge(int next, int rev, long\
    \ long cap, long long cost) : next(next), rev(rev), cap(cap), cost(cost) {}\r\n\
    \t};\r\n\r\n\tconst int vnum;\r\n\tvector<vector<edge>> G;\r\n\tvector<bool> used;\r\
    \n\r\npublic:\r\n\tmincostflow(int N) : vnum(N), G(N), used(N) {}\r\n\r\n\tvoid\
    \ add(int from, int to, long long cap, long long cost) {\r\n\t\tG[from].push_back(edge(to,\
    \ G[to].size(), cap, cost));\r\n\t\tG[to].push_back(edge(from, G[from].size()-1,\
    \ 0, -cost));\r\n\t}\r\n\r\nprivate:\r\n\tlong long Bellman_Ford(int s, int t)\
    \ {\r\n\t\tconst long long inf = (1LL<<62)-1;\r\n\t\tvector<long long> dist(vnum,\
    \ inf);\r\n\t\tvector<int> pv(vnum), pe(vnum);\r\n\t\tdist[s] = 0;\r\n\t\tfor(int\
    \ i=0; i<vnum; i++) {\r\n\t\t\tbool upd = false;\r\n\t\t\tfor(int j=0; j<vnum;\
    \ j++) {\r\n\t\t\t\tif(dist[j] == inf) continue;\r\n\t\t\t\tfor(int k=0; k<G[j].size();\
    \ k++) {\r\n\t\t\t\t\tedge &ed = G[j][k];\r\n\t\t\t\t\tif(ed.cap>0 && dist[ed.next]>dist[j]+ed.cost)\
    \ {\r\n\t\t\t\t\t\tif(i == vnum-1) return -1;\r\n\t\t\t\t\t\tupd = true;\r\n\t\
    \t\t\t\t\tdist[ed.next] = dist[j]+ed.cost;\r\n\t\t\t\t\t\tpv[ed.next] = j;\r\n\
    \t\t\t\t\t\tpe[ed.next] = k;\r\n\t\t\t\t\t}\r\n\t\t\t\t}\r\n\t\t\t}\r\n\t\t\t\
    if(!upd) break;\r\n\t\t}\r\n\t\tfor(int v=t; v!=s; v=pv[v]) {\r\n\t\t\tedge &ed\
    \ = G[pv[v]][pe[v]];\r\n\t\t\ted.cap--;\r\n\t\t\tG[ed.next][ed.rev].cap++;\r\n\
    \t\t}\r\n\t\tif(dist[t] == inf) return -1;\r\n\t\treturn dist[t];\r\n\t}\r\n\r\
    \npublic:\r\n\tlong long solve(int s, int t, int f) {\r\n\t\tlong long res = 0;\r\
    \n\t\tfor(int i=0; i<f; i++) {\r\n\t\t\tused.assign(vnum, false);\r\n\t\t\tlong\
    \ long restmp = Bellman_Ford(s, t);\r\n\t\t\tif(restmp < 0) return -1;\r\n\t\t\
    \tres += restmp;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/mincostflow.cpp
  requiredBy: []
  timestamp: '2020-12-09 03:15:25+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_GRL_6_B.test.cpp
documentation_of: graph/mincostflow.cpp
layout: document
redirect_from:
- /library/graph/mincostflow.cpp
- /library/graph/mincostflow.cpp.html
title: graph/mincostflow.cpp
---
