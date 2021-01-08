---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_E.test.cpp
    title: test/aoj_DPL_5_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_E_2.test.cpp
    title: test/aoj_DPL_5_E_2.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"combinatorics/ncr2.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nstruct NCR {\r\nprivate:\r\n\tvector<long long> comb, inv, finv;\r\n\tlong\
    \ long P;\r\n\r\n\tvoid calc_inv(long long r) {\r\n\t\tinv[1] = finv[0] = finv[1]\
    \ = 1LL;\r\n\t\tfor(int i=2; i<=r; i++) {\r\n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\r\
    \n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\n\t\t}\r\n\t}\r\n\r\npublic:\r\n\tNCR(long\
    \ long n, long long r, long long p) : comb(n+1), inv(r+1), finv(r+1), P(p) {\r\
    \n\t\tif(n/2 < r) r = n/2;\r\n\t\tcalc_inv(r);\r\n\r\n\t\tcomb[0] = 1;\r\n\t\t\
    for(int i=1; i<=r; i++) {\r\n\t\t\tcomb[i] = comb[i-1]*(n-i+1)%P*inv[i]%P;\r\n\
    \t\t}\r\n\t}\r\n\r\n\tNCR(long long r, long long p) : inv(r+1), finv(r+1), P(p)\
    \ {\r\n\t\tcalc_inv(r);\r\n\t}\r\n\r\n\tlong long calc(long long n, long long\
    \ r) {\r\n\t\tassert(r >= 0);\r\n\t\tif(r > n) return 0;\r\n\t\tif(r > n/2) r\
    \ = n-r;\r\n\t\tif(comb.size() > 0)\r\n\t\t\treturn comb[r];\r\n\t\telse {\r\n\
    \t\t\tlong long f=1;\r\n\t\t\tfor(long long i=n; i>n-r; i--) (f*=i) %= P;\r\n\t\
    \t\treturn f*finv[r]%P;\r\n\t\t}\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nstruct NCR {\r\nprivate:\r\
    \n\tvector<long long> comb, inv, finv;\r\n\tlong long P;\r\n\r\n\tvoid calc_inv(long\
    \ long r) {\r\n\t\tinv[1] = finv[0] = finv[1] = 1LL;\r\n\t\tfor(int i=2; i<=r;\
    \ i++) {\r\n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\r\n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\
    \n\t\t}\r\n\t}\r\n\r\npublic:\r\n\tNCR(long long n, long long r, long long p)\
    \ : comb(n+1), inv(r+1), finv(r+1), P(p) {\r\n\t\tif(n/2 < r) r = n/2;\r\n\t\t\
    calc_inv(r);\r\n\r\n\t\tcomb[0] = 1;\r\n\t\tfor(int i=1; i<=r; i++) {\r\n\t\t\t\
    comb[i] = comb[i-1]*(n-i+1)%P*inv[i]%P;\r\n\t\t}\r\n\t}\r\n\r\n\tNCR(long long\
    \ r, long long p) : inv(r+1), finv(r+1), P(p) {\r\n\t\tcalc_inv(r);\r\n\t}\r\n\
    \r\n\tlong long calc(long long n, long long r) {\r\n\t\tassert(r >= 0);\r\n\t\t\
    if(r > n) return 0;\r\n\t\tif(r > n/2) r = n-r;\r\n\t\tif(comb.size() > 0)\r\n\
    \t\t\treturn comb[r];\r\n\t\telse {\r\n\t\t\tlong long f=1;\r\n\t\t\tfor(long\
    \ long i=n; i>n-r; i--) (f*=i) %= P;\r\n\t\t\treturn f*finv[r]%P;\r\n\t\t}\r\n\
    \t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: combinatorics/ncr2.cpp
  requiredBy: []
  timestamp: '2020-12-11 23:39:25+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_DPL_5_E.test.cpp
  - test/aoj_DPL_5_E_2.test.cpp
documentation_of: combinatorics/ncr2.cpp
layout: document
title: "nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(1)$ or $O(r)$)"
---

## なにこれ
${}_nC_r\ (\mathrm{mod}\ p)$ を求める．
計算量が $r$ 依存．

## コンストラクタ
- `NCR(n, r, p)`：$r$ の最大値を `r`，法を `p` とする．($n$ は固定値)
- `NCR(r, p)`：$r$ の最大値を `r`，法を `p` とする．

$n \leq 10^9$，$r \leq 10^7$ 程度．$p$ は素数．

## メンバ関数
- `calc(n, r)`：計算量 $O(1)$ or $O(r)$  
	${}_nC_r$ を求める．  
	$n$ が固定値のときは $O(1)$，不定値のときは $O(r)$

## 計算量
- `NCR(n, r, p)`：$O(r)$
- `NCR(r, p)`：$O(r)$
- `calc(n, r)`：$n$ の最大値が既知の場合 $O(1)$，未知の場合 $O(r)$
