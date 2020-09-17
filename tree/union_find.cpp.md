---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo_unionfind.test.cpp
    title: test/yosupo_unionfind.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0556.test.cpp
    title: test/yuki_0556.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DSL_1_A.test.cpp
    title: test/aoj_DSL_1_A.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    _deprecated_at_docs: ./docs/union_find.md
    document_title: "Union-Find\u6728"
    links: []
  bundledCode: "#line 1 \"tree/union_find.cpp\"\n/*\n * @brief Union-Find\u6728\n\
    \ * @docs ./docs/union_find.md\n */\n\n#ifndef lib_union_find\n#define lib_union_find\n\
    \n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#endif\n\nstruct UnionFind {\nprivate:\n\tvector<int> parent;\n\
    \tvector<int> num;\n\tint treenum;\n\npublic:\n\tUnionFind(int n) : parent(n),num(n,1)\
    \ {\n\t\ttreenum=n;\n\t\tfor(int i=0; i<n; i++) {\n\t\t\tparent[i]=i;\n\t\t}\n\
    \t}\n\n\tint root(int x) {\n\t\tassert(x < parent.size());\n\t\tif(parent[x]==x)\
    \ return x;\n\t\treturn parent[x]=root(parent[x]);\n\t}\n\n\tint size(int x) {\n\
    \t\treturn num[root(x)];\n\t}\n\n\tvoid merge(int x, int y) {\n\t\tint xrt=root(x);\n\
    \t\tint yrt=root(y);\n\t\tif(xrt==yrt) return;\n\t\tparent[yrt]=xrt;\n\t\tnum[xrt]+=num[yrt];\n\
    \t\ttreenum--;\n\t}\n\n\tbool same(int x, int y) {\n\t\treturn root(x)==root(y);\n\
    \t}\n\n\tint tnum() {\n\t\treturn treenum;\n\t}\n};\n\n\n#endif // lib_union_find\n"
  code: "/*\n * @brief Union-Find\u6728\n * @docs ./docs/union_find.md\n */\n\n#ifndef\
    \ lib_union_find\n#define lib_union_find\n\n#ifndef call_include\n#define call_include\n\
    #include <bits/stdc++.h>\nusing namespace std;\n#endif\n\nstruct UnionFind {\n\
    private:\n\tvector<int> parent;\n\tvector<int> num;\n\tint treenum;\n\npublic:\n\
    \tUnionFind(int n) : parent(n),num(n,1) {\n\t\ttreenum=n;\n\t\tfor(int i=0; i<n;\
    \ i++) {\n\t\t\tparent[i]=i;\n\t\t}\n\t}\n\n\tint root(int x) {\n\t\tassert(x\
    \ < parent.size());\n\t\tif(parent[x]==x) return x;\n\t\treturn parent[x]=root(parent[x]);\n\
    \t}\n\n\tint size(int x) {\n\t\treturn num[root(x)];\n\t}\n\n\tvoid merge(int\
    \ x, int y) {\n\t\tint xrt=root(x);\n\t\tint yrt=root(y);\n\t\tif(xrt==yrt) return;\n\
    \t\tparent[yrt]=xrt;\n\t\tnum[xrt]+=num[yrt];\n\t\ttreenum--;\n\t}\n\n\tbool same(int\
    \ x, int y) {\n\t\treturn root(x)==root(y);\n\t}\n\n\tint tnum() {\n\t\treturn\
    \ treenum;\n\t}\n};\n\n\n#endif // lib_union_find\n"
  dependsOn: []
  isVerificationFile: false
  path: tree/union_find.cpp
  requiredBy: []
  timestamp: '2020-07-27 16:51:21+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo_unionfind.test.cpp
  - test/yuki_0556.test.cpp
  - test/aoj_DSL_1_A.test.cpp
documentation_of: tree/union_find.cpp
layout: document
redirect_from:
- /library/tree/union_find.cpp
- /library/tree/union_find.cpp.html
title: "Union-Find\u6728"
---
