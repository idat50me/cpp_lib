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
    _deprecated_at_docs: docs/ncr2.md
    document_title: "nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$ or $O(r)$)"
    links: []
  bundledCode: "#line 1 \"combinatorics/ncr2.cpp\"\n/*\r\n * @brief nCr mod p ($r\
    \ \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$ or $O(r)$)\r\n * @docs docs/ncr2.md\r\
    \n */\r\n\r\n#ifndef lib_ncr2\r\n#define lib_ncr2\r\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\nstruct NCR {\r\nprivate:\r\n\tvector<long long> comb, inv, finv;\r\
    \n\tlong long P;\r\n\r\n\tvoid calc_inv(long long r) {\r\n\t\tinv.resize(r+1);\r\
    \n\t\tfinv.resize(r+1);\r\n\t\tinv[1] = finv[0] = finv[1]=1LL;\r\n\t\tfor(int\
    \ i=2; i<=r; i++) {\r\n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\r\n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\
    \n\t\t}\r\n\t}\r\n\r\npublic:\r\n\tNCR(long long n, long long r, long long p)\
    \ {\r\n\t\tif(n/2 < r) r = n/2;\r\n\t\tP=p;\r\n\t\tcalc_inv(r);\r\n\r\n\t\tcomb.resize(r+1);\r\
    \n\t\tcomb[0]=1;\r\n\t\tfor(int i=1; i<=r; i++) {\r\n\t\t\tcomb[i] = comb[i-1]*(n-i+1)%P*inv[i]%P;\r\
    \n\t\t}\r\n\t}\r\n\r\n\tNCR(long long r, long long p) {\r\n\t\tP=p;\r\n\t\tcalc_inv(r);\r\
    \n\t}\r\n\r\n\tlong long calc(long long n, long long r) {\r\n\t\tassert(r >= 0);\r\
    \n\t\tif(r > n) return 0;\r\n\t\tif(r > n/2) r = n-r;\r\n\t\tif(comb.size() >\
    \ 0)\r\n\t\t\treturn comb[r];\r\n\t\telse {\r\n\t\t\tlong long f=1;\r\n\t\t\t\
    for(long long i=n; i>n-r; i--) {\r\n\t\t\t\tf = f*i%P;\r\n\t\t\t}\r\n\t\t\treturn\
    \ f*finv[r]%P;\r\n\t\t}\r\n\t}\r\n};\r\n\r\n#endif // lib_ncr2\r\n"
  code: "/*\r\n * @brief nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$ or $O(r)$)\r\
    \n * @docs docs/ncr2.md\r\n */\r\n\r\n#ifndef lib_ncr2\r\n#define lib_ncr2\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\nstruct NCR {\r\nprivate:\r\n\tvector<long\
    \ long> comb, inv, finv;\r\n\tlong long P;\r\n\r\n\tvoid calc_inv(long long r)\
    \ {\r\n\t\tinv.resize(r+1);\r\n\t\tfinv.resize(r+1);\r\n\t\tinv[1] = finv[0] =\
    \ finv[1]=1LL;\r\n\t\tfor(int i=2; i<=r; i++) {\r\n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\r\
    \n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\n\t\t}\r\n\t}\r\n\r\npublic:\r\n\tNCR(long\
    \ long n, long long r, long long p) {\r\n\t\tif(n/2 < r) r = n/2;\r\n\t\tP=p;\r\
    \n\t\tcalc_inv(r);\r\n\r\n\t\tcomb.resize(r+1);\r\n\t\tcomb[0]=1;\r\n\t\tfor(int\
    \ i=1; i<=r; i++) {\r\n\t\t\tcomb[i] = comb[i-1]*(n-i+1)%P*inv[i]%P;\r\n\t\t}\r\
    \n\t}\r\n\r\n\tNCR(long long r, long long p) {\r\n\t\tP=p;\r\n\t\tcalc_inv(r);\r\
    \n\t}\r\n\r\n\tlong long calc(long long n, long long r) {\r\n\t\tassert(r >= 0);\r\
    \n\t\tif(r > n) return 0;\r\n\t\tif(r > n/2) r = n-r;\r\n\t\tif(comb.size() >\
    \ 0)\r\n\t\t\treturn comb[r];\r\n\t\telse {\r\n\t\t\tlong long f=1;\r\n\t\t\t\
    for(long long i=n; i>n-r; i--) {\r\n\t\t\t\tf = f*i%P;\r\n\t\t\t}\r\n\t\t\treturn\
    \ f*finv[r]%P;\r\n\t\t}\r\n\t}\r\n};\r\n\r\n#endif // lib_ncr2\r\n"
  dependsOn: []
  isVerificationFile: false
  path: combinatorics/ncr2.cpp
  requiredBy: []
  timestamp: '2020-11-08 17:12:31+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_DPL_5_E.test.cpp
  - test/aoj_DPL_5_E_2.test.cpp
documentation_of: combinatorics/ncr2.cpp
layout: document
redirect_from:
- /library/combinatorics/ncr2.cpp
- /library/combinatorics/ncr2.cpp.html
title: "nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$ or $O(r)$)"
---
## なにこれ
${}_nC_r\ (\mathrm{mod}\ p)$ を求める．
計算量が $r$ 依存．

## 制約
- $n \leq 10^9$ 程度
- $r \leq 10^7$ 程度
- $p$ は素数

## コンストラクタ
- `NCR(n, r, p)`：計算量 $O(r)$  
	$n$ が固定値のとき使う．
	- `n`：固定値 $n$
	- `r`：$r$ の最大値．
	- `p`：値の法．

- `NCR(r, p)`：計算量 $O(r)$  
	$n$ が不定値のとき使う．
	- `r`：$r$ の最大値．
	- `p`：値の法．


## メンバ関数
- `calc(n, r)`：計算量 $O(1)$ or $O(r)$  
	${}_nC_r$ を求める．  
	$n$ が固定値のときは $O(1)$，不定値のときは $O(r)$
