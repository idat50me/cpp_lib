---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DSL_2_F.test.cpp
    title: test/aoj_DSL_2_F.test.cpp
  - icon: ':x:'
    path: test/aoj_DSL_2_H.test.cpp
    title: test/aoj_DSL_2_H.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 2 \"graph/lazy_segtree.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T, typename M>\r\nstruct lazy_segtree {\r\n\tusing F =\
    \ function<T(T,T)>;\r\n\tusing FU = function<M(T,M)>;\r\n\tusing FM = function<M(M,M)>;\r\
    \n\r\nprivate:\r\n\tint siz=1, N;\r\n\tvector<T> node;\r\n\tvector<M> lazy;\r\n\
    \tconst F op;\r\n\tconst FU f_upd;\r\n\tconst FM f_lz;\r\n\tconst T ex;\r\n\t\
    const M em;\r\n\r\npublic:\r\n\tlazy_segtree(int n, const F op, const FU f_upd,\
    \ const FM f_lz, const T ex, const M em)\r\n\t: N(n), op(op), f_upd(f_upd), f_lz(f_lz),\
    \ ex(ex), em(em) {\r\n\t\twhile(siz < N) siz <<= 1;\r\n\t\tnode.resize(2*siz-1,\
    \ ex);\r\n\t\tlazy.resize(2*siz-1, em);\r\n\t}\r\n\tlazy_segtree(vector<T> &v,\
    \ const F op, const FU f_upd, const FM f_lz, const T ex, const T em)\r\n\t: N(v.size()),\
    \ op(op), f_upd(f_upd), f_lz(f_lz), ex(ex), em(em) {\r\n\t\twhile(siz < N) siz\
    \ <<= 1;\r\n\t\tnode.resize(2*siz-1, ex);\r\n\t\tlazy.resize(2*siz-1, em);\r\n\
    \t\tfor(int i=0; i<N; i++) node[siz-1+i] = v[i];\r\n\t\tfor(int i=siz-2; i>=0;\
    \ i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\n\t}\r\n\r\n\tvoid update(int\
    \ idx, T val) {\r\n\t\tassert(0<=idx && idx<N);\r\n\t\tupd__(idx, idx+1, 0, val,\
    \ 0, siz);\r\n\t}\r\n\tvoid update(int L, int R, T val) {\r\n\t\tif(L < 0) L =\
    \ 0;\r\n\t\tif(R > N) R = N;\r\n\t\tassert(L < R);\r\n\t\tupd__(L, R, 0, val,\
    \ 0, siz);\r\n\t}\r\n\r\n\tT get(int idx) {\r\n\t\tassert(0<=idx && idx<N);\r\n\
    \t\treturn get__(idx, idx+1, 0, 0, siz);\r\n\t}\r\n\tT get(int L, int R) {\r\n\
    \t\tif(L < 0) L = 0;\r\n\t\tif(R > N) R = N;\r\n\t\tassert(L < R);\r\n\t\treturn\
    \ get__(L, R, 0, 0, siz);\r\n\t}\r\nprivate:\r\n\tvoid eval(int idx) {\r\n\t\t\
    if(lazy[idx] == em) return;\r\n\t\tif(idx < siz-1) {\r\n\t\t\tlazy[2*idx+1] =\
    \ f_lz(lazy[2*idx+1], lazy[idx]);\r\n\t\t\tlazy[2*idx+2] = f_lz(lazy[2*idx+2],\
    \ lazy[idx]);\r\n\t\t}\r\n\t\tnode[idx] = f_upd(node[idx], lazy[idx]);\r\n\t\t\
    lazy[idx] = em;\r\n\t}\r\n\r\n\tvoid upd__(int L, int R, int idx, T val, int l,\
    \ int r) {\r\n\t\teval(idx);\r\n\t\tif(r<=L || R<=l) return;\r\n\t\tif(L<=l &&\
    \ r<=R) {\r\n\t\t\tlazy[idx] = f_lz(lazy[idx], val);\r\n\t\t\teval(idx);\r\n\t\
    \t}\r\n\t\telse {\r\n\t\t\tupd__(L, R, 2*idx+1, val, l, (l+r)/2);\r\n\t\t\tupd__(L,\
    \ R, 2*idx+2, val, (l+r)/2, r);\r\n\t\t\tnode[idx] = op(node[2*idx+1], node[2*idx+2]);\r\
    \n\t\t}\r\n\t}\r\n\r\n\tT get__(int L, int R, int idx, int l, int r) {\r\n\t\t\
    if(r<=L || R<=l) return ex;\r\n\t\teval(idx);\r\n\t\tif(L<=l && r<=R) return node[idx];\r\
    \n\t\tT vl = get__(L, R, 2*idx+1, l, (l+r)/2);\r\n\t\tT vr = get__(L, R, 2*idx+2,\
    \ (l+r)/2, r);\r\n\t\treturn op(vl, vr);\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T,\
    \ typename M>\r\nstruct lazy_segtree {\r\n\tusing F = function<T(T,T)>;\r\n\t\
    using FU = function<M(T,M)>;\r\n\tusing FM = function<M(M,M)>;\r\n\r\nprivate:\r\
    \n\tint siz=1, N;\r\n\tvector<T> node;\r\n\tvector<M> lazy;\r\n\tconst F op;\r\
    \n\tconst FU f_upd;\r\n\tconst FM f_lz;\r\n\tconst T ex;\r\n\tconst M em;\r\n\r\
    \npublic:\r\n\tlazy_segtree(int n, const F op, const FU f_upd, const FM f_lz,\
    \ const T ex, const M em)\r\n\t: N(n), op(op), f_upd(f_upd), f_lz(f_lz), ex(ex),\
    \ em(em) {\r\n\t\twhile(siz < N) siz <<= 1;\r\n\t\tnode.resize(2*siz-1, ex);\r\
    \n\t\tlazy.resize(2*siz-1, em);\r\n\t}\r\n\tlazy_segtree(vector<T> &v, const F\
    \ op, const FU f_upd, const FM f_lz, const T ex, const T em)\r\n\t: N(v.size()),\
    \ op(op), f_upd(f_upd), f_lz(f_lz), ex(ex), em(em) {\r\n\t\twhile(siz < N) siz\
    \ <<= 1;\r\n\t\tnode.resize(2*siz-1, ex);\r\n\t\tlazy.resize(2*siz-1, em);\r\n\
    \t\tfor(int i=0; i<N; i++) node[siz-1+i] = v[i];\r\n\t\tfor(int i=siz-2; i>=0;\
    \ i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\n\t}\r\n\r\n\tvoid update(int\
    \ idx, T val) {\r\n\t\tassert(0<=idx && idx<N);\r\n\t\tupd__(idx, idx+1, 0, val,\
    \ 0, siz);\r\n\t}\r\n\tvoid update(int L, int R, T val) {\r\n\t\tif(L < 0) L =\
    \ 0;\r\n\t\tif(R > N) R = N;\r\n\t\tassert(L < R);\r\n\t\tupd__(L, R, 0, val,\
    \ 0, siz);\r\n\t}\r\n\r\n\tT get(int idx) {\r\n\t\tassert(0<=idx && idx<N);\r\n\
    \t\treturn get__(idx, idx+1, 0, 0, siz);\r\n\t}\r\n\tT get(int L, int R) {\r\n\
    \t\tif(L < 0) L = 0;\r\n\t\tif(R > N) R = N;\r\n\t\tassert(L < R);\r\n\t\treturn\
    \ get__(L, R, 0, 0, siz);\r\n\t}\r\nprivate:\r\n\tvoid eval(int idx) {\r\n\t\t\
    if(lazy[idx] == em) return;\r\n\t\tif(idx < siz-1) {\r\n\t\t\tlazy[2*idx+1] =\
    \ f_lz(lazy[2*idx+1], lazy[idx]);\r\n\t\t\tlazy[2*idx+2] = f_lz(lazy[2*idx+2],\
    \ lazy[idx]);\r\n\t\t}\r\n\t\tnode[idx] = f_upd(node[idx], lazy[idx]);\r\n\t\t\
    lazy[idx] = em;\r\n\t}\r\n\r\n\tvoid upd__(int L, int R, int idx, T val, int l,\
    \ int r) {\r\n\t\teval(idx);\r\n\t\tif(r<=L || R<=l) return;\r\n\t\tif(L<=l &&\
    \ r<=R) {\r\n\t\t\tlazy[idx] = f_lz(lazy[idx], val);\r\n\t\t\teval(idx);\r\n\t\
    \t}\r\n\t\telse {\r\n\t\t\tupd__(L, R, 2*idx+1, val, l, (l+r)/2);\r\n\t\t\tupd__(L,\
    \ R, 2*idx+2, val, (l+r)/2, r);\r\n\t\t\tnode[idx] = op(node[2*idx+1], node[2*idx+2]);\r\
    \n\t\t}\r\n\t}\r\n\r\n\tT get__(int L, int R, int idx, int l, int r) {\r\n\t\t\
    if(r<=L || R<=l) return ex;\r\n\t\teval(idx);\r\n\t\tif(L<=l && r<=R) return node[idx];\r\
    \n\t\tT vl = get__(L, R, 2*idx+1, l, (l+r)/2);\r\n\t\tT vr = get__(L, R, 2*idx+2,\
    \ (l+r)/2, r);\r\n\t\treturn op(vl, vr);\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: graph/lazy_segtree.cpp
  requiredBy: []
  timestamp: '2020-12-15 15:45:27+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/aoj_DSL_2_H.test.cpp
  - test/aoj_DSL_2_F.test.cpp
documentation_of: graph/lazy_segtree.cpp
layout: document
redirect_from:
- /library/graph/lazy_segtree.cpp
- /library/graph/lazy_segtree.cpp.html
title: graph/lazy_segtree.cpp
---
