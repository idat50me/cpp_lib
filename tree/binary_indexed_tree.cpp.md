---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo_static_range_sum_2.test.cpp
    title: test/yosupo_static_range_sum_2.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"tree/binary_indexed_tree.cpp\"\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\ntemplate<typename T>\r\nstruct BIT {\r\nprivate:\r\n\tvector<T>\
    \ node;\r\n\tconst int N;\r\n\r\npublic:\r\n\tBIT(int n) : node(n+1, 0), N(n)\
    \ {}\r\n\r\n\tT sum(int idx) {\r\n\t\tassert(0<=idx && idx<=N);\r\n\t\tT res =\
    \ 0;\r\n\t\twhile(idx) {\r\n\t\t\tres += node[idx];\r\n\t\t\tidx -= idx&-idx;\r\
    \n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\r\n\tT sum(int l, int r) {\r\n\t\tassert(0<=l\
    \ && l<=r && r<=N);\r\n\t\treturn sum(r) - sum(l-1);\r\n\t}\r\n\r\n\tvoid add(int\
    \ idx, T& val) {\r\n\t\tassert(0<idx && idx<=N);\r\n\t\twhile(idx <= N) {\r\n\t\
    \t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\n\t\t}\r\n\t}\r\n\tvoid add(int\
    \ idx, T val) {\r\n\t\tassert(0<idx && idx<=N);\r\n\t\twhile(idx <= N) {\r\n\t\
    \t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\n\t\t}\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\
    \nstruct BIT {\r\nprivate:\r\n\tvector<T> node;\r\n\tconst int N;\r\n\r\npublic:\r\
    \n\tBIT(int n) : node(n+1, 0), N(n) {}\r\n\r\n\tT sum(int idx) {\r\n\t\tassert(0<=idx\
    \ && idx<=N);\r\n\t\tT res = 0;\r\n\t\twhile(idx) {\r\n\t\t\tres += node[idx];\r\
    \n\t\t\tidx -= idx&-idx;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\r\n\tT sum(int\
    \ l, int r) {\r\n\t\tassert(0<=l && l<=r && r<=N);\r\n\t\treturn sum(r) - sum(l-1);\r\
    \n\t}\r\n\r\n\tvoid add(int idx, T& val) {\r\n\t\tassert(0<idx && idx<=N);\r\n\
    \t\twhile(idx <= N) {\r\n\t\t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\n\
    \t\t}\r\n\t}\r\n\tvoid add(int idx, T val) {\r\n\t\tassert(0<idx && idx<=N);\r\
    \n\t\twhile(idx <= N) {\r\n\t\t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\
    \n\t\t}\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: tree/binary_indexed_tree.cpp
  requiredBy: []
  timestamp: '2021-02-01 01:23:01+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo_static_range_sum_2.test.cpp
documentation_of: tree/binary_indexed_tree.cpp
layout: document
redirect_from:
- /library/tree/binary_indexed_tree.cpp
- /library/tree/binary_indexed_tree.cpp.html
title: tree/binary_indexed_tree.cpp
---
