---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo_static_range_sum.test.cpp
    title: test/yosupo_static_range_sum.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo_staticrmq_2.test.cpp
    title: test/yosupo_staticrmq_2.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/segtree.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T, typename F>\r\nstruct segtree {\r\nprivate:\r\n\tint\
    \ siz=1, N;\r\n\tvector<T> node;\r\n\tconst F op;\r\n\tconst T e_;\r\n\r\npublic:\r\
    \n\tsegtree(int n, const F func, const T e) : N(n), op(func), e_(e) {\r\n\t\t\
    while(siz < N) siz <<= 1;\r\n\t\tnode.resize(2*siz-1, e_);\r\n\t}\r\n\tsegtree(const\
    \ vector<T> &v, const F func, const T e) : N(v.size()), op(func), e_(e) {\r\n\t\
    \twhile(siz < N) siz <<= 1;\r\n\t\tnode.resize(2*siz-1, e_);\r\n\t\tfor(int i=0;\
    \ i<N; i++) node[siz-1+i] = v[i];\r\n\t\tfor(int i=siz-2; i>=0; i--) node[i] =\
    \ op(node[2*i+1], node[2*i+2]);\r\n\t}\r\n\r\n\tvoid update(int idx, T val) {\r\
    \n\t\tidx += siz-1;\r\n\t\tnode[idx] = val;\r\n\r\n\t\twhile(idx > 0) {\r\n\t\t\
    \tidx = (idx-1)/2;\r\n\t\t\tnode[idx] = op(node[2*idx+1], node[2*idx+2]);\r\n\t\
    \t}\r\n\t}\r\n\r\n\tvoid add(int idx, T val) {\r\n\t\tidx += siz-1;\r\n\t\tnode[idx]\
    \ = op(node[idx], val);\r\n\r\n\t\twhile(idx > 0) {\r\n\t\t\tidx = (idx-1)/2;\r\
    \n\t\t\tnode[idx] = op(node[2*idx+1], node[2*idx+2]);\r\n\t\t}\r\n\t}\r\n\r\n\t\
    T get(int idx) {\r\n\t\tassert(0<=idx && idx<N);\r\n\t\treturn node[siz-1+idx];\r\
    \n\t}\r\n\tT get(int L, int R) {\r\n\t\tif(L < 0) L = 0;\r\n\t\tif(R > N) R =\
    \ N;\r\n\t\tassert(L < R);\r\n\t\treturn get__(L, R, 0, 0, siz);\r\n\t}\r\nprivate:\r\
    \n\tT get__(int L, int R, int id, int l, int r) {\r\n\t\tif(r<=L || R<=l) return\
    \ e_;\r\n\t\tif(L<=l && r<=R) return node[id];\r\n\t\tT vl = get__(L, R, 2*id+1,\
    \ l, (l+r)/2);\r\n\t\tT vr = get__(L, R, 2*id+2, (l+r)/2, r);\r\n\t\treturn op(vl,\
    \ vr);\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T,\
    \ typename F>\r\nstruct segtree {\r\nprivate:\r\n\tint siz=1, N;\r\n\tvector<T>\
    \ node;\r\n\tconst F op;\r\n\tconst T e_;\r\n\r\npublic:\r\n\tsegtree(int n, const\
    \ F func, const T e) : N(n), op(func), e_(e) {\r\n\t\twhile(siz < N) siz <<= 1;\r\
    \n\t\tnode.resize(2*siz-1, e_);\r\n\t}\r\n\tsegtree(const vector<T> &v, const\
    \ F func, const T e) : N(v.size()), op(func), e_(e) {\r\n\t\twhile(siz < N) siz\
    \ <<= 1;\r\n\t\tnode.resize(2*siz-1, e_);\r\n\t\tfor(int i=0; i<N; i++) node[siz-1+i]\
    \ = v[i];\r\n\t\tfor(int i=siz-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\
    \n\t}\r\n\r\n\tvoid update(int idx, T val) {\r\n\t\tidx += siz-1;\r\n\t\tnode[idx]\
    \ = val;\r\n\r\n\t\twhile(idx > 0) {\r\n\t\t\tidx = (idx-1)/2;\r\n\t\t\tnode[idx]\
    \ = op(node[2*idx+1], node[2*idx+2]);\r\n\t\t}\r\n\t}\r\n\r\n\tvoid add(int idx,\
    \ T val) {\r\n\t\tidx += siz-1;\r\n\t\tnode[idx] = op(node[idx], val);\r\n\r\n\
    \t\twhile(idx > 0) {\r\n\t\t\tidx = (idx-1)/2;\r\n\t\t\tnode[idx] = op(node[2*idx+1],\
    \ node[2*idx+2]);\r\n\t\t}\r\n\t}\r\n\r\n\tT get(int idx) {\r\n\t\tassert(0<=idx\
    \ && idx<N);\r\n\t\treturn node[siz-1+idx];\r\n\t}\r\n\tT get(int L, int R) {\r\
    \n\t\tif(L < 0) L = 0;\r\n\t\tif(R > N) R = N;\r\n\t\tassert(L < R);\r\n\t\treturn\
    \ get__(L, R, 0, 0, siz);\r\n\t}\r\nprivate:\r\n\tT get__(int L, int R, int id,\
    \ int l, int r) {\r\n\t\tif(r<=L || R<=l) return e_;\r\n\t\tif(L<=l && r<=R) return\
    \ node[id];\r\n\t\tT vl = get__(L, R, 2*id+1, l, (l+r)/2);\r\n\t\tT vr = get__(L,\
    \ R, 2*id+2, (l+r)/2, r);\r\n\t\treturn op(vl, vr);\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/segtree.cpp
  requiredBy: []
  timestamp: '2020-12-15 15:45:27+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo_static_range_sum.test.cpp
  - test/yosupo_staticrmq_2.test.cpp
documentation_of: graph/segtree.cpp
layout: document
title: "segtree(\u30BB\u30B0\u30E1\u30F3\u30C8\u6728)"
---

## なにこれ
区間取得・一点更新可能な要素数 $n$ のセグメント木．

## コンストラクタ
- `segtree(n, func, e)`：要素数 `n` のセグメント木を構築する．
- `segtree(v, func, e)`：配列 `v` の要素を持つセグメント木を構築する．

`func` は二項演算の関数，`e` は単位元．$n \leq 10^8$ 程度．

## メンバ関数
- `update(idx, val)`：`idx` 番目の要素を値 `val` に更新する．
- `get(idx)`：`idx` 番目の要素を返す．
- `get(L, R)`：区間 `[L, R)` の二項演算の結果を返す．

`idx`, `L`, `R` は 0-indexed である．

## 計算量
- `segtree(n, func, e)`：$O(n)$
- `segtree(v, func, e)`：$O(n)$
- `update(idx, val)`：$O(\log n)$
- `get(idx)`：$O(\log n)$
- `get(L, R)`：$O(\log n)$
