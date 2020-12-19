---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_E.test.cpp
    title: test/aoj_NTL_1_E.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/extgcd.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nlong long\
    \ extgcd(long long a, long long b, long long &x, long long &y) {\r\n\tif(b ==\
    \ 0) {\r\n\t\tx = 1; y = 0;\r\n\t\treturn a;\r\n\t}\r\n\tlong long d = extgcd(b,\
    \ a%b, y, x);\r\n\ty -= a/b*x;\r\n\treturn d;\r\n}\r\n\r\nlong long extgcd(long\
    \ long a, long long b, long long c, long long &x, long long &y) {\r\n\tlong long\
    \ d = extgcd(a, b, x, y);\r\n\tif(c%d) return -1;\r\n\tx *= c/d;\r\n\ty *= c/d;\r\
    \n\treturn d;\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nlong long extgcd(long\
    \ long a, long long b, long long &x, long long &y) {\r\n\tif(b == 0) {\r\n\t\t\
    x = 1; y = 0;\r\n\t\treturn a;\r\n\t}\r\n\tlong long d = extgcd(b, a%b, y, x);\r\
    \n\ty -= a/b*x;\r\n\treturn d;\r\n}\r\n\r\nlong long extgcd(long long a, long\
    \ long b, long long c, long long &x, long long &y) {\r\n\tlong long d = extgcd(a,\
    \ b, x, y);\r\n\tif(c%d) return -1;\r\n\tx *= c/d;\r\n\ty *= c/d;\r\n\treturn\
    \ d;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/extgcd.cpp
  requiredBy: []
  timestamp: '2020-12-19 23:57:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_NTL_1_E.test.cpp
documentation_of: math/extgcd.cpp
layout: document
redirect_from:
- /library/math/extgcd.cpp
- /library/math/extgcd.cpp.html
title: math/extgcd.cpp
---
