---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_B.test.cpp
    title: test/aoj_NTL_1_B.test.cpp
  - icon: ':x:'
    path: test/yuki_1035.test.cpp
    title: test/yuki_1035.test.cpp
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':question:'
  attributes:
    document_title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
    links: []
  bundledCode: "#line 2 \"math/binpow.cpp\"\n/*\r\n * @brief Binary-Power(\u7E70\u308A\
    \u8FD4\u3057\u4E8C\u4E57\u6CD5)\r\n */\r\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nlong long binpow(long long a, long long ex, long long p = (1LL<<61)-1) {\r\
    \n\tlong long res = 1;\r\n\twhile(ex > 0) {\r\n\t\tif(ex & 1) (res*=a) %= p;\r\
    \n\t\tex >>= 1;\r\n\t\t(a*=a) %= p;\r\n\t}\r\n\treturn res;\r\n}\r\n"
  code: "#pragma once\r\n/*\r\n * @brief Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\
    \u4E57\u6CD5)\r\n */\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nlong long binpow(long\
    \ long a, long long ex, long long p = (1LL<<61)-1) {\r\n\tlong long res = 1;\r\
    \n\twhile(ex > 0) {\r\n\t\tif(ex & 1) (res*=a) %= p;\r\n\t\tex >>= 1;\r\n\t\t\
    (a*=a) %= p;\r\n\t}\r\n\treturn res;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/binpow.cpp
  requiredBy: []
  timestamp: '2021-01-30 16:48:29+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/aoj_NTL_1_B.test.cpp
  - test/yuki_1035.test.cpp
documentation_of: math/binpow.cpp
layout: document
redirect_from:
- /library/math/binpow.cpp
- /library/math/binpow.cpp.html
title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
---
