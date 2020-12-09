---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/mincostflow.cpp
    title: graph/mincostflow.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_B
  bundledCode: "#line 1 \"test/aoj_GRL_6_B.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_B\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"graph/mincostflow.cpp\"\n\r\n\
    #ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing\
    \ namespace std;\r\n#endif\r\n\r\nstruct mincostflow {\r\nprivate:\r\n\tstruct\
    \ edge {\r\n\t\tint next;\r\n\t\tint rev;\r\n\t\tlong long cap;\r\n\t\tlong long\
    \ cost;\r\n\t\t\r\n\t\tedge(int next, int rev, long long cap, long long cost)\
    \ : next(next), rev(rev), cap(cap), cost(cost) {}\r\n\t};\r\n\r\npublic:\r\n\t\
    const long long inf = (1LL<<62)-1;\r\n\r\nprivate:\r\n\tconst int vnum;\r\n\t\
    vector<vector<edge>> G;\r\n\tvector<long long> pot;\r\n\tvector<int> pv, pe;\r\
    \n\r\npublic:\r\n\tmincostflow(int N) : vnum(N), G(N), pot(N), pv(N), pe(N) {}\r\
    \n\r\n\tvoid add(int from, int to, long long cap, long long cost) {\r\n\t\tG[from].push_back(edge(to,\
    \ G[to].size(), cap, cost));\r\n\t\tG[to].push_back(edge(from, G[from].size()-1,\
    \ 0, -cost));\r\n\t}\r\n\r\n//private:\r\n\tlong long bellman_ford(int s, int\
    \ t, int &f) {\r\n\t\tpot.assign(vnum, inf);\r\n\t\tpv.assign(vnum, -1);\r\n\t\
    \tpe.assign(vnum, -1);\r\n\t\tpot[s] = 0;\r\n\t\tfor(int i=0; i<vnum; i++) {\r\
    \n\t\t\tfor(int j=0; j<vnum; j++) {\r\n\t\t\t\tif(pot[j] == inf) continue;\r\n\
    \t\t\t\tfor(int k=0; k<G[j].size(); k++) {\r\n\t\t\t\t\tconst edge &ed = G[j][k];\r\
    \n\t\t\t\t\tif(ed.cap>0 && pot[ed.next]>pot[j]+ed.cost) {\r\n\t\t\t\t\t\tif(i\
    \ == vnum-1) return -inf;\r\n\t\t\t\t\t\tpot[ed.next] = pot[j]+ed.cost;\r\n\t\t\
    \t\t\t\tpv[ed.next] = j;\r\n\t\t\t\t\t\tpe[ed.next] = k;\r\n\t\t\t\t\t}\r\n\t\t\
    \t\t}\r\n\t\t\t}\r\n\t\t}\r\n\r\n\t\tint add_f = f;\r\n\t\tfor(int v=t; v!=s;\
    \ v=pv[v]) add_f = min((long long)add_f, G[pv[v]][pe[v]].cap);\r\n\t\tf -= add_f;\r\
    \n\t\tfor(int v=t; v!=s; v=pv[v]) {\r\n\t\t\tedge &ed = G[pv[v]][pe[v]];\r\n\t\
    \t\ted.cap -= add_f;\r\n\t\t\tG[v][ed.rev].cap += add_f;\r\n\t\t}\r\n\t\treturn\
    \ pot[t]*add_f;\r\n\t}\r\n\r\n\tlong long dijkstra(int s, int t) {\r\n\t\tlong\
    \ long ans = 0;\r\n\t\tpriority_queue<pair<long long,int>, vector<pair<long long,int>>,\
    \ greater<pair<long long,int>>> q;\r\n\t\tvector<long long> dist(vnum, inf);\r\
    \n\t\tpv.assign(vnum, -1);\r\n\t\tpe.assign(vnum, -1);\r\n\t\tq.push(make_pair(0LL,s));\r\
    \n\t\tdist[s] = 0;\r\n\r\n\t\twhile(!q.empty()) {\r\n\t\t\tlong long d = q.top().first,\
    \ v = q.top().second;\r\n\t\t\tq.pop();\r\n\t\t\tif(dist[v] < d) continue;\r\n\
    \t\t\tfor(int i=0; i<G[v].size(); i++) {\r\n\t\t\t\tedge &ed = G[v][i];\r\n\t\t\
    \t\tlong long nd = d+ed.cost+pot[v]-pot[ed.next];\r\n\t\t\t\tif(ed.cap>0 && dist[ed.next]>nd)\
    \ {\r\n\t\t\t\t\tdist[ed.next] = nd;\r\n\t\t\t\t\tpv[ed.next] = v;\r\n\t\t\t\t\
    \tpe[ed.next] = i;\r\n\t\t\t\t\tq.push(make_pair(nd,ed.next));\r\n\t\t\t\t}\r\n\
    \t\t\t}\r\n\t\t}\r\n\r\n\t\tif(dist[t] == inf) return inf;\r\n\r\n\t\tans = dist[t]+pot[t];\r\
    \n\t\tfor(int v=0; v<vnum; v++) {\r\n\t\t\tif(dist[v] == inf) continue;\r\n\t\t\
    \tpot[v] += dist[v];\r\n\t\t}\r\n\t\treturn ans;\r\n\t}\r\n\r\npublic:\r\n\t//\
    \ -inf: \u8CA0\u9589\u8DEF\u691C\u51FA  inf: \u672A\u5230\u9054\r\n\tlong long\
    \ solve(int s, int t, int f) {\r\n\t\tlong long res = bellman_ford(s, t, f);\r\
    \n\t\tif(abs(res) == inf) return res;\r\n\r\n\t\twhile(f > 0) {\r\n\t\t\tlong\
    \ long restmp = dijkstra(s, t);\r\n\t\t\tint add_f = f;\r\n\t\t\tif(restmp ==\
    \ inf) return inf;\r\n\t\t\tfor(int v=t; v!=s; v=pv[v]) add_f = min((long long)add_f,\
    \ G[pv[v]][pe[v]].cap);\r\n\t\t\tf -= add_f;\r\n\t\t\tres += restmp*add_f;\r\n\
    \t\t\tfor(int v=t; v!=s; v=pv[v]) {\r\n\t\t\t\tedge &ed = G[pv[v]][pe[v]];\r\n\
    \t\t\t\ted.cap -= add_f;\r\n\t\t\t\tG[v][ed.rev].cap += add_f;\r\n\t\t\t}\r\n\t\
    \t}\r\n\t\treturn res;\r\n\t}\r\n};\r\n#line 10 \"test/aoj_GRL_6_B.test.cpp\"\n\
    \r\nint main() {\r\n\tint V,E,F; cin>>V>>E>>F;\r\n\tmincostflow mcf(V);\r\n\t\
    for(int i=0; i<E; i++) {\r\n\t\tint u,v,c,d; cin>>u>>v>>c>>d;\r\n\t\tmcf.add(u,v,c,d);\r\
    \n\t}\r\n\r\n\tlong long ans = mcf.solve(0,V-1,F);\r\n\tassert(ans!=-mcf.inf);\r\
    \n\tcout<<(ans==mcf.inf?-1:ans)<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/5/GRL/6/GRL_6_B\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"graph/mincostflow.cpp\"\r\n\
    \r\nint main() {\r\n\tint V,E,F; cin>>V>>E>>F;\r\n\tmincostflow mcf(V);\r\n\t\
    for(int i=0; i<E; i++) {\r\n\t\tint u,v,c,d; cin>>u>>v>>c>>d;\r\n\t\tmcf.add(u,v,c,d);\r\
    \n\t}\r\n\r\n\tlong long ans = mcf.solve(0,V-1,F);\r\n\tassert(ans!=-mcf.inf);\r\
    \n\tcout<<(ans==mcf.inf?-1:ans)<<endl;\r\n}\r\n"
  dependsOn:
  - graph/mincostflow.cpp
  isVerificationFile: true
  path: test/aoj_GRL_6_B.test.cpp
  requiredBy: []
  timestamp: '2020-12-10 00:54:37+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_GRL_6_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_GRL_6_B.test.cpp
- /verify/test/aoj_GRL_6_B.test.cpp.html
title: test/aoj_GRL_6_B.test.cpp
---
