---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DSL_1_A.test.cpp
    title: test/aoj_DSL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo_unionfind.test.cpp
    title: test/yosupo_unionfind.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0556.test.cpp
    title: test/yuki_0556.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/union_find.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate <class T = int>\r\nstruct UnionFind {\r\nprivate:\r\n\tvector<int>\
    \ parent;\r\n\tvector<int> num;\r\n\tvector<T> val;\r\n\tint treenum;\r\n\r\n\t\
    const function<bool(int,int,T&,T&)> swap_flg = [this](const int l, const int r,\
    \ const T& val_l, const T& val_r) {\r\n\t\treturn num[l] < num[r];\r\n\t};\r\n\
    \tconst function<void(T&,T&)> merge_val = [this](T& val_l, const T& val_r){};\r\
    \n\r\npublic:\r\n\tUnionFind(int n) : parent(n), num(n,1), treenum(n) {\r\n\t\t\
    for(int i=0; i<n; i++) parent[i] = i;\r\n\t}\r\n\tUnionFind(int n, function<bool(int,int,T&,T&)>\
    \ f1) : parent(n), num(n,1), val(n), treenum(n), swap_flg(f1) {\r\n\t\tfor(int\
    \ i=0; i<n; i++) parent[i] = i;\r\n\t}\r\n\tUnionFind(int n, function<bool(int,int,T&,T&)>\
    \ f1, const function<void(T&,T&)> f2) : parent(n), num(n,1), val(n), treenum(n),\
    \ swap_flg(f1), merge_val(f2) {\r\n\t\tfor(int i=0; i<n; i++) parent[i] = i;\r\
    \n\t}\r\n\tUnionFind(vector<T> &v, function<bool(int,int,T&,T&)> f1, const function<void(T&,T&)>\
    \ f2) : parent(v.size()), num(v.size(),1), val(v), treenum(v.size()), swap_flg(f1),\
    \ merge_val(f2) {\r\n\t\tfor(int i=0; i<v.size(); i++) parent[i] = i;\r\n\t}\r\
    \n\r\n\tint root(int x) {\r\n\t\tassert(x < parent.size());\r\n\t\tif(parent[x]\
    \ == x) return x;\r\n\t\treturn parent[x] = root(parent[x]);\r\n\t}\r\n\r\n\t\
    int size(int x) {\r\n\t\tassert(x < parent.size());\r\n\t\treturn num[root(x)];\r\
    \n\t}\r\n\r\n\tint merge(int x, int y) {\r\n\t\tassert(x < parent.size() && y\
    \ < parent.size());\r\n\t\tint xrt = root(x);\r\n\t\tint yrt = root(y);\r\n\t\t\
    if(xrt == yrt) return xrt;\r\n\t\tif(swap_flg(xrt,yrt,val[xrt],val[yrt])) swap(xrt,yrt);\r\
    \n\t\tparent[yrt] = xrt;\r\n\t\tnum[xrt] += num[yrt];\r\n\t\tmerge_val(val[xrt],val[yrt]);\r\
    \n\t\ttreenum--;\r\n\t\treturn xrt;\r\n\t}\r\n\r\n\tbool same(int x, int y) {\r\
    \n\t\tassert(x < parent.size() && y < parent.size());\r\n\t\treturn root(x) ==\
    \ root(y);\r\n\t}\r\n\r\n\tint tnum() {\r\n\t\treturn treenum;\r\n\t}\r\n\r\n\t\
    inline T& operator[](int x) {\r\n\t\tassert(x < parent.size());\r\n\t\treturn\
    \ val[x];\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate <class T =\
    \ int>\r\nstruct UnionFind {\r\nprivate:\r\n\tvector<int> parent;\r\n\tvector<int>\
    \ num;\r\n\tvector<T> val;\r\n\tint treenum;\r\n\r\n\tconst function<bool(int,int,T&,T&)>\
    \ swap_flg = [this](const int l, const int r, const T& val_l, const T& val_r)\
    \ {\r\n\t\treturn num[l] < num[r];\r\n\t};\r\n\tconst function<void(T&,T&)> merge_val\
    \ = [this](T& val_l, const T& val_r){};\r\n\r\npublic:\r\n\tUnionFind(int n) :\
    \ parent(n), num(n,1), treenum(n) {\r\n\t\tfor(int i=0; i<n; i++) parent[i] =\
    \ i;\r\n\t}\r\n\tUnionFind(int n, function<bool(int,int,T&,T&)> f1) : parent(n),\
    \ num(n,1), val(n), treenum(n), swap_flg(f1) {\r\n\t\tfor(int i=0; i<n; i++) parent[i]\
    \ = i;\r\n\t}\r\n\tUnionFind(int n, function<bool(int,int,T&,T&)> f1, const function<void(T&,T&)>\
    \ f2) : parent(n), num(n,1), val(n), treenum(n), swap_flg(f1), merge_val(f2) {\r\
    \n\t\tfor(int i=0; i<n; i++) parent[i] = i;\r\n\t}\r\n\tUnionFind(vector<T> &v,\
    \ function<bool(int,int,T&,T&)> f1, const function<void(T&,T&)> f2) : parent(v.size()),\
    \ num(v.size(),1), val(v), treenum(v.size()), swap_flg(f1), merge_val(f2) {\r\n\
    \t\tfor(int i=0; i<v.size(); i++) parent[i] = i;\r\n\t}\r\n\r\n\tint root(int\
    \ x) {\r\n\t\tassert(x < parent.size());\r\n\t\tif(parent[x] == x) return x;\r\
    \n\t\treturn parent[x] = root(parent[x]);\r\n\t}\r\n\r\n\tint size(int x) {\r\n\
    \t\tassert(x < parent.size());\r\n\t\treturn num[root(x)];\r\n\t}\r\n\r\n\tint\
    \ merge(int x, int y) {\r\n\t\tassert(x < parent.size() && y < parent.size());\r\
    \n\t\tint xrt = root(x);\r\n\t\tint yrt = root(y);\r\n\t\tif(xrt == yrt) return\
    \ xrt;\r\n\t\tif(swap_flg(xrt,yrt,val[xrt],val[yrt])) swap(xrt,yrt);\r\n\t\tparent[yrt]\
    \ = xrt;\r\n\t\tnum[xrt] += num[yrt];\r\n\t\tmerge_val(val[xrt],val[yrt]);\r\n\
    \t\ttreenum--;\r\n\t\treturn xrt;\r\n\t}\r\n\r\n\tbool same(int x, int y) {\r\n\
    \t\tassert(x < parent.size() && y < parent.size());\r\n\t\treturn root(x) == root(y);\r\
    \n\t}\r\n\r\n\tint tnum() {\r\n\t\treturn treenum;\r\n\t}\r\n\r\n\tinline T& operator[](int\
    \ x) {\r\n\t\tassert(x < parent.size());\r\n\t\treturn val[x];\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/union_find.cpp
  requiredBy: []
  timestamp: '2020-12-12 01:33:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0556.test.cpp
  - test/yosupo_unionfind.test.cpp
  - test/aoj_DSL_1_A.test.cpp
documentation_of: graph/union_find.cpp
layout: document
title: "Union-Find\u6728"
---

## なにこれ
$n$ 頂点を持つ Union-Find 木．

## コンストラクタ
- `UnionFind(n)`
- `UninoFind(n, f1)`
- `UnionFind(n, f1, f2)`

`n` 頂点の Union-Find 木を構築する．

- `UnionFind(v, f1, f2)`

各頂点が配列 `v` の要素をデータとして持つ Union-Find 木を構築する．

`function<bool(int,int,T&,T&)> f1` はマージテクの swap 判定関数．  
`function<void(T&,T&)> f2` はデータのマージを行う関数．  
$n \leq 10^8$ 程度．(保持するデータの大きさによる)

## メンバ関数
- `root(x)`：頂点 `x` が属する木の根を返す．
- `size(x)`：頂点 `x` が属する木のサイズを返す．
- `merge(x, y)`：頂点 `x` と `y` を結合し，属する木の根を返す．
- `same(x, y)`：頂点 `x` と `y` が同じ木に属するか判定する．
- `tnum()`：木の数を返す．

## 計算量
- コンストラクタ：$O(n)$
- `root(x)`：ならし $O(\log n)$
- `size(x)`：ならし $O(1)$
- `merge(x, y)`：ならし $O(1)$
- `same(x, y)`：ならし $O(1)$
- `tnum()`：$O(1)$
