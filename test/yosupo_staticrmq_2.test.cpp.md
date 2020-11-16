---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: tree/segtree.cpp
    title: "segtree(\u30BB\u30B0\u30E1\u30F3\u30C8\u6728)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/staticrmq
    links:
    - https://judge.yosupo.jp/problem/staticrmq
  bundledCode: "#line 1 \"test/yosupo_staticrmq_2.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"tree/segtree.cpp\"\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\ntemplate<typename T, T (*op)(T,T), T (*e)()>\r\nstruct\
    \ segtree {\r\nprivate:\r\n\tint siz=1, N;\r\n\tvector<T> node;\r\n\tconst T e_\
    \ = e();\r\n\r\npublic:\r\n\tsegtree(int n, T init) {\r\n\t\tN = n;\r\n\t\twhile(siz\
    \ < N) siz *= 2;\r\n\t\tnode.resize(2*siz-1, e_);\r\n\t\tfor(int i=0; i<N; i++)\
    \ node[siz-1+i] = init;\r\n\t\tfor(int i=siz-2; i>=0; i--) node[i] = op(node[2*i+1],\
    \ node[2*i+2]);\r\n\t}\r\n\tsegtree(vector<T> v) {\r\n\t\tN = v.size();\r\n\t\t\
    while(siz < N) siz *= 2;\r\n\t\tnode.resize(2*siz-1, e_);\r\n\t\tfor(int i=0;\
    \ i<N; i++) node[siz-1+i] = v[i];\r\n\t\tfor(int i=siz-2; i>=0; i--) node[i] =\
    \ op(node[2*i+1], node[2*i+2]);\r\n\t}\r\n\r\n\tvoid update(int idx, T val) {\r\
    \n\t\tidx += siz-1;\r\n\t\tnode[idx] = val;\r\n\r\n\t\twhile(idx > 0) {\r\n\t\t\
    \tidx = (idx-1)/2;\r\n\t\t\tnode[idx] = op(node[2*idx+1], node[2*idx+2]);\r\n\t\
    \t}\r\n\t}\r\n\r\n\tT get(int idx) {\r\n\t\treturn get(idx, idx+1);\r\n\t}\r\n\
    \tT get(int L, int R) {\r\n\t\tif(L < 0) L = 0;\r\n\t\tif(R > N) R = N;\r\n\t\t\
    return get__(L, R, 0, 0, siz);\r\n\t}\r\nprivate:\r\n\tT get__(int L, int R, int\
    \ id, int l, int r) {\r\n\t\tif(r<=L || R<=l) return e_;\r\n\t\tif(L<=l && r<=R)\
    \ return node[id];\r\n\t\tT vl = get__(L, R, 2*id+1, l, (l+r)/2);\r\n\t\tT vr\
    \ = get__(L, R, 2*id+2, (l+r)/2, r);\r\n\t\treturn op(vl, vr);\r\n\t}\r\npublic:\r\
    \n};\r\n#line 10 \"test/yosupo_staticrmq_2.test.cpp\"\n\r\nint op(int l, int r)\
    \ {\r\n\treturn min(l,r);\r\n}\r\n\r\nint e() {\r\n\treturn numeric_limits<int>::max();\r\
    \n}\r\n\r\nint main() {\r\n\tint N,Q;\r\n\tvector<int> v;\r\n\r\n\tcin>>N>>Q;\r\
    \n\tv.resize(N);\r\n\tfor(int i=0; i<N; i++) cin>>v[i];\r\n\tsegtree<int, op,\
    \ e> tree(v);\r\n\r\n\tfor(int i=0; i<Q; i++) {\r\n\t\tint l,r; cin>>l>>r;\r\n\
    \t\tcout<<tree.get(l,r)<<'\\n';\r\n\t}\r\n\tcout<<flush;\r\n}\r\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\r\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\n#include \"tree/segtree.cpp\"\r\n\r\nint op(int l, int\
    \ r) {\r\n\treturn min(l,r);\r\n}\r\n\r\nint e() {\r\n\treturn numeric_limits<int>::max();\r\
    \n}\r\n\r\nint main() {\r\n\tint N,Q;\r\n\tvector<int> v;\r\n\r\n\tcin>>N>>Q;\r\
    \n\tv.resize(N);\r\n\tfor(int i=0; i<N; i++) cin>>v[i];\r\n\tsegtree<int, op,\
    \ e> tree(v);\r\n\r\n\tfor(int i=0; i<Q; i++) {\r\n\t\tint l,r; cin>>l>>r;\r\n\
    \t\tcout<<tree.get(l,r)<<'\\n';\r\n\t}\r\n\tcout<<flush;\r\n}\r\n"
  dependsOn:
  - tree/segtree.cpp
  isVerificationFile: true
  path: test/yosupo_staticrmq_2.test.cpp
  requiredBy: []
  timestamp: '2020-11-16 10:57:59+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo_staticrmq_2.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_staticrmq_2.test.cpp
- /verify/test/yosupo_staticrmq_2.test.cpp.html
title: test/yosupo_staticrmq_2.test.cpp
---
