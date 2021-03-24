---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_2.test.cpp
    title: test/aoj_ALDS1_1_C_2.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/isprime.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nbool isprime(long long n) {\r\n\tif(n == 2) return true;\r\n\tif(n < 2 ||\
    \ n % 2 == 0) return false;\r\n\r\n\tfor(long long i = 3; i * i <= n; i += 2)\r\
    \n\t\tif(n % i == 0) return false;\r\n\r\n\treturn true;\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nbool isprime(long long\
    \ n) {\r\n\tif(n == 2) return true;\r\n\tif(n < 2 || n % 2 == 0) return false;\r\
    \n\r\n\tfor(long long i = 3; i * i <= n; i += 2)\r\n\t\tif(n % i == 0) return\
    \ false;\r\n\r\n\treturn true;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/isprime.cpp
  requiredBy: []
  timestamp: '2021-03-24 17:36:33+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ALDS1_1_C_2.test.cpp
documentation_of: math/isprime.cpp
layout: document
title: "Isprime(\u7D20\u6570\u5224\u5B9A)"
---

## なにこれ
素数判定を行う．

## 関数
- `isprime(n)`：`n` が素数であれば `true` を，そうでなければ `false` を返す．

## 計算量
- `isprime(n)`：$O(\sqrt n)$

---

<!-- ## Verified with (AtCoder) -->

