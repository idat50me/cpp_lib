---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/binpow.cpp
    title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B
  bundledCode: "#line 1 \"test/aoj_NTL_1_B.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 1 \"pre/macros.cpp\"\n\n\n\r\nusing\
    \ ll = long long;\r\n\r\n#define MPRIME (ll)(1e9+7)\r\n#define MMPRIME ((1LL<<61)-1)\r\
    \n\r\n\n#line 1 \"math/binpow.cpp\"\n/*\r\n * @brief Binary-Power(\u7E70\u308A\
    \u8FD4\u3057\u4E8C\u4E57\u6CD5)\r\n */\r\n\r\n#ifndef lib_binpow\r\n#define lib_binpow\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\nlong long binpow(long long a, long long\
    \ ex, long long p=(1LL<<60)) {\r\n\tlong long res = 1;\r\n\twhile(ex > 0) {\r\n\
    \t\tif(ex & 1) res = res*a%p;\r\n\t\tex>>=1;\r\n\t\ta = a*a%p;\r\n\t}\r\n\treturn\
    \ res;\r\n}\r\n\r\n#endif /* lib_binpow */\n#line 11 \"test/aoj_NTL_1_B.test.cpp\"\
    \n\r\nint main() {\r\n\tint m,n; cin>>m>>n;\r\n\tcout<<binpow(m,n,MPRIME)<<endl;\r\
    \n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/all/NTL_1_B\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"../pre/macros.cpp\"\r\n#include\
    \ \"../math/binpow.cpp\"\r\n\r\nint main() {\r\n\tint m,n; cin>>m>>n;\r\n\tcout<<binpow(m,n,MPRIME)<<endl;\r\
    \n}\r\n"
  dependsOn:
  - pre/macros.cpp
  - math/binpow.cpp
  isVerificationFile: true
  path: test/aoj_NTL_1_B.test.cpp
  requiredBy: []
  timestamp: '2020-11-08 20:39:46+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_NTL_1_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_NTL_1_B.test.cpp
- /verify/test/aoj_NTL_1_B.test.cpp.html
title: test/aoj_NTL_1_B.test.cpp
---
