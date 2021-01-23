---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: test/aoj_0019.cpp
    title: test/aoj_0019.cpp
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "Factorial(\u968E\u4E57)"
    links: []
  bundledCode: "#line 2 \"math/factorial.cpp\"\n/*\r\n * @brief Factorial(\u968E\u4E57\
    )\r\n */\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\nlong long factorial(int x, long long p=(1LL<<62)-1)\
    \ {\r\n\tlong long res = 1;\r\n\tfor(int i=2; i<=x; i++) (res*=i) %= p;\r\n\t\
    return res;\r\n}\r\n"
  code: "#pragma once\r\n/*\r\n * @brief Factorial(\u968E\u4E57)\r\n */\r\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\nlong long factorial(int x, long long p=(1LL<<62)-1) {\r\
    \n\tlong long res = 1;\r\n\tfor(int i=2; i<=x; i++) (res*=i) %= p;\r\n\treturn\
    \ res;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/factorial.cpp
  requiredBy:
  - test/aoj_0019.cpp
  timestamp: '2020-11-16 10:57:59+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/factorial.cpp
layout: document
redirect_from:
- /library/math/factorial.cpp
- /library/math/factorial.cpp.html
title: "Factorial(\u968E\u4E57)"
---
