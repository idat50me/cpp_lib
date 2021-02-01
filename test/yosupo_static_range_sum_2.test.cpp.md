---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: tree/binary_indexed_tree.cpp
    title: binary_indexed_tree(BIT)
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/static_range_sum
    links:
    - https://judge.yosupo.jp/problem/static_range_sum
  bundledCode: "#line 1 \"test/yosupo_static_range_sum_2.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/static_range_sum\"\r\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\n#line 2 \"tree/binary_indexed_tree.cpp\"\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\ntemplate<typename T>\r\nstruct BIT {\r\nprivate:\r\n\tvector<T>\
    \ node;\r\n\tconst int N;\r\n\r\npublic:\r\n\tBIT(int n) : node(n+1, 0), N(n)\
    \ {}\r\n\tBIT(vector<T>& v) : node(v.size()+1, 0), N(v.size()) {\r\n\t\tfor(int\
    \ i=0; i<N; i++) node[i+1] = v[i];\r\n\t\tfor(int i=1; i<N; i++) {\r\n\t\t\tint\
    \ j = i+(i&-i);\r\n\t\t\tif(j <= N) node[j] += node[i];\r\n\t\t}\r\n\t}\r\n\r\n\
    \tT sum(int idx) {\r\n\t\tassert(0<=idx && idx<=N);\r\n\t\tT res = 0;\r\n\t\t\
    while(idx) {\r\n\t\t\tres += node[idx];\r\n\t\t\tidx -= idx&-idx;\r\n\t\t}\r\n\
    \t\treturn res;\r\n\t}\r\n\r\n\tT sum(int l, int r) {\r\n\t\tassert(0<=l && l<=r\
    \ && r<=N);\r\n\t\treturn sum(r) - sum(l-1);\r\n\t}\r\n\r\n\tvoid add(int idx,\
    \ T& val) {\r\n\t\tassert(0<idx && idx<=N);\r\n\t\twhile(idx <= N) {\r\n\t\t\t\
    node[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\n\t\t}\r\n\t}\r\n\tvoid add(int\
    \ idx, T val) {\r\n\t\tassert(0<idx && idx<=N);\r\n\t\twhile(idx <= N) {\r\n\t\
    \t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\n\t\t}\r\n\t}\r\n};\r\n#line\
    \ 10 \"test/yosupo_static_range_sum_2.test.cpp\"\n\r\nint main() {\r\n\tint N,Q;\
    \ cin>>N>>Q;\r\n\tBIT<long long> bt(N);\r\n\tfor(int i=1; i<=N; i++) {\r\n\t\t\
    int A; cin>>A;\r\n\t\tbt.add(i, A);\r\n\t}\r\n\twhile(Q--) {\r\n\t\tint l,r; cin>>l>>r;\r\
    \n\t\tcout<<bt.sum(l+1,r)<<endl;\r\n\t}\r\n}\r\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\r\n\r\
    \n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\n\
    using namespace std;\r\n#endif\r\n\r\n#include \"tree/binary_indexed_tree.cpp\"\
    \r\n\r\nint main() {\r\n\tint N,Q; cin>>N>>Q;\r\n\tBIT<long long> bt(N);\r\n\t\
    for(int i=1; i<=N; i++) {\r\n\t\tint A; cin>>A;\r\n\t\tbt.add(i, A);\r\n\t}\r\n\
    \twhile(Q--) {\r\n\t\tint l,r; cin>>l>>r;\r\n\t\tcout<<bt.sum(l+1,r)<<endl;\r\n\
    \t}\r\n}\r\n"
  dependsOn:
  - tree/binary_indexed_tree.cpp
  isVerificationFile: true
  path: test/yosupo_static_range_sum_2.test.cpp
  requiredBy: []
  timestamp: '2021-02-01 01:40:48+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo_static_range_sum_2.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_static_range_sum_2.test.cpp
- /verify/test/yosupo_static_range_sum_2.test.cpp.html
title: test/yosupo_static_range_sum_2.test.cpp
---
