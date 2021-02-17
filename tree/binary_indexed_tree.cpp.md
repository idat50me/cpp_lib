---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: math/inversion_number.cpp
    title: math/inversion_number.cpp
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_5_D.test.cpp
    title: test/aoj_ALDS1_5_D.test.cpp
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
    \ {}\r\n\tBIT(const vector<T>& v) : node(v.size()+1, 0), N(v.size()) {\r\n\t\t\
    for(int i=0; i<N; i++) node[i+1] = v[i];\r\n\t\tfor(int i=1; i<N; i++) {\r\n\t\
    \t\tint j = i+(i&-i);\r\n\t\t\tif(j <= N) node[j] += node[i];\r\n\t\t}\r\n\t}\r\
    \n\r\n\tT sum(int idx) {\r\n\t\tassert(0<=idx && idx<=N);\r\n\t\tT res = 0;\r\n\
    \t\twhile(idx) {\r\n\t\t\tres += node[idx];\r\n\t\t\tidx -= idx&-idx;\r\n\t\t\
    }\r\n\t\treturn res;\r\n\t}\r\n\r\n\tT sum(int l, int r) {\r\n\t\tassert(0<=l\
    \ && r<=N);\r\n\t\tif(l > r) return T(0);\r\n\t\treturn sum(r) - sum(max(l-1,\
    \ 0));\r\n\t}\r\n\r\n\tvoid add(int idx, T& val) {\r\n\t\tassert(0<idx && idx<=N);\r\
    \n\t\twhile(idx <= N) {\r\n\t\t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\
    \n\t\t}\r\n\t}\r\n\tvoid add(int idx, T val) {\r\n\t\tassert(0<idx && idx<=N);\r\
    \n\t\twhile(idx <= N) {\r\n\t\t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\
    \n\t\t}\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\
    \nstruct BIT {\r\nprivate:\r\n\tvector<T> node;\r\n\tconst int N;\r\n\r\npublic:\r\
    \n\tBIT(int n) : node(n+1, 0), N(n) {}\r\n\tBIT(const vector<T>& v) : node(v.size()+1,\
    \ 0), N(v.size()) {\r\n\t\tfor(int i=0; i<N; i++) node[i+1] = v[i];\r\n\t\tfor(int\
    \ i=1; i<N; i++) {\r\n\t\t\tint j = i+(i&-i);\r\n\t\t\tif(j <= N) node[j] += node[i];\r\
    \n\t\t}\r\n\t}\r\n\r\n\tT sum(int idx) {\r\n\t\tassert(0<=idx && idx<=N);\r\n\t\
    \tT res = 0;\r\n\t\twhile(idx) {\r\n\t\t\tres += node[idx];\r\n\t\t\tidx -= idx&-idx;\r\
    \n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\r\n\tT sum(int l, int r) {\r\n\t\tassert(0<=l\
    \ && r<=N);\r\n\t\tif(l > r) return T(0);\r\n\t\treturn sum(r) - sum(max(l-1,\
    \ 0));\r\n\t}\r\n\r\n\tvoid add(int idx, T& val) {\r\n\t\tassert(0<idx && idx<=N);\r\
    \n\t\twhile(idx <= N) {\r\n\t\t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\
    \n\t\t}\r\n\t}\r\n\tvoid add(int idx, T val) {\r\n\t\tassert(0<idx && idx<=N);\r\
    \n\t\twhile(idx <= N) {\r\n\t\t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\
    \n\t\t}\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: tree/binary_indexed_tree.cpp
  requiredBy:
  - math/inversion_number.cpp
  timestamp: '2021-02-03 23:13:19+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo_static_range_sum_2.test.cpp
  - test/aoj_ALDS1_5_D.test.cpp
documentation_of: tree/binary_indexed_tree.cpp
layout: document
title: binary_indexed_tree(BIT)
---

## なにこれ
一点加算・区間和取得を対数時間で行うことができるデータ構造．
セグメント木より定数倍が軽い．

## コンストラクタ
- `BIT(n)`：要素数 `n` の BIT を構築する．
- `BIT(v)`：配列 `v` の要素で BIT を構築する．

## メンバ関数
- `sum(idx)`：`idx` 番目までの要素の総和を返す．
- `sum(l, r)`：`l` 番目から `r` 番目までの要素の総和を返す．
- `add(idx, val)`：`idx` 番目の要素に `val` を加える．

`idx`, `l`, `r` は 1-indexed である．

## 計算量
- `BIT(n)`：$O(n)$
- `BIT(v)`：$O(n)$
- `sum(idx)`：$O(\log n)$
- `sum(l, r)`：$O(\log n)$
- `add(idx, val)`：$O(\log n)$
