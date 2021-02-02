---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: tree/binary_indexed_tree.cpp
    title: binary_indexed_tree(BIT)
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj_ALDS1_5_D.test.cpp
    title: test/aoj_ALDS1_5_D.test.cpp
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/inversion_number.cpp\"\n\r\n#ifndef call_include\r\n\
    #define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\n#line 2 \"tree/binary_indexed_tree.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T>\r\nstruct BIT {\r\nprivate:\r\n\tvector<T> node;\r\n\
    \tconst int N;\r\n\r\npublic:\r\n\tBIT(int n) : node(n+1, 0), N(n) {}\r\n\tBIT(vector<T>&\
    \ v) : node(v.size()+1, 0), N(v.size()) {\r\n\t\tfor(int i=0; i<N; i++) node[i+1]\
    \ = v[i];\r\n\t\tfor(int i=1; i<N; i++) {\r\n\t\t\tint j = i+(i&-i);\r\n\t\t\t\
    if(j <= N) node[j] += node[i];\r\n\t\t}\r\n\t}\r\n\r\n\tT sum(int idx) {\r\n\t\
    \tassert(0<=idx && idx<=N);\r\n\t\tT res = 0;\r\n\t\twhile(idx) {\r\n\t\t\tres\
    \ += node[idx];\r\n\t\t\tidx -= idx&-idx;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\
    \n\r\n\tT sum(int l, int r) {\r\n\t\tassert(0<=l && l<=r && r<=N);\r\n\t\treturn\
    \ sum(r) - sum(l-1);\r\n\t}\r\n\r\n\tvoid add(int idx, T& val) {\r\n\t\tassert(0<idx\
    \ && idx<=N);\r\n\t\twhile(idx <= N) {\r\n\t\t\tnode[idx] += val;\r\n\t\t\tidx\
    \ += idx&-idx;\r\n\t\t}\r\n\t}\r\n\tvoid add(int idx, T val) {\r\n\t\tassert(0<idx\
    \ && idx<=N);\r\n\t\twhile(idx <= N) {\r\n\t\t\tnode[idx] += val;\r\n\t\t\tidx\
    \ += idx&-idx;\r\n\t\t}\r\n\t}\r\n};\r\n#line 10 \"math/inversion_number.cpp\"\
    \n\r\ntemplate<typename T>\r\nlong long inv_count(vector<T> &v) {\r\n\tint N =\
    \ v.size();\r\n\tlong long res = 0;\r\n\tBIT<T> bt(v);\r\n\tmap<T, int> mp;\r\n\
    \tfor(T &a: v) mp.emplace(a, 0);\r\n\tint i = 1;\r\n\tfor(auto &a: mp) {\r\n\t\
    \ta.second = i;\r\n\t\ti++;\r\n\t}\r\n\r\n\tfor(T &a: v) {\r\n\t\tbt.add(mp[a],\
    \ 1);\r\n\t\tres += bt.sum(mp[a]+1, N);\r\n\t}\r\n\r\n\treturn res;\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#include \"tree/binary_indexed_tree.cpp\"\
    \r\n\r\ntemplate<typename T>\r\nlong long inv_count(vector<T> &v) {\r\n\tint N\
    \ = v.size();\r\n\tlong long res = 0;\r\n\tBIT<T> bt(v);\r\n\tmap<T, int> mp;\r\
    \n\tfor(T &a: v) mp.emplace(a, 0);\r\n\tint i = 1;\r\n\tfor(auto &a: mp) {\r\n\
    \t\ta.second = i;\r\n\t\ti++;\r\n\t}\r\n\r\n\tfor(T &a: v) {\r\n\t\tbt.add(mp[a],\
    \ 1);\r\n\t\tres += bt.sum(mp[a]+1, N);\r\n\t}\r\n\r\n\treturn res;\r\n}\r\n"
  dependsOn:
  - tree/binary_indexed_tree.cpp
  isVerificationFile: false
  path: math/inversion_number.cpp
  requiredBy: []
  timestamp: '2021-02-02 19:50:42+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aoj_ALDS1_5_D.test.cpp
documentation_of: math/inversion_number.cpp
layout: document
redirect_from:
- /library/math/inversion_number.cpp
- /library/math/inversion_number.cpp.html
title: math/inversion_number.cpp
---
