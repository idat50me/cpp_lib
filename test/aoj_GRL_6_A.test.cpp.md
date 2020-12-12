---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: graph/maxflow.cpp
    title: "maxflow(\u6700\u5927\u6D41)"
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
    \t}\r\n\t\treturn res;\r\n\t}\r\n};\r\n#line 10 \"test/aoj_GRL_6_A.test.cpp\"\n\
    \r\nint main() {\r\n\tint V,E; cin>>V>>E;\r\n\tmaxflow mf(V);\r\n\tfor(int i=0;\
    \ i<E; i++) {\r\n\t\tint u,v,c; cin>>u>>v>>c;\r\n\t\tmf.add(u,v,c);\r\n\t}\r\n\
    \r\n\tcout<<mf.solve(0,V-1)<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_A\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"graph/maxflow.cpp\"\r\n\r\n\
    int main() {\r\n\tint V,E; cin>>V>>E;\r\n\tmaxflow mf(V);\r\n\tfor(int i=0; i<E;\
    \ i++) {\r\n\t\tint u,v,c; cin>>u>>v>>c;\r\n\t\tmf.add(u,v,c);\r\n\t}\r\n\r\n\t\
    cout<<mf.solve(0,V-1)<<endl;\r\n}\r\n"
  dependsOn:
  - graph/maxflow.cpp
  isVerificationFile: true
  path: test/aoj_GRL_6_A.test.cpp
  requiredBy: []
  timestamp: '2020-12-11 02:19:58+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_GRL_6_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_GRL_6_A.test.cpp
- /verify/test/aoj_GRL_6_A.test.cpp.html
title: test/aoj_GRL_6_A.test.cpp
---
