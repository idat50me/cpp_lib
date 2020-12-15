---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/segtree_lazy.cpp
    title: "segtree_lazy(\u9045\u5EF6\u8A55\u4FA1\u30BB\u30B0\u30E1\u30F3\u30C8\u6728\
      )"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_H
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_H
  bundledCode: "#line 1 \"test/aoj_DSL_2_H.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_H\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"graph/segtree_lazy.cpp\"\n\r\
    \n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\n\
    using namespace std;\r\n#endif\r\n\r\ntemplate<typename T, typename M>\r\nstruct\
    \ segtree_lazy {\r\n\tusing F = function<T(T,T)>;\r\n\tusing FU = function<M(T,M)>;\r\
    \n\tusing FM = function<M(M,M)>;\r\n\r\nprivate:\r\n\tint siz=1, N;\r\n\tvector<T>\
    \ node;\r\n\tvector<M> lazy;\r\n\tconst F op;\r\n\tconst FU f_upd;\r\n\tconst\
    \ FM f_lz;\r\n\tconst T ex;\r\n\tconst M em;\r\n\r\npublic:\r\n\tsegtree_lazy(int\
    \ n, const F op, const FU f_upd, const FM f_lz, const T ex, const M em)\r\n\t\
    : N(n), op(op), f_upd(f_upd), f_lz(f_lz), ex(ex), em(em) {\r\n\t\twhile(siz <\
    \ N) siz <<= 1;\r\n\t\tnode.resize(2*siz-1, ex);\r\n\t\tlazy.resize(2*siz-1, em);\r\
    \n\t}\r\n\tsegtree_lazy(vector<T> &v, const F op, const FU f_upd, const FM f_lz,\
    \ const T ex, const T em)\r\n\t: N(v.size()), op(op), f_upd(f_upd), f_lz(f_lz),\
    \ ex(ex), em(em) {\r\n\t\twhile(siz < N) siz <<= 1;\r\n\t\tnode.resize(2*siz-1,\
    \ ex);\r\n\t\tlazy.resize(2*siz-1, em);\r\n\t\tfor(int i=0; i<N; i++) node[siz-1+i]\
    \ = v[i];\r\n\t\tfor(int i=siz-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\
    \n\t}\r\n\r\n\tvoid update(int idx, T val) {\r\n\t\tassert(0<=idx && idx<N);\r\
    \n\t\tupd__(idx, idx+1, 0, val, 0, siz);\r\n\t}\r\n\tvoid update(int L, int R,\
    \ T val) {\r\n\t\tif(L < 0) L = 0;\r\n\t\tif(R > N) R = N;\r\n\t\tassert(L < R);\r\
    \n\t\tupd__(L, R, 0, val, 0, siz);\r\n\t}\r\n\r\n\tT get(int idx) {\r\n\t\tassert(0<=idx\
    \ && idx<N);\r\n\t\treturn get__(idx, idx+1, 0, 0, siz);\r\n\t}\r\n\tT get(int\
    \ L, int R) {\r\n\t\tif(L < 0) L = 0;\r\n\t\tif(R > N) R = N;\r\n\t\tassert(L\
    \ < R);\r\n\t\treturn get__(L, R, 0, 0, siz);\r\n\t}\r\nprivate:\r\n\tvoid eval(int\
    \ idx) {\r\n\t\tif(lazy[idx] == em) return;\r\n\t\tif(idx < siz-1) {\r\n\t\t\t\
    lazy[2*idx+1] = f_lz(lazy[2*idx+1], lazy[idx]);\r\n\t\t\tlazy[2*idx+2] = f_lz(lazy[2*idx+2],\
    \ lazy[idx]);\r\n\t\t}\r\n\t\tnode[idx] = f_upd(node[idx], lazy[idx]);\r\n\t\t\
    lazy[idx] = em;\r\n\t}\r\n\r\n\tvoid upd__(int L, int R, int idx, T val, int l,\
    \ int r) {\r\n\t\teval(idx);\r\n\t\tif(r<=L || R<=l) return;\r\n\t\tif(L<=l &&\
    \ r<=R) {\r\n\t\t\tlazy[idx] = f_lz(lazy[idx], val);\r\n\t\t\teval(idx);\r\n\t\
    \t}\r\n\t\telse {\r\n\t\t\tupd__(L, R, 2*idx+1, val, l, (l+r)/2);\r\n\t\t\tupd__(L,\
    \ R, 2*idx+2, val, (l+r)/2, r);\r\n\t\t\tnode[idx] = op(node[2*idx+1], node[2*idx+2]);\r\
    \n\t\t}\r\n\t}\r\n\r\n\tT get__(int L, int R, int idx, int l, int r) {\r\n\t\t\
    if(r<=L || R<=l) return ex;\r\n\t\teval(idx);\r\n\t\tif(L<=l && r<=R) return node[idx];\r\
    \n\t\tT vl = get__(L, R, 2*idx+1, l, (l+r)/2);\r\n\t\tT vr = get__(L, R, 2*idx+2,\
    \ (l+r)/2, r);\r\n\t\treturn op(vl, vr);\r\n\t}\r\n};\r\n#line 10 \"test/aoj_DSL_2_H.test.cpp\"\
    \n\r\nint main() {\r\n\tint N,Q; cin>>N>>Q;\r\n\tconst int in = 2147483647;\r\n\
    \tvector<int> v(N,0);\r\n\tsegtree_lazy<int,int> lsg(\r\n\t\tv,\r\n\t\t[](int\
    \ l, int r){return min(l,r);},\r\n\t\t[](int x, int m){return x+m;},\r\n\t\t[](int\
    \ l, int r){return l+r;},\r\n\t\t1000000000, 0\r\n\t);\r\n\r\n\twhile(Q--) {\r\
    \n\t\tint mode; cin>>mode;\r\n\t\tif(mode==0) {\r\n\t\t\tint S,T,X; cin>>S>>T>>X;\r\
    \n\t\t\tlsg.update(S,T+1,X);\r\n\t\t}\r\n\t\telse {\r\n\t\t\tint S,T; cin>>S>>T;\r\
    \n\t\t\tcout<<lsg.get(S,T+1)<<endl;\r\n\t\t}\r\n\t}\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_H\"\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"graph/segtree_lazy.cpp\"\r\n\
    \r\nint main() {\r\n\tint N,Q; cin>>N>>Q;\r\n\tconst int in = 2147483647;\r\n\t\
    vector<int> v(N,0);\r\n\tsegtree_lazy<int,int> lsg(\r\n\t\tv,\r\n\t\t[](int l,\
    \ int r){return min(l,r);},\r\n\t\t[](int x, int m){return x+m;},\r\n\t\t[](int\
    \ l, int r){return l+r;},\r\n\t\t1000000000, 0\r\n\t);\r\n\r\n\twhile(Q--) {\r\
    \n\t\tint mode; cin>>mode;\r\n\t\tif(mode==0) {\r\n\t\t\tint S,T,X; cin>>S>>T>>X;\r\
    \n\t\t\tlsg.update(S,T+1,X);\r\n\t\t}\r\n\t\telse {\r\n\t\t\tint S,T; cin>>S>>T;\r\
    \n\t\t\tcout<<lsg.get(S,T+1)<<endl;\r\n\t\t}\r\n\t}\r\n}\r\n"
  dependsOn:
  - graph/segtree_lazy.cpp
  isVerificationFile: true
  path: test/aoj_DSL_2_H.test.cpp
  requiredBy: []
  timestamp: '2020-12-15 16:44:16+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_DSL_2_H.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_DSL_2_H.test.cpp
- /verify/test/aoj_DSL_2_H.test.cpp.html
title: test/aoj_DSL_2_H.test.cpp
---
