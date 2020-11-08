---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_2.test.cpp
    title: test/aoj_ALDS1_1_C_2.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "Isprime(\u7D20\u6570\u5224\u5B9A)"
    links: []
  bundledCode: "#line 1 \"math/isprime.cpp\"\n/*\r\n * @brief Isprime(\u7D20\u6570\
    \u5224\u5B9A)\r\n */\r\n\r\n#ifndef lib_isprime\r\n#define lib_isprime\r\n\r\n\
    #ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing\
    \ namespace std;\r\n#endif\r\n\r\nbool isprime(long long n) {\r\n\tif (n<2) return\
    \ false;\r\n\tif (n==2) return true;\r\n\tif (n%2==0) return false;\r\n\r\n\t\
    for (long long i=3; i*i<=n; i+=2) if (n%i==0) return false;\r\n\r\n\treturn true;\r\
    \n}\r\n\r\n#endif // lib_isprime\r\n"
  code: "/*\r\n * @brief Isprime(\u7D20\u6570\u5224\u5B9A)\r\n */\r\n\r\n#ifndef lib_isprime\r\
    \n#define lib_isprime\r\n\r\n#ifndef call_include\r\n#define call_include\r\n\
    #include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nbool isprime(long\
    \ long n) {\r\n\tif (n<2) return false;\r\n\tif (n==2) return true;\r\n\tif (n%2==0)\
    \ return false;\r\n\r\n\tfor (long long i=3; i*i<=n; i+=2) if (n%i==0) return\
    \ false;\r\n\r\n\treturn true;\r\n}\r\n\r\n#endif // lib_isprime\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/isprime.cpp
  requiredBy: []
  timestamp: '2020-11-08 20:39:46+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ALDS1_1_C_2.test.cpp
documentation_of: math/isprime.cpp
layout: document
redirect_from:
- /library/math/isprime.cpp
- /library/math/isprime.cpp.html
title: "Isprime(\u7D20\u6570\u5224\u5B9A)"
---
