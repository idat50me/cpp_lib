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
    \n\n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#endif\n\n#line 1 \"tree/union_find.cpp\"\n/*\n * @brief Union-Find\u6728\
    \n * @docs ./docs/union_find.md\n */\n\n#ifndef lib_union_find\n#define lib_union_find\n\
    \n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#endif\n\nstruct UnionFind {\nprivate:\n\tvector<int> parent;\n\
    \tvector<int> num;\n\tint treenum;\n\npublic:\n\tUnionFind(int n) : parent(n),num(n,1)\
    \ {\n\t\ttreenum=n;\n\t\tfor(int i=0; i<n; i++) {\n\t\t\tparent[i]=i;\n\t\t}\n\
    \t}\n\n\tint root(int x) {\n\t\tassert(x < parent.size());\n\t\tif(parent[x]==x)\
    \ return x;\n\t\treturn parent[x]=root(parent[x]);\n\t}\n\n\tint size(int x) {\n\
    \t\treturn num[root(x)];\n\t}\n\n\tvoid merge(int x, int y) {\n\t\tint xrt=root(x);\n\
    \t\tint yrt=root(y);\n\t\tif(xrt==yrt) return;\n\t\tparent[yrt]=xrt;\n\t\tnum[xrt]+=num[yrt];\n\
    \t\ttreenum--;\n\t}\n\n\tbool same(int x, int y) {\n\t\treturn root(x)==root(y);\n\
    \t}\n\n\tint tnum() {\n\t\treturn treenum;\n\t}\n};\n\n\n#endif // lib_union_find\n\
    #line 10 \"test/yosupo_unionfind.test.cpp\"\n\nint main() {\n\tint N,Q; cin>>N>>Q;\n\
    \tUnionFind uf(N);\n\n\tfor(int i=0; i<Q; i++) {\n\t\tint t,u,v; cin>>t>>u>>v;\n\
    \n\t\tif(t==0) uf.merge(u,v);\n\t\telse cout<<(uf.same(u,v) ? 1 : 0)<<'\\n';\n\
    \t}\n\n\tcout<<flush;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\n\n#ifndef\
    \ call_include\n#define call_include\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#endif\n\n#include \"../tree/union_find.cpp\"\n\nint main() {\n\tint N,Q;\
    \ cin>>N>>Q;\n\tUnionFind uf(N);\n\n\tfor(int i=0; i<Q; i++) {\n\t\tint t,u,v;\
    \ cin>>t>>u>>v;\n\n\t\tif(t==0) uf.merge(u,v);\n\t\telse cout<<(uf.same(u,v) ?\
    \ 1 : 0)<<'\\n';\n\t}\n\n\tcout<<flush;\n}\n"
  dependsOn:
  - tree/union_find.cpp
  isVerificationFile: true
  path: test/yosupo_unionfind.test.cpp
  requiredBy: []
  timestamp: '2020-07-27 16:51:21+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo_unionfind.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_unionfind.test.cpp
- /verify/test/yosupo_unionfind.test.cpp.html
title: test/yosupo_unionfind.test.cpp
---
