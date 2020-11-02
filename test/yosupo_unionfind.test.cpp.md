---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: tree/union_find.cpp
    title: "Union-Find\u6728"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"test/yosupo_unionfind.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 1 \"tree/union_find.cpp\"\n/*\r\n\
    \ * @brief Union-Find\u6728\r\n * @docs ./docs/union_find.md\r\n */\r\n\r\n#ifndef\
    \ lib_union_find\r\n#define lib_union_find\r\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nstruct UnionFind {\r\nprivate:\r\n\tvector<int> parent;\r\n\tvector<int>\
    \ num;\r\n\tint treenum;\r\n\r\npublic:\r\n\tUnionFind(int n) : parent(n),num(n,1)\
    \ {\r\n\t\ttreenum=n;\r\n\t\tfor(int i=0; i<n; i++) {\r\n\t\t\tparent[i]=i;\r\n\
    \t\t}\r\n\t}\r\n\r\n\tint root(int x) {\r\n\t\tassert(x < parent.size());\r\n\t\
    \tif(parent[x]==x) return x;\r\n\t\treturn parent[x]=root(parent[x]);\r\n\t}\r\
    \n\r\n\tint size(int x) {\r\n\t\treturn num[root(x)];\r\n\t}\r\n\r\n\tvoid merge(int\
    \ x, int y) {\r\n\t\tint xrt=root(x);\r\n\t\tint yrt=root(y);\r\n\t\tif(xrt==yrt)\
    \ return;\r\n\t\tparent[yrt]=xrt;\r\n\t\tnum[xrt]+=num[yrt];\r\n\t\ttreenum--;\r\
    \n\t}\r\n\r\n\tbool same(int x, int y) {\r\n\t\treturn root(x)==root(y);\r\n\t\
    }\r\n\r\n\tint tnum() {\r\n\t\treturn treenum;\r\n\t}\r\n};\r\n\r\n\r\n#endif\
    \ // lib_union_find\r\n#line 10 \"test/yosupo_unionfind.test.cpp\"\n\r\nint main()\
    \ {\r\n\tint N,Q; cin>>N>>Q;\r\n\tUnionFind uf(N);\r\n\r\n\tfor(int i=0; i<Q;\
    \ i++) {\r\n\t\tint t,u,v; cin>>t>>u>>v;\r\n\r\n\t\tif(t==0) uf.merge(u,v);\r\n\
    \t\telse cout<<(uf.same(u,v) ? 1 : 0)<<'\\n';\r\n\t}\r\n\r\n\tcout<<flush;\r\n\
    }\r\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\r\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\n#include \"../tree/union_find.cpp\"\r\n\r\nint main()\
    \ {\r\n\tint N,Q; cin>>N>>Q;\r\n\tUnionFind uf(N);\r\n\r\n\tfor(int i=0; i<Q;\
    \ i++) {\r\n\t\tint t,u,v; cin>>t>>u>>v;\r\n\r\n\t\tif(t==0) uf.merge(u,v);\r\n\
    \t\telse cout<<(uf.same(u,v) ? 1 : 0)<<'\\n';\r\n\t}\r\n\r\n\tcout<<flush;\r\n\
    }\r\n"
  dependsOn:
  - tree/union_find.cpp
  isVerificationFile: true
  path: test/yosupo_unionfind.test.cpp
  requiredBy: []
  timestamp: '2020-11-02 12:20:09+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo_unionfind.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_unionfind.test.cpp
- /verify/test/yosupo_unionfind.test.cpp.html
title: test/yosupo_unionfind.test.cpp
---
