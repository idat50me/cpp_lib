---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: math/inversion_number.cpp
    title: math/inversion_number.cpp
  - icon: ':question:'
    path: tree/binary_indexed_tree.cpp
    title: binary_indexed_tree(BIT)
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_5_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_5_D
  bundledCode: "#line 1 \"test/aoj_ALDS1_5_D.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_5_D\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"math/inversion_number.cpp\"\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"tree/binary_indexed_tree.cpp\"\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\nstruct BIT {\r\
    \nprivate:\r\n\tvector<T> node;\r\n\tconst int N;\r\n\r\npublic:\r\n\tBIT(int\
    \ n) : node(n+1, 0), N(n) {}\r\n\tBIT(vector<T>& v) : node(v.size()+1, 0), N(v.size())\
    \ {\r\n\t\tfor(int i=0; i<N; i++) node[i+1] = v[i];\r\n\t\tfor(int i=1; i<N; i++)\
    \ {\r\n\t\t\tint j = i+(i&-i);\r\n\t\t\tif(j <= N) node[j] += node[i];\r\n\t\t\
    }\r\n\t}\r\n\r\n\tT sum(int idx) {\r\n\t\tassert(0<=idx && idx<=N);\r\n\t\tT res\
    \ = 0;\r\n\t\twhile(idx) {\r\n\t\t\tres += node[idx];\r\n\t\t\tidx -= idx&-idx;\r\
    \n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\r\n\tT sum(int l, int r) {\r\n\t\tassert(0<=l\
    \ && l<=r && r<=N);\r\n\t\treturn sum(r) - sum(l-1);\r\n\t}\r\n\r\n\tvoid add(int\
    \ idx, T& val) {\r\n\t\tassert(0<idx && idx<=N);\r\n\t\twhile(idx <= N) {\r\n\t\
    \t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\n\t\t}\r\n\t}\r\n\tvoid add(int\
    \ idx, T val) {\r\n\t\tassert(0<idx && idx<=N);\r\n\t\twhile(idx <= N) {\r\n\t\
    \t\tnode[idx] += val;\r\n\t\t\tidx += idx&-idx;\r\n\t\t}\r\n\t}\r\n};\r\n#line\
    \ 10 \"math/inversion_number.cpp\"\n\r\ntemplate<typename T>\r\nlong long inv_count(vector<T>\
    \ &v) {\r\n\tint N = v.size();\r\n\tlong long res = 0;\r\n\tBIT<T> bt(v);\r\n\t\
    map<T, int> mp;\r\n\tfor(T &a: v) mp.emplace(a, 0);\r\n\tint i = 1;\r\n\tfor(auto\
    \ &a: mp) {\r\n\t\ta.second = i;\r\n\t\ti++;\r\n\t}\r\n\r\n\tfor(T &a: v) {\r\n\
    \t\tbt.add(mp[a], 1);\r\n\t\tres += bt.sum(mp[a]+1, N);\r\n\t}\r\n\r\n\treturn\
    \ res;\r\n}\r\n#line 10 \"test/aoj_ALDS1_5_D.test.cpp\"\n\r\nint main() {\r\n\t\
    int N; cin>>N;\r\n\tvector<int> A(N);\r\n\tfor(int &a: A) cin>>a;\r\n\tcout<<inv_count(A)<<endl;\r\
    \n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_5_D\"\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"math/inversion_number.cpp\"\
    \r\n\r\nint main() {\r\n\tint N; cin>>N;\r\n\tvector<int> A(N);\r\n\tfor(int &a:\
    \ A) cin>>a;\r\n\tcout<<inv_count(A)<<endl;\r\n}\r\n"
  dependsOn:
  - math/inversion_number.cpp
  - tree/binary_indexed_tree.cpp
  isVerificationFile: true
  path: test/aoj_ALDS1_5_D.test.cpp
  requiredBy: []
  timestamp: '2021-02-02 19:50:42+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj_ALDS1_5_D.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ALDS1_5_D.test.cpp
- /verify/test/aoj_ALDS1_5_D.test.cpp.html
title: test/aoj_ALDS1_5_D.test.cpp
---
