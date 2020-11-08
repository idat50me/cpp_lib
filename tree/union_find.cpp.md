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
    _deprecated_at_docs: docs/union_find.md
    document_title: "Union-Find\u6728"
    links: []
  bundledCode: "#line 1 \"tree/union_find.cpp\"\n/*\r\n * @brief Union-Find\u6728\r\
    \n * @docs docs/union_find.md\r\n */\r\n\r\n#ifndef lib_union_find\r\n#define\
    \ lib_union_find\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nstruct UnionFind {\r\
    \nprivate:\r\n\tvector<int> parent;\r\n\tvector<int> num;\r\n\tint treenum;\r\n\
    \r\npublic:\r\n\tUnionFind(int n) : parent(n),num(n,1) {\r\n\t\ttreenum=n;\r\n\
    \t\tfor(int i=0; i<n; i++) {\r\n\t\t\tparent[i]=i;\r\n\t\t}\r\n\t}\r\n\r\n\tint\
    \ root(int x) {\r\n\t\tassert(x < parent.size());\r\n\t\tif(parent[x]==x) return\
    \ x;\r\n\t\treturn parent[x]=root(parent[x]);\r\n\t}\r\n\r\n\tint size(int x)\
    \ {\r\n\t\treturn num[root(x)];\r\n\t}\r\n\r\n\tvoid merge(int x, int y) {\r\n\
    \t\tint xrt=root(x);\r\n\t\tint yrt=root(y);\r\n\t\tif(xrt==yrt) return;\r\n\t\
    \tparent[yrt]=xrt;\r\n\t\tnum[xrt]+=num[yrt];\r\n\t\ttreenum--;\r\n\t}\r\n\r\n\
    \tbool same(int x, int y) {\r\n\t\treturn root(x)==root(y);\r\n\t}\r\n\r\n\tint\
    \ tnum() {\r\n\t\treturn treenum;\r\n\t}\r\n};\r\n\r\n\r\n#endif // lib_union_find\r\
    \n"
  code: "/*\r\n * @brief Union-Find\u6728\r\n * @docs docs/union_find.md\r\n */\r\n\
    \r\n#ifndef lib_union_find\r\n#define lib_union_find\r\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\nstruct UnionFind {\r\nprivate:\r\n\tvector<int> parent;\r\n\tvector<int>\
    \ num;\r\n\tint treenum;\r\n\r\npublic:\r\n\tUnionFind(int n) : parent(n),num(n,1)\
    \ {\r\n\t\ttreenum=n;\r\n\t\tfor(int i=0; i<n; i++) {\r\n\t\t\tparent[i]=i;\r\n\
    \t\t}\r\n\t}\r\n\r\n\tint root(int x) {\r\n\t\tassert(x < parent.size());\r\n\t\
    \tif(parent[x]==x) return x;\r\n\t\treturn parent[x]=root(parent[x]);\r\n\t}\r\
    \n\r\n\tint size(int x) {\r\n\t\treturn num[root(x)];\r\n\t}\r\n\r\n\tvoid merge(int\
    \ x, int y) {\r\n\t\tint xrt=root(x);\r\n\t\tint yrt=root(y);\r\n\t\tif(xrt==yrt)\
    \ return;\r\n\t\tparent[yrt]=xrt;\r\n\t\tnum[xrt]+=num[yrt];\r\n\t\ttreenum--;\r\
    \n\t}\r\n\r\n\tbool same(int x, int y) {\r\n\t\treturn root(x)==root(y);\r\n\t\
    }\r\n\r\n\tint tnum() {\r\n\t\treturn treenum;\r\n\t}\r\n};\r\n\r\n\r\n#endif\
    \ // lib_union_find\r\n"
  dependsOn: []
  isVerificationFile: false
  path: tree/union_find.cpp
  requiredBy: []
  timestamp: '2020-11-08 11:20:04+09:00'
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
