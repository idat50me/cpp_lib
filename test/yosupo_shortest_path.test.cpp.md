---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/dijkstra.cpp
    title: graph/dijkstra.cpp
  - icon: ':question:'
    path: structure/2d_array.cpp
    title: "2D-Array( $2$ \u6B21\u5143\u914D\u5217)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/shortest_path
    links:
    - https://judge.yosupo.jp/problem/shortest_path
  bundledCode: "#line 1 \"test/yosupo_shortest_path.test.cpp\"\n#define PROBLEM \"\
    https://judge.yosupo.jp/problem/shortest_path\"\r\n\r\n#ifndef call_include\r\n\
    #define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\n#line 2 \"graph/dijkstra.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"\
    structure/2d_array.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\n\
    #include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename\
    \ T> struct v2d {\r\nprivate:\r\n\tvector<vector<T>> m;\r\n\r\npublic:\r\n\tv2d()\
    \ {}\r\n\tv2d(int h, int w) : m(h, vector<T>(w)) {}\r\n\tv2d(int h, int w, const\
    \ T &init) : m(h, vector<T>(w, init)) {}\r\n\tv2d(const initializer_list<initializer_list<T>>\
    \ m_init) : m(m_init.begin(), m_init.end()) {}\r\n\r\n\tvoid assign(int h, int\
    \ w) {\r\n\t\tm.assign(h, vector<T>(w));\r\n\t}\r\n\tvoid assign(int h, int w,\
    \ const T init) {\r\n\t\tm.assign(h, vector<T>(w, init));\r\n\t}\r\n\r\n\tinline\
    \ int size() const {\r\n\t\treturn m.size();\r\n\t}\r\n\r\n\tvoid in() {\r\n\t\
    \tfor(vector<T> &v : m)\r\n\t\t\tfor(T &val : v) cin >> val;\r\n\t}\r\n\tvoid\
    \ in(int h, int w) {\r\n\t\tm.resize(h, vector<T>(w));\r\n\t\tin();\r\n\t}\r\n\
    \r\n\tvoid out() {\r\n\t\tint h = m.size();\r\n\t\tfor(vector<T> &v : m) {\r\n\
    \t\t\tint sz = v.size();\r\n\t\t\tfor(int j = 0; j < sz; j++) {\r\n\t\t\t\tcout\
    \ << v[j] << (j == sz - 1 ? '\\n' : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\t\tcout << flush;\r\
    \n\t}\r\n\r\n\tinline vector<T> &operator[](int idx) {\r\n\t\tassert(0 <= idx\
    \ && idx < m.size());\r\n\t\treturn m[idx];\r\n\t}\r\n\r\n\tbool rangeout(int\
    \ x, int y) {\r\n\t\tif(x < 0 || y < 0 || x >= size() || y >= m[x].size()) return\
    \ true;\r\n\t\treturn false;\r\n\t}\r\n};\r\n#line 10 \"graph/dijkstra.cpp\"\n\
    \r\ntemplate<typename T> struct dijkstra {\r\n\tusing P = pair<long long, int>;\r\
    \n\tconst long long inf = (1LL << 62) - 1;\r\n\r\nprivate:\r\n\tint n;\r\n\tvector<long\
    \ long> dist;\r\n\tvector<int> prev;\r\n\r\npublic:\r\n\tdijkstra(v2d<int> &path,\
    \ v2d<T> &cost, int s) : n(path.size()), dist(n, inf), prev(n, -1) {\r\n\t\tdist[s]\
    \ = 0;\r\n\t\tpriority_queue<P, vector<P>, greater<P>> q;\r\n\t\tq.emplace(0,\
    \ s);\r\n\t\twhile(not q.empty()) {\r\n\t\t\tauto [d, x] = q.top();\r\n\t\t\t\
    q.pop();\r\n\t\t\tif(d > dist[x]) continue;\r\n\t\t\tfor(int i = 0; i < path[x].size();\
    \ i++) {\r\n\t\t\t\tint nx = path[x][i];\r\n\t\t\t\tlong long nd = d + cost[x][i];\r\
    \n\t\t\t\tif(nd >= dist[nx]) continue;\r\n\t\t\t\tdist[nx] = nd;\r\n\t\t\t\tprev[nx]\
    \ = x;\r\n\t\t\t\tq.emplace(nd, nx);\r\n\t\t\t}\r\n\t\t}\r\n\t}\r\n\r\n\tinline\
    \ long long operator[](int idx) {\r\n\t\treturn dist[idx];\r\n\t}\r\n\r\n\tvector<int>\
    \ get_path(int t) {\r\n\t\tvector<int> ans;\r\n\t\tfor(int x = t; x >= 0; x =\
    \ prev[x]) ans.emplace_back(x);\r\n\t\treturn vector<int>(ans.rbegin(), ans.rend());\r\
    \n\t}\r\n};\r\n#line 10 \"test/yosupo_shortest_path.test.cpp\"\n\r\nint main()\
    \ {\r\n\tint N, M, s, t;\r\n\tcin >> N >> M >> s >> t;\r\n\tv2d<int> path(N, 0),\
    \ cost(N, 0);\r\n\tfor(int i = 0; i < M; i++) {\r\n\t\tint a, b, c;\r\n\t\tcin\
    \ >> a >> b >> c;\r\n\t\tpath[a].push_back(b);\r\n\t\tcost[a].push_back(c);\r\n\
    \t}\r\n\r\n\tdijkstra dijk(path, cost, s);\r\n\tauto ans = dijk.get_path(t);\r\
    \n\r\n\tif(ans.size() == 1) {\r\n\t\tcout << -1 << endl;\r\n\t\treturn 0;\r\n\t\
    }\r\n\r\n\tcout << dijk[t] << \" \" << ans.size() - 1 << endl;\r\n\tfor(int i\
    \ = 0; i < ans.size() - 1; i++) {\r\n\t\tcout << ans[i] << \" \" << ans[i + 1]\
    \ << endl;\r\n\t}\r\n}\r\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/shortest_path\"\r\n\r\n\
    #ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing\
    \ namespace std;\r\n#endif\r\n\r\n#include \"graph/dijkstra.cpp\"\r\n\r\nint main()\
    \ {\r\n\tint N, M, s, t;\r\n\tcin >> N >> M >> s >> t;\r\n\tv2d<int> path(N, 0),\
    \ cost(N, 0);\r\n\tfor(int i = 0; i < M; i++) {\r\n\t\tint a, b, c;\r\n\t\tcin\
    \ >> a >> b >> c;\r\n\t\tpath[a].push_back(b);\r\n\t\tcost[a].push_back(c);\r\n\
    \t}\r\n\r\n\tdijkstra dijk(path, cost, s);\r\n\tauto ans = dijk.get_path(t);\r\
    \n\r\n\tif(ans.size() == 1) {\r\n\t\tcout << -1 << endl;\r\n\t\treturn 0;\r\n\t\
    }\r\n\r\n\tcout << dijk[t] << \" \" << ans.size() - 1 << endl;\r\n\tfor(int i\
    \ = 0; i < ans.size() - 1; i++) {\r\n\t\tcout << ans[i] << \" \" << ans[i + 1]\
    \ << endl;\r\n\t}\r\n}\r\n"
  dependsOn:
  - graph/dijkstra.cpp
  - structure/2d_array.cpp
  isVerificationFile: true
  path: test/yosupo_shortest_path.test.cpp
  requiredBy: []
  timestamp: '2021-05-17 18:15:39+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo_shortest_path.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_shortest_path.test.cpp
- /verify/test/yosupo_shortest_path.test.cpp.html
title: test/yosupo_shortest_path.test.cpp
---
