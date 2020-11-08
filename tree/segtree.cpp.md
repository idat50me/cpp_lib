---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo_staticrmq_2.test.cpp
    title: test/yosupo_staticrmq_2.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: ../docs/segtree.md
    document_title: "segtree(\u30BB\u30B0\u30E1\u30F3\u30C8\u30C4\u30EA\u30FC)"
    links: []
  bundledCode: "#line 1 \"tree/segtree.cpp\"\n/*\r\n * @brief segtree(\u30BB\u30B0\
    \u30E1\u30F3\u30C8\u30C4\u30EA\u30FC)\r\n * @docs ../docs/segtree.md\r\n */\r\n\
    \r\n#ifndef lib_segtree\r\n#define lib_segtree\r\n\r\n#ifndef call_include\r\n\
    #define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T, T (*op)(T,T), T (*e)()>\r\nstruct segtree {\r\nprivate:\r\
    \n\tint n=1, siz;\r\n\tvector<T> node;\r\n\tconst T e_ = e();\r\n\r\npublic:\r\
    \n\tsegtree(int s) {\r\n\t\tsiz = s;\r\n\t\twhile(n < siz) n*=2;\r\n\t\tnode.resize(2*n-1,\
    \ e_);\r\n\t}\r\n\tsegtree(int s, T init) {\r\n\t\tsiz = s;\r\n\t\twhile(n < siz)\
    \ n *= 2;\r\n\t\tnode.resize(2*n-1, e_);\r\n\t\tfor(int i=0; i<siz; i++) node[n-1+i]\
    \ = init;\r\n\t\tfor(int i=n-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\
    \n\t}\r\n\tsegtree(vector<T> v) {\r\n\t\tsiz = v.size();\r\n\t\twhile(n < siz)\
    \ n *= 2;\r\n\t\tnode.resize(2*n-1, e_);\r\n\t\tfor(int i=0; i<siz; i++) node[n-1+i]\
    \ = v[i];\r\n\t\tfor(int i=n-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\
    \n\t}\r\n\r\n\tvoid update(int idx, T val) {\r\n\t\tidx += n-1;\r\n\t\tnode[idx]\
    \ = val;\r\n\r\n\t\twhile(idx > 0) {\r\n\t\t\tidx = (idx-1)/2;\r\n\t\t\tnode[idx]\
    \ = op(node[2*idx+1], node[2*idx+2]);\r\n\t\t}\r\n\t}\r\n\r\n\tT get(int idx)\
    \ {\r\n\t\treturn get(idx, idx+1);\r\n\t}\r\n\tT get(int L, int R) {\r\n\t\tif(L\
    \ < 0) L = 0;\r\n\t\tif(R > siz) R = siz;\r\n\t\treturn get__(L, R, 0, 0, n);\r\
    \n\t}\r\nprivate:\r\n\tT get__(int L, int R, int now, int l, int r) {\r\n\t\t\
    if(r<=L || R<=l) return e_;\r\n\t\tif(L<=l && r<=R) return node[now];\r\n\t\t\
    T vl = get__(L, R, 2*now+1, l, (l+r)/2);\r\n\t\tT vr = get__(L, R, 2*now+2, (l+r)/2,\
    \ r);\r\n\t\treturn op(vl, vr);\r\n\t}\r\npublic:\r\n};\r\n\r\n#endif // lib_segtree\r\
    \n"
  code: "/*\r\n * @brief segtree(\u30BB\u30B0\u30E1\u30F3\u30C8\u30C4\u30EA\u30FC\
    )\r\n * @docs ../docs/segtree.md\r\n */\r\n\r\n#ifndef lib_segtree\r\n#define\
    \ lib_segtree\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T,\
    \ T (*op)(T,T), T (*e)()>\r\nstruct segtree {\r\nprivate:\r\n\tint n=1, siz;\r\
    \n\tvector<T> node;\r\n\tconst T e_ = e();\r\n\r\npublic:\r\n\tsegtree(int s)\
    \ {\r\n\t\tsiz = s;\r\n\t\twhile(n < siz) n*=2;\r\n\t\tnode.resize(2*n-1, e_);\r\
    \n\t}\r\n\tsegtree(int s, T init) {\r\n\t\tsiz = s;\r\n\t\twhile(n < siz) n *=\
    \ 2;\r\n\t\tnode.resize(2*n-1, e_);\r\n\t\tfor(int i=0; i<siz; i++) node[n-1+i]\
    \ = init;\r\n\t\tfor(int i=n-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\
    \n\t}\r\n\tsegtree(vector<T> v) {\r\n\t\tsiz = v.size();\r\n\t\twhile(n < siz)\
    \ n *= 2;\r\n\t\tnode.resize(2*n-1, e_);\r\n\t\tfor(int i=0; i<siz; i++) node[n-1+i]\
    \ = v[i];\r\n\t\tfor(int i=n-2; i>=0; i--) node[i] = op(node[2*i+1], node[2*i+2]);\r\
    \n\t}\r\n\r\n\tvoid update(int idx, T val) {\r\n\t\tidx += n-1;\r\n\t\tnode[idx]\
    \ = val;\r\n\r\n\t\twhile(idx > 0) {\r\n\t\t\tidx = (idx-1)/2;\r\n\t\t\tnode[idx]\
    \ = op(node[2*idx+1], node[2*idx+2]);\r\n\t\t}\r\n\t}\r\n\r\n\tT get(int idx)\
    \ {\r\n\t\treturn get(idx, idx+1);\r\n\t}\r\n\tT get(int L, int R) {\r\n\t\tif(L\
    \ < 0) L = 0;\r\n\t\tif(R > siz) R = siz;\r\n\t\treturn get__(L, R, 0, 0, n);\r\
    \n\t}\r\nprivate:\r\n\tT get__(int L, int R, int now, int l, int r) {\r\n\t\t\
    if(r<=L || R<=l) return e_;\r\n\t\tif(L<=l && r<=R) return node[now];\r\n\t\t\
    T vl = get__(L, R, 2*now+1, l, (l+r)/2);\r\n\t\tT vr = get__(L, R, 2*now+2, (l+r)/2,\
    \ r);\r\n\t\treturn op(vl, vr);\r\n\t}\r\npublic:\r\n};\r\n\r\n#endif // lib_segtree\r\
    \n"
  dependsOn: []
  isVerificationFile: false
  path: tree/segtree.cpp
  requiredBy: []
  timestamp: '2020-11-08 11:29:43+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo_staticrmq_2.test.cpp
documentation_of: tree/segtree.cpp
layout: document
redirect_from:
- /library/tree/segtree.cpp
- /library/tree/segtree.cpp.html
title: "segtree(\u30BB\u30B0\u30E1\u30F3\u30C8\u30C4\u30EA\u30FC)"
---
