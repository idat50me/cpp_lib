---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: graph/topological_sort.cpp
    title: "Topological-Sort(\u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8\
      )"
  - icon: ':question:'
    path: structure/2d_array.cpp
    title: "2D-Array( $2$ \u6B21\u5143\u914D\u5217)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    IGNORE: ''
    IGNORE_IF_GCC: ''
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/GRL_4_B
  bundledCode: "#line 1 \"test/aoj_GRL_4_B.test.cpp\"\n#define IGNORE\r\n#define PROBLEM\
    \ \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_4_B\"\r\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\n#line 2 \"structure/2d_array.cpp\"\n\r\n#ifndef call_include\r\n\
    #define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T> struct v2d {\r\nprivate:\r\n\tvector<vector<T>> m;\r\
    \n\r\npublic:\r\n\tv2d() {}\r\n\tv2d(int h, int w) : m(h, vector<T>(w)) {}\r\n\
    \tv2d(int h, int w, const T &init) : m(h, vector<T>(w, init)) {}\r\n\tv2d(const\
    \ initializer_list<initializer_list<T>> m_init) : m(m_init.begin(), m_init.end())\
    \ {}\r\n\r\n\tvoid assign(int h, int w) {\r\n\t\tm.assign(h, vector<T>(w));\r\n\
    \t}\r\n\tvoid assign(int h, int w, const T init) {\r\n\t\tm.assign(h, vector<T>(w,\
    \ init));\r\n\t}\r\n\r\n\tinline int size() const {\r\n\t\treturn m.size();\r\n\
    \t}\r\n\r\n\tvoid in() {\r\n\t\tfor(vector<T> &v : m)\r\n\t\t\tfor(T &val : v)\
    \ cin >> val;\r\n\t}\r\n\tvoid in(int h, int w) {\r\n\t\tm.resize(h, vector<T>(w));\r\
    \n\t\tin();\r\n\t}\r\n\r\n\tvoid out() {\r\n\t\tint h = m.size();\r\n\t\tfor(vector<T>\
    \ &v : m) {\r\n\t\t\tint sz = v.size();\r\n\t\t\tfor(int j = 0; j < sz; j++) {\r\
    \n\t\t\t\tcout << v[j] << (j == sz - 1 ? '\\n' : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\
    \t\tcout << flush;\r\n\t}\r\n\r\n\tinline vector<T> &operator[](int idx) {\r\n\
    \t\tassert(0 <= idx && idx < m.size());\r\n\t\treturn m[idx];\r\n\t}\r\n\r\n\t\
    bool rangeout(int x, int y) {\r\n\t\tif(x < 0 || y < 0 || x >= size() || y >=\
    \ m[x].size()) return true;\r\n\t\treturn false;\r\n\t}\r\n};\r\n#line 2 \"graph/topological_sort.cpp\"\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 10 \"graph/topological_sort.cpp\"\
    \n\r\nvector<int> topological(v2d<int> &lst, vector<int> &indeg) {\r\n\tint V\
    \ = lst.size(), vtmp = lst.size();\r\n\tvector<int> res;\r\n\r\n\tqueue<int> q;\r\
    \n\tfor(int i = 0; i < V; i++) {\r\n\t\tif(indeg[i] == 0) q.push(i);\r\n\t}\r\n\
    \r\n\twhile(!q.empty()) {\r\n\t\tint v = q.front();\r\n\t\tq.pop();\r\n\r\n\t\t\
    for(const int nv : lst[v]) {\r\n\t\t\tindeg[nv]--;\r\n\t\t\tif(indeg[nv] == 0)\
    \ q.push(nv);\r\n\t\t}\r\n\r\n\t\tres.emplace_back(v);\r\n\t\tvtmp--;\r\n\t}\r\
    \n\r\n\tif(vtmp) return {-1};\r\n\treturn res;\r\n}\r\n\r\nvector<int> topological(v2d<int>\
    \ &lst) {\r\n\tvector<int> indeg(lst.size(), 0);\r\n\r\n\tfor(int i = 0; i < lst.size();\
    \ i++)\r\n\t\tfor(const int v : lst[i]) indeg[v]++;\r\n\r\n\treturn topological(lst,\
    \ indeg);\r\n}\r\n#line 12 \"test/aoj_GRL_4_B.test.cpp\"\n\r\nint main() {\r\n\
    \tint V, E;\r\n\tcin >> V >> E;\r\n\r\n\tv2d<int> lst(V, 0);\r\n\tfor(int i =\
    \ 0; i < E; i++) {\r\n\t\tint s, t;\r\n\t\tcin >> s >> t;\r\n\t\tlst[s].push_back(t);\r\
    \n\t}\r\n\r\n\tvector<int> ans = topological(lst);\r\n\tfor(int i : ans) cout\
    \ << i << endl;\r\n}\r\n"
  code: "#define IGNORE\r\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/GRL_4_B\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"structure/2d_array.cpp\"\r\n\
    #include \"graph/topological_sort.cpp\"\r\n\r\nint main() {\r\n\tint V, E;\r\n\
    \tcin >> V >> E;\r\n\r\n\tv2d<int> lst(V, 0);\r\n\tfor(int i = 0; i < E; i++)\
    \ {\r\n\t\tint s, t;\r\n\t\tcin >> s >> t;\r\n\t\tlst[s].push_back(t);\r\n\t}\r\
    \n\r\n\tvector<int> ans = topological(lst);\r\n\tfor(int i : ans) cout << i <<\
    \ endl;\r\n}\r\n"
  dependsOn:
  - structure/2d_array.cpp
  - graph/topological_sort.cpp
  isVerificationFile: true
  path: test/aoj_GRL_4_B.test.cpp
  requiredBy: []
  timestamp: '2021-03-02 23:25:01+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj_GRL_4_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_GRL_4_B.test.cpp
- /verify/test/aoj_GRL_4_B.test.cpp.html
title: test/aoj_GRL_4_B.test.cpp
---
