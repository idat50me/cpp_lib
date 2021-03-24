---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj_ALDS1_1_C_2.test.cpp
    title: test/aoj_ALDS1_1_C_2.test.cpp
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/isprime.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nbool isprime(long long n) {\r\n\tif(n == 2 || n == 3 || n == 5) return true;\r\
    \n\tif(n < 2 || n % 2 == 0 || n % 3 == 0 || n % 5 == 0) return false;\r\n\r\n\t\
    long long i = 7;\r\n\twhile(i * i <= n) {\r\n\t\tfor(int k : {4, 2, 4, 2, 4, 6,\
    \ 2, 6}) {\r\n\t\t\tif(i * i <= n) break;\r\n\t\t\tif(n % i == 0) return false;\r\
    \n\t\t\ti += k;\r\n\t\t}\r\n\t}\r\n\r\n\treturn true;\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nbool isprime(long long\
    \ n) {\r\n\tif(n == 2 || n == 3 || n == 5) return true;\r\n\tif(n < 2 || n % 2\
    \ == 0 || n % 3 == 0 || n % 5 == 0) return false;\r\n\r\n\tlong long i = 7;\r\n\
    \twhile(i * i <= n) {\r\n\t\tfor(int k : {4, 2, 4, 2, 4, 6, 2, 6}) {\r\n\t\t\t\
    if(i * i <= n) break;\r\n\t\t\tif(n % i == 0) return false;\r\n\t\t\ti += k;\r\
    \n\t\t}\r\n\t}\r\n\r\n\treturn true;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/isprime.cpp
  requiredBy: []
  timestamp: '2021-03-24 18:26:06+09:00'
  verificationStatus: LIBRARY_ALL_WA
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

