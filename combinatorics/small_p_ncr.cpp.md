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
  bundledCode: "#line 2 \"combinatorics/small_p_ncr.cpp\"\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\nstruct spncr {\r\nprivate:\r\n\tvector<long long> pnum, excp, inv;\r\
    \n\tconst long long P;\r\n\r\npublic:\r\n\tspncr(int n, int p) : pnum(n + 1),\
    \ excp(n + 1), inv(p), P(p) {\r\n\t\tint tmp;\r\n\t\tpnum[0] = 0;\r\n\t\texcp[0]\
    \ = 1;\r\n\t\tfor(int i = 1; i <= n; i++) {\r\n\t\t\ttmp = i;\r\n\t\t\tpnum[i]\
    \ = pnum[i - 1];\r\n\t\t\twhile(tmp % p == 0) pnum[i]++, tmp /= p;\r\n\t\t\texcp[i]\
    \ = excp[i - 1] * tmp % p;\r\n\t\t}\r\n\r\n\t\tinv[1] = 1;\r\n\t\tfor(int i =\
    \ 2; i < p; i++) inv[i] = P - inv[P % i] * (P / i) % P;\r\n\t}\r\n\r\n\tlong long\
    \ operator()(int n, int r) {\r\n\t\tassert(n >= 0 && r >= 0);\r\n\t\tif(r > n\
    \ || pnum[n] - pnum[r] - pnum[n - r] > 0) return 0;\r\n\t\treturn excp[n] * inv[excp[r]\
    \ * excp[n - r] % P] % P;\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nstruct spncr {\r\n\
    private:\r\n\tvector<long long> pnum, excp, inv;\r\n\tconst long long P;\r\n\r\
    \npublic:\r\n\tspncr(int n, int p) : pnum(n + 1), excp(n + 1), inv(p), P(p) {\r\
    \n\t\tint tmp;\r\n\t\tpnum[0] = 0;\r\n\t\texcp[0] = 1;\r\n\t\tfor(int i = 1; i\
    \ <= n; i++) {\r\n\t\t\ttmp = i;\r\n\t\t\tpnum[i] = pnum[i - 1];\r\n\t\t\twhile(tmp\
    \ % p == 0) pnum[i]++, tmp /= p;\r\n\t\t\texcp[i] = excp[i - 1] * tmp % p;\r\n\
    \t\t}\r\n\r\n\t\tinv[1] = 1;\r\n\t\tfor(int i = 2; i < p; i++) inv[i] = P - inv[P\
    \ % i] * (P / i) % P;\r\n\t}\r\n\r\n\tlong long operator()(int n, int r) {\r\n\
    \t\tassert(n >= 0 && r >= 0);\r\n\t\tif(r > n || pnum[n] - pnum[r] - pnum[n -\
    \ r] > 0) return 0;\r\n\t\treturn excp[n] * inv[excp[r] * excp[n - r] % P] % P;\r\
    \n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: combinatorics/small_p_ncr.cpp
  requiredBy: []
  timestamp: '2021-04-20 01:50:41+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: combinatorics/small_p_ncr.cpp
layout: document
title: nCr mod p ($n > p$)
---

## なにこれ
${}_nC_r\ (\mathrm{mod}\ p)$ を求める．$n > p$ でも動く．

## コンストラクタ
- `spncr(n, p)`：$n$ の最大値を `n`，法を `p` とする．$p$ は素数．

## メンバ関数
- `operator()(n, r)`

## 計算量
- コンストラクタ：$O(n+p)$
- `operator()(n, r)`：$O(1)$

---

## Verified with (AtCoder)
- [arc117_c](https://atcoder.jp/contests/arc117/submissions/21896178)
