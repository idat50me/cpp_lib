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
  bundledCode: "#line 1 \"tree/segtree.cpp\"\n\n\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T, T (*op)(T,T), T (*e)()>\r\nstruct segtree {\r\nprivate:\r\
    \n\tint siz=1, N;\r\n\tvector<T> node;\r\n\tconst T e_ = e();\r\n\r\npublic:\r\
    \n\tsegtree(int n, T init) {\r\n\t\tN = n;\r\n\t\twhile(siz < N) siz *= 2;\r\n\
    \t\tnode.resize(2*siz-1, e_);\r\n\t\tfor(int i=0; i<N; i++) node[siz-1+i] = init;\r\
    \n\t\tfor(int i=siz-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\n\t\
    }\r\n\tsegtree(vector<T> v) {\r\n\t\tN = v.size();\r\n\t\twhile(siz < N) siz *=\
    \ 2;\r\n\t\tnode.resize(2*siz-1, e_);\r\n\t\tfor(int i=0; i<N; i++) node[siz-1+i]\
    \ = v[i];\r\n\t\tfor(int i=siz-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\
    \n\t}\r\n\r\n\tvoid update(int idx, T val) {\r\n\t\tidx += siz-1;\r\n\t\tnode[idx]\
    \ = val;\r\n\r\n\t\twhile(idx > 0) {\r\n\t\t\tidx = (idx-1)/2;\r\n\t\t\tnode[idx]\
    \ = op(node[2*idx+1], node[2*idx+2]);\r\n\t\t}\r\n\t}\r\n\r\n\tT get(int idx)\
    \ {\r\n\t\treturn get(idx, idx+1);\r\n\t}\r\n\tT get(int L, int R) {\r\n\t\tif(L\
    \ < 0) L = 0;\r\n\t\tif(R > N) R = N;\r\n\t\treturn get__(L, R, 0, 0, siz);\r\n\
    \t}\r\nprivate:\r\n\tT get__(int L, int R, int id, int l, int r) {\r\n\t\tif(r<=L\
    \ || R<=l) return e_;\r\n\t\tif(L<=l && r<=R) return node[id];\r\n\t\tT vl = get__(L,\
    \ R, 2*id+1, l, (l+r)/2);\r\n\t\tT vr = get__(L, R, 2*id+2, (l+r)/2, r);\r\n\t\
    \treturn op(vl, vr);\r\n\t}\r\npublic:\r\n};\r\n\r\n\n"
  code: "#ifndef lib_segtree\r\n#define lib_segtree\r\n\r\n#ifndef call_include\r\n\
    #define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T, T (*op)(T,T), T (*e)()>\r\nstruct segtree {\r\nprivate:\r\
    \n\tint siz=1, N;\r\n\tvector<T> node;\r\n\tconst T e_ = e();\r\n\r\npublic:\r\
    \n\tsegtree(int n, T init) {\r\n\t\tN = n;\r\n\t\twhile(siz < N) siz *= 2;\r\n\
    \t\tnode.resize(2*siz-1, e_);\r\n\t\tfor(int i=0; i<N; i++) node[siz-1+i] = init;\r\
    \n\t\tfor(int i=siz-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\n\t\
    }\r\n\tsegtree(vector<T> v) {\r\n\t\tN = v.size();\r\n\t\twhile(siz < N) siz *=\
    \ 2;\r\n\t\tnode.resize(2*siz-1, e_);\r\n\t\tfor(int i=0; i<N; i++) node[siz-1+i]\
    \ = v[i];\r\n\t\tfor(int i=siz-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\
    \n\t}\r\n\r\n\tvoid update(int idx, T val) {\r\n\t\tidx += siz-1;\r\n\t\tnode[idx]\
    \ = val;\r\n\r\n\t\twhile(idx > 0) {\r\n\t\t\tidx = (idx-1)/2;\r\n\t\t\tnode[idx]\
    \ = op(node[2*idx+1], node[2*idx+2]);\r\n\t\t}\r\n\t}\r\n\r\n\tT get(int idx)\
    \ {\r\n\t\treturn get(idx, idx+1);\r\n\t}\r\n\tT get(int L, int R) {\r\n\t\tif(L\
    \ < 0) L = 0;\r\n\t\tif(R > N) R = N;\r\n\t\treturn get__(L, R, 0, 0, siz);\r\n\
    \t}\r\nprivate:\r\n\tT get__(int L, int R, int id, int l, int r) {\r\n\t\tif(r<=L\
    \ || R<=l) return e_;\r\n\t\tif(L<=l && r<=R) return node[id];\r\n\t\tT vl = get__(L,\
    \ R, 2*id+1, l, (l+r)/2);\r\n\t\tT vr = get__(L, R, 2*id+2, (l+r)/2, r);\r\n\t\
    \treturn op(vl, vr);\r\n\t}\r\npublic:\r\n};\r\n\r\n#endif // lib_segtree\r\n"
  dependsOn: []
  isVerificationFile: false
  path: tree/segtree.cpp
  requiredBy: []
  timestamp: '2020-11-11 17:54:49+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo_static_range_sum.test.cpp
  - test/yosupo_staticrmq_2.test.cpp
documentation_of: tree/segtree.cpp
layout: document
title: "segtree(\u30BB\u30B0\u30E1\u30F3\u30C8\u6728)"
---

## なにこれ
区間取得・一点更新可能な要素数 $n$ のセグメント木．

## 制約
- $n \leq 10^8$ 程度

## テンプレート引数
- `op`：二項演算の結果を返す関数．
- `e`：単位元を返す関数．

## コンストラクタ
- `segtree(n, init)`：計算量 $O(n)$
	- `n`：要素数．
	- `init`：初期値．

- `segtree(v)`
	- `v`：初期要素を格納している配列．

## メンバ関数
- `update(idx, val)`：計算量 $O(\log n)$  
	要素を更新する．
	- `idx`：更新する要素の index
	- `val`：更新後の要素の値．

- `get(idx)`：計算量 $O(\log n)$  
	指定した index の要素を返す．
	- `idx`：取得する要素の index

- `get(L, R)`：計算量 $O(\log n)$  
	指定区間の二項演算の結果を返す．
	- `L,R`：`[L,R)`を探索区間とする．
