---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':x:'
    path: test/aoj_DPL_5_D.test.cpp
    title: test/aoj_DPL_5_D.test.cpp
  - icon: ':x:'
    path: test/yuki_0117.test.cpp
    title: test/yuki_0117.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    _deprecated_at_docs: docs/combinatorics.md
    document_title: "Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)"
    links: []
  bundledCode: "#line 1 \"combinatorics/combinatorics.cpp\"\n/*\r\n * @brief Combinatorics(\u7D44\
    \u5408\u305B\u6570\u5B66)\r\n * @docs docs/combinatorics.md\r\n */\r\n\r\n#ifndef\
    \ lib_combinatorics\r\n#define lib_combinatorics\r\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\nstruct COMB {\r\nprivate:\r\n\tvector<long long> fact, inv, finv;\r\
    \n\tlong long P;\r\n\r\npublic:\r\n\tCOMB(long long mx, long long p) {\r\n\t\t\
    P=p;\r\n\t\tfact.resize(mx+1);\r\n\t\tinv.resize(mx+1);\r\n\t\tfinv.resize(mx+1);\r\
    \n\t\tfact[0] = fact[1] = inv[1] = finv[0] = finv[1] = 1LL;\r\n\t\tfor(long long\
    \ i=2LL; i<=mx; i++) {\r\n\t\t\tfact[i] = fact[i-1]*i%P;\r\n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\r\
    \n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\n\t\t}\r\n\t}\r\n\r\n\tlong long npr(long\
    \ long n, long long r) {\r\n\t\tassert(n>=0 && r>=0);\r\n\t\tif (r > n) return\
    \ 0;\r\n\t\treturn fact[n]*finv[n-r]%P;\r\n\t}\r\n\r\n\tlong long ncr(long long\
    \ n, long long r) {\r\n\t\tassert(n>=0 && r>=0);\r\n\t\tif (r > n) return 0;\r\
    \n\t\treturn fact[n]*finv[r]%P*finv[n-r]%P;\r\n\t}\r\n\r\n\tlong long nhr(long\
    \ long n, long long r) {\r\n\t\tassert(n>=0 && r>=0);\r\n\t\tif(r == 0) return\
    \ 1;\r\n\t\tif(n == 0) return 0;\r\n\t\treturn nCr(n+r-1,n-1);\r\n\t}\r\n};\r\n\
    \r\n#endif // lib_combinatorics\r\n"
  code: "/*\r\n * @brief Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)\r\n * @docs\
    \ docs/combinatorics.md\r\n */\r\n\r\n#ifndef lib_combinatorics\r\n#define lib_combinatorics\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\nstruct COMB {\r\nprivate:\r\n\tvector<long\
    \ long> fact, inv, finv;\r\n\tlong long P;\r\n\r\npublic:\r\n\tCOMB(long long\
    \ mx, long long p) {\r\n\t\tP=p;\r\n\t\tfact.resize(mx+1);\r\n\t\tinv.resize(mx+1);\r\
    \n\t\tfinv.resize(mx+1);\r\n\t\tfact[0] = fact[1] = inv[1] = finv[0] = finv[1]\
    \ = 1LL;\r\n\t\tfor(long long i=2LL; i<=mx; i++) {\r\n\t\t\tfact[i] = fact[i-1]*i%P;\r\
    \n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\r\n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\n\
    \t\t}\r\n\t}\r\n\r\n\tlong long npr(long long n, long long r) {\r\n\t\tassert(n>=0\
    \ && r>=0);\r\n\t\tif (r > n) return 0;\r\n\t\treturn fact[n]*finv[n-r]%P;\r\n\
    \t}\r\n\r\n\tlong long ncr(long long n, long long r) {\r\n\t\tassert(n>=0 && r>=0);\r\
    \n\t\tif (r > n) return 0;\r\n\t\treturn fact[n]*finv[r]%P*finv[n-r]%P;\r\n\t\
    }\r\n\r\n\tlong long nhr(long long n, long long r) {\r\n\t\tassert(n>=0 && r>=0);\r\
    \n\t\tif(r == 0) return 1;\r\n\t\tif(n == 0) return 0;\r\n\t\treturn nCr(n+r-1,n-1);\r\
    \n\t}\r\n};\r\n\r\n#endif // lib_combinatorics\r\n"
  dependsOn: []
  isVerificationFile: false
  path: combinatorics/combinatorics.cpp
  requiredBy: []
  timestamp: '2020-11-08 16:43:51+09:00'
  verificationStatus: LIBRARY_ALL_WA
  verifiedWith:
  - test/aoj_DPL_5_D.test.cpp
  - test/yuki_0117.test.cpp
documentation_of: combinatorics/combinatorics.cpp
layout: document
redirect_from:
- /library/combinatorics/combinatorics.cpp
- /library/combinatorics/combinatorics.cpp.html
title: "Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)"
---
## なにこれ
${}_nP_r, {}_nC_r, {}_nH_r\ (\mathrm{mod}\ p)$ を求める．

## 制約
- $n \leq 10^7$ 程度
- $p$ は素数

## コンストラクタ
- `COMB(mx, p)`：計算量 $O(n)$
	- `mx`：$n$ の最大値．ただし ${}_nH_r$ を求める場合は $(n+r-1)$ の最大値．
	- `p`：値の法．

## メンバ関数
- `npr(n, r)`：計算量 $O(1)$

- `ncr(n, r)`：計算量 $O(1)$

- `nhr(n, r)`：計算量 $O(1)$
