---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_3.test.cpp
    title: test/aoj_ALDS1_1_C_3.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/millor_rabin.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nbool isprime(long long n) {\r\n\tif(n == 2) return true;\r\n\tif(n < 2 ||\
    \ n%2 == 0) return false;\r\n\r\n\tif(n < 200000) {\r\n\t\tfor(long long i=2;\
    \ i*i<=n; i++) if(n%i == 0) return false;\r\n\t\treturn true;\r\n\t}\r\n\r\n\t\
    long long d = n>>1;\r\n\tint s = 1;\r\n\twhile(!(d&1)) {\r\n\t\ts++;\r\n\t\td\
    \ >>= 1;\r\n\t}\r\n\r\n\tconstexpr int a[12] = {2,3,5,7,11,13,17,19,23,29,31,37};\r\
    \n\tfor(int k = 0; k < 12; k++) {\r\n\t\tif(a[k] >= n) break;\r\n\t\t\r\n\t\t\
    __int128_t r = 1, q = a[k];\r\n\t\twhile(d > 0) {\r\n\t\t\tif(d & 1) (r*=q) %=\
    \ n;\r\n\t\t\td >>= 1;\r\n\t\t\t(q*=q) %= n;\r\n\t\t}\r\n\t\tif(r == 1 || r ==\
    \ n-1) continue;\r\n\t\t\r\n\t\tfor(int i = 1; i < s; i++) {\r\n\t\t\t(r*=r) %=\
    \ n;\r\n\t\t\tif(r == n-1) break;\r\n\t\t}\r\n\t\tif(r != n-1) return false;\r\
    \n\t}\r\n\r\n\treturn true;\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nbool isprime(long long\
    \ n) {\r\n\tif(n == 2) return true;\r\n\tif(n < 2 || n%2 == 0) return false;\r\
    \n\r\n\tif(n < 200000) {\r\n\t\tfor(long long i=2; i*i<=n; i++) if(n%i == 0) return\
    \ false;\r\n\t\treturn true;\r\n\t}\r\n\r\n\tlong long d = n>>1;\r\n\tint s =\
    \ 1;\r\n\twhile(!(d&1)) {\r\n\t\ts++;\r\n\t\td >>= 1;\r\n\t}\r\n\r\n\tconstexpr\
    \ int a[12] = {2,3,5,7,11,13,17,19,23,29,31,37};\r\n\tfor(int k = 0; k < 12; k++)\
    \ {\r\n\t\tif(a[k] >= n) break;\r\n\t\t\r\n\t\t__int128_t r = 1, q = a[k];\r\n\
    \t\twhile(d > 0) {\r\n\t\t\tif(d & 1) (r*=q) %= n;\r\n\t\t\td >>= 1;\r\n\t\t\t\
    (q*=q) %= n;\r\n\t\t}\r\n\t\tif(r == 1 || r == n-1) continue;\r\n\t\t\r\n\t\t\
    for(int i = 1; i < s; i++) {\r\n\t\t\t(r*=r) %= n;\r\n\t\t\tif(r == n-1) break;\r\
    \n\t\t}\r\n\t\tif(r != n-1) return false;\r\n\t}\r\n\r\n\treturn true;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/millor_rabin.cpp
  requiredBy: []
  timestamp: '2020-12-12 15:21:33+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ALDS1_1_C_3.test.cpp
documentation_of: math/millor_rabin.cpp
layout: document
title: "Millor-Rabin(\u30DF\u30E9\u30FC\u30FB\u30E9\u30D3\u30F3\u7D20\u6570\u5224\u5B9A\
  \u6CD5)"
---

## なにこれ
ミラー・ラビン素数判定法を用いた素数判定．

## 関数
- `isprime(n)`：$n$ が素数であれば `true` を，そうでなければ `false` を返す．$n \leq $ `LLONG_MAX`

## 計算量
- $O(\log^3 n)$

## 補足
実際は重めの定数倍 $(k=12)$ がついている．

以下，ループさせたときの実行時間
- $n \leq 2 \times 10^9$ で乱数
	- ループ $10^5$ 回で $0.053 \sec$
	- ループ $10^6$ 回で $0.529 \sec$
- $n \leq 9 \times 10^{18}$ で乱数
	- ループ $10^5$ 回で $0.529 \sec$
	- ループ $10^6$ 回で $1.235 \sec$

## 参考
- [Miller–Rabin primality test - Wikipedia](https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test#Testing_against_small_sets_of_bases)
