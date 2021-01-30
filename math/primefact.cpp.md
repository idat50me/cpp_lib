---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_A_2.test.cpp
    title: test/aoj_NTL_1_A_2.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/primefact.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nvector<pair<long long, int>> primefact(long long x) {\r\n\tvector<pair<long\
    \ long, int>> res;\r\n\r\n\tfor(long long i=2; i*i<=x; i++) {\r\n\t\tif(x % i)\
    \ continue;\r\n\r\n\t\tint ex = 0;\r\n\t\twhile(x%i == 0) {\r\n\t\t\tx /= i;\r\
    \n\t\t\tex++;\r\n\t\t}\r\n\t\tres.emplace_back(i, ex);\r\n\t}\r\n\r\n\tif(x >\
    \ 1) res.emplace_back(x, 1);\r\n\r\n\treturn res;\r\n}\r\n\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nvector<pair<long long,\
    \ int>> primefact(long long x) {\r\n\tvector<pair<long long, int>> res;\r\n\r\n\
    \tfor(long long i=2; i*i<=x; i++) {\r\n\t\tif(x % i) continue;\r\n\r\n\t\tint\
    \ ex = 0;\r\n\t\twhile(x%i == 0) {\r\n\t\t\tx /= i;\r\n\t\t\tex++;\r\n\t\t}\r\n\
    \t\tres.emplace_back(i, ex);\r\n\t}\r\n\r\n\tif(x > 1) res.emplace_back(x, 1);\r\
    \n\r\n\treturn res;\r\n}\r\n\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/primefact.cpp
  requiredBy: []
  timestamp: '2021-01-30 17:39:38+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_NTL_1_A_2.test.cpp
documentation_of: math/primefact.cpp
layout: document
redirect_from:
- /library/math/primefact.cpp
- /library/math/primefact.cpp.html
title: math/primefact.cpp
---
