---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_D.test.cpp
    title: test/aoj_DPL_5_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0117.test.cpp
    title: test/yuki_0117.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_1035.test.cpp
    title: test/yuki_1035.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"combinatorics/combinatorics.cpp\"\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\nstruct COMB {\r\nprivate:\r\n\tvector<long long> fact, inv, finv;\r\
    \n\tconst long long P;\r\n\r\npublic:\r\n\tCOMB(long long n, long long p) : fact(n\
    \ + 1), inv(n + 1), finv(n + 1), P(p) {\r\n\t\tassert(P < (1 << 30) - 1);\r\n\t\
    \tfact[0] = fact[1] = inv[1] = finv[0] = finv[1] = 1LL;\r\n\t\tfor(long long i\
    \ = 2LL; i <= n; i++) {\r\n\t\t\tfact[i] = fact[i - 1] * i % P;\r\n\t\t\tinv[i]\
    \ = P - inv[P % i] * (P / i) % P;\r\n\t\t\tfinv[i] = finv[i - 1] * inv[i] % P;\r\
    \n\t\t}\r\n\t}\r\n\r\n\tlong long npr(long long n, long long r) {\r\n\t\tassert(n\
    \ >= 0 && r >= 0);\r\n\t\tif(r > n) return 0;\r\n\t\treturn fact[n] * finv[n -\
    \ r] % P;\r\n\t}\r\n\r\n\tlong long ncr(long long n, long long r) {\r\n\t\tassert(n\
    \ >= 0 && r >= 0);\r\n\t\tif(r > n) return 0;\r\n\t\treturn fact[n] * finv[r]\
    \ % P * finv[n - r] % P;\r\n\t}\r\n\r\n\tlong long nhr(long long n, long long\
    \ r) {\r\n\t\tassert(n >= 0 && r >= 0);\r\n\t\tif(r == 0) return 1;\r\n\t\tif(n\
    \ == 0) return 0;\r\n\t\treturn ncr(n + r - 1, n - 1);\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nstruct COMB {\r\nprivate:\r\
    \n\tvector<long long> fact, inv, finv;\r\n\tconst long long P;\r\n\r\npublic:\r\
    \n\tCOMB(long long n, long long p) : fact(n + 1), inv(n + 1), finv(n + 1), P(p)\
    \ {\r\n\t\tassert(P < (1 << 30) - 1);\r\n\t\tfact[0] = fact[1] = inv[1] = finv[0]\
    \ = finv[1] = 1LL;\r\n\t\tfor(long long i = 2LL; i <= n; i++) {\r\n\t\t\tfact[i]\
    \ = fact[i - 1] * i % P;\r\n\t\t\tinv[i] = P - inv[P % i] * (P / i) % P;\r\n\t\
    \t\tfinv[i] = finv[i - 1] * inv[i] % P;\r\n\t\t}\r\n\t}\r\n\r\n\tlong long npr(long\
    \ long n, long long r) {\r\n\t\tassert(n >= 0 && r >= 0);\r\n\t\tif(r > n) return\
    \ 0;\r\n\t\treturn fact[n] * finv[n - r] % P;\r\n\t}\r\n\r\n\tlong long ncr(long\
    \ long n, long long r) {\r\n\t\tassert(n >= 0 && r >= 0);\r\n\t\tif(r > n) return\
    \ 0;\r\n\t\treturn fact[n] * finv[r] % P * finv[n - r] % P;\r\n\t}\r\n\r\n\tlong\
    \ long nhr(long long n, long long r) {\r\n\t\tassert(n >= 0 && r >= 0);\r\n\t\t\
    if(r == 0) return 1;\r\n\t\tif(n == 0) return 0;\r\n\t\treturn ncr(n + r - 1,\
    \ n - 1);\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: combinatorics/combinatorics.cpp
  requiredBy: []
  timestamp: '2021-02-24 11:32:00+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0117.test.cpp
  - test/yuki_1035.test.cpp
  - test/aoj_DPL_5_D.test.cpp
documentation_of: combinatorics/combinatorics.cpp
layout: document
title: "Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)"
---

## なにこれ
${}_nP_r, {}_nC_r, {}_nH_r\ (\mathrm{mod}\ p)$ を求める．

## コンストラクタ
- `COMB(n, p)`：$n$ の最大値を `n`，法を `p` とする．${}_nH_r$ を求める場合は $(n+r-1)$ の最大値を `n` とする．$n \leq 10^7$, $p \leq$ `INT_MAX` 程度．$p$ は素数．

## メンバ関数
- `npr(n, r)`
- `ncr(n, r)`
- `nhr(n, r)`

## 計算量
- `COMB(n, p)`：$O(n)$
- `npr(n, r)`：$O(1)$
- `ncr(n, r)`：$O(1)$
- `nhr(n, r)`：$O(1)$
