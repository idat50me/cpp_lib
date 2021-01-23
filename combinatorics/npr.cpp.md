---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    links: []
  bundledCode: "#line 2 \"combinatorics/npr.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nlong long nPr(long long n, long long r, long long p=(1LL<<61)-1) {\r\n\t\
    if(n < r) return 0LL;\r\n\r\n\tlong long res = 1LL;\r\n\tfor(int i=0; i<r; i++)\
    \ (res*=(n-i)) %= p;\r\n\treturn res;\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nlong long nPr(long\
    \ long n, long long r, long long p=(1LL<<61)-1) {\r\n\tif(n < r) return 0LL;\r\
    \n\r\n\tlong long res = 1LL;\r\n\tfor(int i=0; i<r; i++) (res*=(n-i)) %= p;\r\n\
    \treturn res;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: combinatorics/npr.cpp
  requiredBy: []
  timestamp: '2020-11-16 10:57:59+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: combinatorics/npr.cpp
layout: document
redirect_from:
- /library/combinatorics/npr.cpp
- /library/combinatorics/npr.cpp.html
title: combinatorics/npr.cpp
---
