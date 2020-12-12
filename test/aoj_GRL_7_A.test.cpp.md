---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/maxflow.cpp
    title: "maxflow(\u6700\u5927\u6D41)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/7/GRL_7_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/7/GRL_7_A
  bundledCode: "#line 1 \"test/aoj_GRL_7_A.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/7/GRL_7_A\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"graph/maxflow.cpp\"\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\nstruct maxflow {\r\nprivate:\r\n\tstruct edge {\r\n\t\t\
    int next;\r\n\t\tint rev;\r\n\t\tlong long cap;\r\n\t\t\r\n\t\tedge(int next,\
    \ int rev, long long cap) : next(next), rev(rev), cap(cap) {}\r\n\t};\r\n\r\n\t\
    const int vnum;\r\n\tvector<vector<edge>> G;\r\n\tvector<int> used;\r\n\tint ts;\r\
    \n\r\npublic:\r\n\tmaxflow(int V) : vnum(V), G(V), used(V,-1), ts(0) {}\r\n\r\n\
    \tvoid add(int from, int to, long long cap) {\r\n\t\tG[from].push_back(edge(to,\
    \ G[to].size(), cap));\r\n\t\tG[to].push_back(edge(from, G[from].size()-1, 0));\r\
    \n\t}\r\n\r\nprivate:\r\n\tlong long dfs(int s, int t, long long flow) {\r\n\t\
    \tif(s == t) return flow;\r\n\t\tused[s] = ts;\r\n\t\tfor(edge &ed : G[s]) {\r\
    \n\t\t\tif(used[ed.next]!=ts && ed.cap>0) {\r\n\t\t\t\tlong long captmp = dfs(ed.next,\
    \ t, min(flow,ed.cap));\r\n\t\t\t\tif(captmp > 0) {\r\n\t\t\t\t\ted.cap -= captmp;\r\
    \n\t\t\t\t\tG[ed.next][ed.rev].cap += captmp;\r\n\t\t\t\t\treturn captmp;\r\n\t\
    \t\t\t}\r\n\t\t\t}\r\n\t\t}\r\n\t\treturn 0LL;\r\n\t}\r\n\r\npublic:\r\n\tlong\
    \ long solve(int s, int t) {\r\n\t\tlong long res = 0, restmp;\r\n\t\twhile((restmp\
    \ = dfs(s, t, (1LL<<62)-1)) > 0) {\r\n\t\t\tres += restmp;\r\n\t\t\tts++;\r\n\t\
    \t}\r\n\t\treturn res;\r\n\t}\r\n};\r\n#line 10 \"test/aoj_GRL_7_A.test.cpp\"\n\
    \r\nint main() {\r\n\tint X,Y,E; cin>>X>>Y>>E;\r\n\tint s=X+Y, t=s+1;\r\n\tmaxflow\
    \ mf(X+Y+2);\r\n\r\n\tfor(int i=0; i<E; i++) {\r\n\t\tint x,y; cin>>x>>y;\r\n\t\
    \tmf.add(x,X+y,1);\r\n\t}\r\n\tfor(int i=0; i<X; i++) mf.add(s,i,1);\r\n\tfor(int\
    \ i=0; i<Y; i++) mf.add(X+i,t,1);\r\n\r\n\tcout<<mf.solve(s,t)<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/7/GRL_7_A\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"graph/maxflow.cpp\"\r\n\r\n\
    int main() {\r\n\tint X,Y,E; cin>>X>>Y>>E;\r\n\tint s=X+Y, t=s+1;\r\n\tmaxflow\
    \ mf(X+Y+2);\r\n\r\n\tfor(int i=0; i<E; i++) {\r\n\t\tint x,y; cin>>x>>y;\r\n\t\
    \tmf.add(x,X+y,1);\r\n\t}\r\n\tfor(int i=0; i<X; i++) mf.add(s,i,1);\r\n\tfor(int\
    \ i=0; i<Y; i++) mf.add(X+i,t,1);\r\n\r\n\tcout<<mf.solve(s,t)<<endl;\r\n}\r\n"
  dependsOn:
  - graph/maxflow.cpp
  isVerificationFile: true
  path: test/aoj_GRL_7_A.test.cpp
  requiredBy: []
  timestamp: '2020-12-13 00:37:26+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_GRL_7_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_GRL_7_A.test.cpp
- /verify/test/aoj_GRL_7_A.test.cpp.html
title: test/aoj_GRL_7_A.test.cpp
---
