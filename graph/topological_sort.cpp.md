---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: structure/2d_array.cpp
    title: "2D-Array( $2$ \u6B21\u5143\u914D\u5217)"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj_GRL_4_B.test.cpp
    title: test/aoj_GRL_4_B.test.cpp
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/topological_sort.cpp\"\n\r\n#ifndef call_include\r\
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
    \ m[x].size()) return true;\r\n\t\treturn false;\r\n\t}\r\n};\r\n#line 10 \"graph/topological_sort.cpp\"\
    \n\r\nvector<int> topological(v2d<int> &lst, vector<int> &indeg) {\r\n\tint V\
    \ = lst.size(), vtmp = lst.size();\r\n\tvector<int> res;\r\n\r\n\tqueue<int> q;\r\
    \n\tfor(int i = 0; i < V; i++) {\r\n\t\tif(indeg[i] == 0) q.push(i);\r\n\t}\r\n\
    \r\n\twhile(!q.empty()) {\r\n\t\tint v = q.front();\r\n\t\tq.pop();\r\n\r\n\t\t\
    for(const int nv : lst[v]) {\r\n\t\t\tindeg[nv]--;\r\n\t\t\tif(indeg[nv] == 0)\
    \ q.push(nv);\r\n\t\t}\r\n\r\n\t\tres.emplace_back(v);\r\n\t\tvtmp--;\r\n\t}\r\
    \n\r\n\tif(vtmp) return {-1};\r\n\treturn res;\r\n}\r\n\r\nvector<int> topological(v2d<int>\
    \ &lst) {\r\n\tvector<int> indeg(lst.size(), 0);\r\n\r\n\tfor(int i = 0; i < lst.size();\
    \ i++)\r\n\t\tfor(const int v : lst[i]) indeg[v]++;\r\n\r\n\treturn topological(lst,\
    \ indeg);\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#include \"../structure/2d_array.cpp\"\
    \r\n\r\nvector<int> topological(v2d<int> &lst, vector<int> &indeg) {\r\n\tint\
    \ V = lst.size(), vtmp = lst.size();\r\n\tvector<int> res;\r\n\r\n\tqueue<int>\
    \ q;\r\n\tfor(int i = 0; i < V; i++) {\r\n\t\tif(indeg[i] == 0) q.push(i);\r\n\
    \t}\r\n\r\n\twhile(!q.empty()) {\r\n\t\tint v = q.front();\r\n\t\tq.pop();\r\n\
    \r\n\t\tfor(const int nv : lst[v]) {\r\n\t\t\tindeg[nv]--;\r\n\t\t\tif(indeg[nv]\
    \ == 0) q.push(nv);\r\n\t\t}\r\n\r\n\t\tres.emplace_back(v);\r\n\t\tvtmp--;\r\n\
    \t}\r\n\r\n\tif(vtmp) return {-1};\r\n\treturn res;\r\n}\r\n\r\nvector<int> topological(v2d<int>\
    \ &lst) {\r\n\tvector<int> indeg(lst.size(), 0);\r\n\r\n\tfor(int i = 0; i < lst.size();\
    \ i++)\r\n\t\tfor(const int v : lst[i]) indeg[v]++;\r\n\r\n\treturn topological(lst,\
    \ indeg);\r\n}\r\n"
  dependsOn:
  - structure/2d_array.cpp
  isVerificationFile: false
  path: graph/topological_sort.cpp
  requiredBy: []
  timestamp: '2021-03-02 23:16:05+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aoj_GRL_4_B.test.cpp
documentation_of: graph/topological_sort.cpp
layout: document
title: "Topological-Sort(\u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8)"
---

## なにこれ
グラフの隣接リストを元に，各辺について終点より始点が先にくる頂点配列を求める．

## 関数
- `topological(lst)`：隣接リスト `lst` を元に，トポロジカルソートした頂点配列を返す．
- `topological(lst, indeg)`：隣接リスト `lst`，頂点の入次数を格納した配列 `indeg` を元に，トポロジカルソートした頂点配列を返す．

## 計算量
頂点数を $V$，辺の数を $E$ とする．
- `topological(lst)`：$O(V+E)$
- `topological(lst, indeg)`：$O(V+E)$
