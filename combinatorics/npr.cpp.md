---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: nPr mod p
    links: []
  bundledCode: "#line 1 \"combinatorics/npr.cpp\"\n/*\r\n * @brief nPr mod p\r\n *\
    \ \r\n */\r\n\r\n#ifndef lib_npr\r\n#define lib_npr\r\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\nlong long nPr(long long n, long long r, long long p=MMPRIME) {\r\
    \n\tif(n < r) return 0LL;\r\n\r\n\tlong long res = 1LL;\r\n\tfor(int i=0; i<r;\
    \ i++) (res*=(n-i))%p;\r\n\treturn res;\r\n}\r\n\r\n#endif // lib_npr\r\n"
  code: "/*\r\n * @brief nPr mod p\r\n * \r\n */\r\n\r\n#ifndef lib_npr\r\n#define\
    \ lib_npr\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\nlong long nPr(long long n, long long r,\
    \ long long p=MMPRIME) {\r\n\tif(n < r) return 0LL;\r\n\r\n\tlong long res = 1LL;\r\
    \n\tfor(int i=0; i<r; i++) (res*=(n-i))%p;\r\n\treturn res;\r\n}\r\n\r\n#endif\
    \ // lib_npr\r\n"
  dependsOn: []
  isVerificationFile: false
  path: combinatorics/npr.cpp
  requiredBy: []
  timestamp: '2020-11-08 17:18:27+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: combinatorics/npr.cpp
layout: document
redirect_from:
- /library/combinatorics/npr.cpp
- /library/combinatorics/npr.cpp.html
title: nPr mod p
---
