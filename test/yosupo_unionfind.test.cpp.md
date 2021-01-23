---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: graph/union_find.cpp
    title: "Union-Find\u6728"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/unionfind
    links:
    - https://judge.yosupo.jp/problem/unionfind
  bundledCode: "#line 1 \"test/yosupo_unionfind.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"graph/union_find.cpp\"\n\r\n\
    #ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing\
    \ namespace std;\r\n#endif\r\n\r\ntemplate <class T = int>\r\nstruct UnionFind\
    \ {\r\nprivate:\r\n\tvector<int> parent;\r\n\tvector<int> num;\r\n\tvector<T>\
    \ val;\r\n\tint treenum;\r\n\r\n\tconst function<bool(int,int,T&,T&)> swap_flg\
    \ = [this](const int l, const int r, const T&, const T&) {\r\n\t\treturn num[l]\
    \ < num[r];\r\n\t};\r\n\tconst function<void(T&,T&)> merge_val = [this](T&, const\
    \ T&){};\r\n\r\npublic:\r\n\tUnionFind(int n) : parent(n), num(n,1), treenum(n)\
    \ {\r\n\t\tfor(int i=0; i<n; i++) parent[i] = i;\r\n\t}\r\n\tUnionFind(int n,\
    \ function<bool(int,int,T&,T&)> f1) : parent(n), num(n,1), val(n), treenum(n),\
    \ swap_flg(f1) {\r\n\t\tfor(int i=0; i<n; i++) parent[i] = i;\r\n\t}\r\n\tUnionFind(int\
    \ n, function<bool(int,int,T&,T&)> f1, const function<void(T&,T&)> f2) : parent(n),\
    \ num(n,1), val(n), treenum(n), swap_flg(f1), merge_val(f2) {\r\n\t\tfor(int i=0;\
    \ i<n; i++) parent[i] = i;\r\n\t}\r\n\tUnionFind(vector<T> &v, function<bool(int,int,T&,T&)>\
    \ f1, const function<void(T&,T&)> f2) : parent(v.size()), num(v.size(),1), val(v),\
    \ treenum(v.size()), swap_flg(f1), merge_val(f2) {\r\n\t\tfor(int i=0; i<v.size();\
    \ i++) parent[i] = i;\r\n\t}\r\n\r\n\tint root(int x) {\r\n\t\tassert(x < parent.size());\r\
    \n\t\tif(parent[x] == x) return x;\r\n\t\treturn parent[x] = root(parent[x]);\r\
    \n\t}\r\n\r\n\tint size(int x) {\r\n\t\tassert(x < parent.size());\r\n\t\treturn\
    \ num[root(x)];\r\n\t}\r\n\r\n\tint merge(int x, int y) {\r\n\t\tassert(x < parent.size()\
    \ && y < parent.size());\r\n\t\tint xrt = root(x);\r\n\t\tint yrt = root(y);\r\
    \n\t\tif(xrt == yrt) return xrt;\r\n\t\tif(swap_flg(xrt,yrt,val[xrt],val[yrt]))\
    \ swap(xrt,yrt);\r\n\t\tparent[yrt] = xrt;\r\n\t\tnum[xrt] += num[yrt];\r\n\t\t\
    merge_val(val[xrt],val[yrt]);\r\n\t\ttreenum--;\r\n\t\treturn xrt;\r\n\t}\r\n\r\
    \n\tbool same(int x, int y) {\r\n\t\tassert(x < parent.size() && y < parent.size());\r\
    \n\t\treturn root(x) == root(y);\r\n\t}\r\n\r\n\tint tnum() {\r\n\t\treturn treenum;\r\
    \n\t}\r\n\r\n\tinline T& operator[](int x) {\r\n\t\tassert(x < parent.size());\r\
    \n\t\treturn val[x];\r\n\t}\r\n};\r\n#line 10 \"test/yosupo_unionfind.test.cpp\"\
    \n\r\nint main() {\r\n\tint N,Q; cin>>N>>Q;\r\n\tUnionFind uf(N);\r\n\r\n\tfor(int\
    \ i=0; i<Q; i++) {\r\n\t\tint t,u,v; cin>>t>>u>>v;\r\n\r\n\t\tif(t==0) uf.merge(u,v);\r\
    \n\t\telse cout<<(uf.same(u,v) ? 1 : 0)<<'\\n';\r\n\t}\r\n\r\n\tcout<<flush;\r\
    \n}\r\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/unionfind\"\r\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\n#include \"graph/union_find.cpp\"\r\n\r\nint main() {\r\
    \n\tint N,Q; cin>>N>>Q;\r\n\tUnionFind uf(N);\r\n\r\n\tfor(int i=0; i<Q; i++)\
    \ {\r\n\t\tint t,u,v; cin>>t>>u>>v;\r\n\r\n\t\tif(t==0) uf.merge(u,v);\r\n\t\t\
    else cout<<(uf.same(u,v) ? 1 : 0)<<'\\n';\r\n\t}\r\n\r\n\tcout<<flush;\r\n}\r\n"
  dependsOn:
  - graph/union_find.cpp
  isVerificationFile: true
  path: test/yosupo_unionfind.test.cpp
  requiredBy: []
  timestamp: '2021-01-11 18:38:51+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo_unionfind.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_unionfind.test.cpp
- /verify/test/yosupo_unionfind.test.cpp.html
title: test/yosupo_unionfind.test.cpp
---
