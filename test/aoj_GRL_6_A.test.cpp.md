---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/ford_fulkerson.cpp
    title: graph/ford_fulkerson.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_A
  bundledCode: "#line 1 \"test/aoj_GRL_6_A.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_A\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"graph/ford_fulkerson.cpp\"\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\nstruct Ford_Fulkerson {\r\nprivate:\r\n\
    \tstruct edge_ {\r\n\t\t// \u9006\u8FBA\u306Eedge_\u304CG[next][rev]\u306B\u5B58\
    \u5728\u3059\u308B\r\n\t\tint next;\r\n\t\tint rev;\r\n\t\tlong long cap;\r\n\t\
    };\r\n\r\n\tvector<vector<edge_>> G;\r\n\tvector<bool> used;\r\n\r\npublic:\r\n\
    \tFord_Fulkerson(int N) : G(N),used(N) {}\r\n\r\n\tvoid add(int from, int to,\
    \ long long cap) {\r\n\t\tG[from].push_back((edge_){to, (int)G[to].size(), cap});\r\
    \n\t\tG[to].push_back((edge_){from, (int)G[from].size()-1, 0});\r\n\t}\r\n\r\n\
    \tlong long f_dfs(int s, int t, long long flow) {\r\n\t\tif(s == t) return flow;\r\
    \n\t\tused[s] = true;\r\n\t\tfor(edge_ &ed : G[s]) {\r\n\t\t\tif(!used[ed.next]\
    \ && ed.cap>0) {\r\n\t\t\t\tlong long captmp = f_dfs(ed.next, t, min(flow,ed.cap));\r\
    \n\t\t\t\tif(captmp > 0) {\r\n\t\t\t\t\ted.cap -= captmp;\r\n\t\t\t\t\tG[ed.next][ed.rev].cap\
    \ += captmp;\r\n\t\t\t\t\treturn captmp;\r\n\t\t\t\t}\r\n\t\t\t}\r\n\t\t}\r\n\t\
    \treturn 0LL;\r\n\t}\r\n\r\n\t// \u6700\u5927\u6D41\u554F\u984C\r\n\tlong long\
    \ max_flow(int s, int t) {\r\n\t\tlong long res = 0;\r\n\t\twhile(1) { // \u6700\
    \u5927\u306B\u306A\u308B\u307E\u3067\u7E70\u308A\u8FD4\u3057\r\n\t\t\tused.assign(used.size(),\
    \ false);\r\n\t\t\tlong long restmp = f_dfs(s, t, (1LL<<62)-1);\r\n\t\t\tif(restmp\
    \ == 0) return res;\r\n\t\t\tres += restmp;\r\n\t\t}\r\n\t}\r\n\r\n\t// \u6700\
    \u5927\u4E8C\u90E8\u30DE\u30C3\u30C1\u30F3\u30B0\u554F\u984C\u306E\u6E96\u5099\
    \uFF08StartNode\u3092N+1, GoalNode\u3092N+2\u306B\u8A2D\u5B9A\uFF09\r\n\t// \u3053\
    \u308C\u304B\u3089\u3064\u304F\u308B\r\n};\r\n#line 10 \"test/aoj_GRL_6_A.test.cpp\"\
    \n\r\nint main() {\r\n\tint V,E; cin>>V>>E;\r\n\tFord_Fulkerson ff(V);\r\n\tfor(int\
    \ i=0; i<E; i++) {\r\n\t\tint u,v,c; cin>>u>>v>>c;\r\n\t\tff.add(u,v,c);\r\n\t\
    }\r\n\r\n\tcout<<ff.max_flow(0,V-1)<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_A\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"graph/ford_fulkerson.cpp\"\r\
    \n\r\nint main() {\r\n\tint V,E; cin>>V>>E;\r\n\tFord_Fulkerson ff(V);\r\n\tfor(int\
    \ i=0; i<E; i++) {\r\n\t\tint u,v,c; cin>>u>>v>>c;\r\n\t\tff.add(u,v,c);\r\n\t\
    }\r\n\r\n\tcout<<ff.max_flow(0,V-1)<<endl;\r\n}\r\n"
  dependsOn:
  - graph/ford_fulkerson.cpp
  isVerificationFile: true
  path: test/aoj_GRL_6_A.test.cpp
  requiredBy: []
  timestamp: '2020-11-16 13:02:10+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_GRL_6_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_GRL_6_A.test.cpp
- /verify/test/aoj_GRL_6_A.test.cpp.html
title: test/aoj_GRL_6_A.test.cpp
---
