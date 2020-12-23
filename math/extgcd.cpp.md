---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_E.test.cpp
    title: test/aoj_NTL_1_E.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/extgcd.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nlong long\
    \ extgcd(long long a, long long b, long long &x, long long &y) {\r\n\tlong long\
    \ x_ = a, xd = 1, xdd = 0,\r\n\t          y_ = b, yd = 0, ydd = 1,\r\n\t     \
    \     div;\r\n\twhile(true) {\r\n\t\tif(!y_) {\r\n\t\t\tx = xd; y = xdd;\r\n\t\
    \t\treturn x_;\r\n\t\t}\r\n\t\tdiv = x_/y_;\r\n\t\tx_  -= div*y_;\r\n\t\txd  -=\
    \ div*yd;\r\n\t\txdd -= div*ydd;\r\n\r\n\t\tif(!x_) {\r\n\t\t\tx = yd; y = ydd;\r\
    \n\t\t\treturn y_;\r\n\t\t}\r\n\t\tdiv = y_/x_;\r\n\t\ty_  -= div*x_;\r\n\t\t\
    yd  -= div*xd;\r\n\t\tydd -= div*xdd;\r\n\t}\r\n}\r\n\r\nlong long extgcd(long\
    \ long a, long long b, long long c, long long &x, long long &y) {\r\n\tlong long\
    \ d = extgcd(a, b, x, y);\r\n\tif(c % d) return -1;\r\n\tx *= c/d;\r\n\ty *= c/d;\r\
    \n\treturn d;\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nlong long extgcd(long\
    \ long a, long long b, long long &x, long long &y) {\r\n\tlong long x_ = a, xd\
    \ = 1, xdd = 0,\r\n\t          y_ = b, yd = 0, ydd = 1,\r\n\t          div;\r\n\
    \twhile(true) {\r\n\t\tif(!y_) {\r\n\t\t\tx = xd; y = xdd;\r\n\t\t\treturn x_;\r\
    \n\t\t}\r\n\t\tdiv = x_/y_;\r\n\t\tx_  -= div*y_;\r\n\t\txd  -= div*yd;\r\n\t\t\
    xdd -= div*ydd;\r\n\r\n\t\tif(!x_) {\r\n\t\t\tx = yd; y = ydd;\r\n\t\t\treturn\
    \ y_;\r\n\t\t}\r\n\t\tdiv = y_/x_;\r\n\t\ty_  -= div*x_;\r\n\t\tyd  -= div*xd;\r\
    \n\t\tydd -= div*xdd;\r\n\t}\r\n}\r\n\r\nlong long extgcd(long long a, long long\
    \ b, long long c, long long &x, long long &y) {\r\n\tlong long d = extgcd(a, b,\
    \ x, y);\r\n\tif(c % d) return -1;\r\n\tx *= c/d;\r\n\ty *= c/d;\r\n\treturn d;\r\
    \n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/extgcd.cpp
  requiredBy: []
  timestamp: '2020-12-23 15:21:02+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_NTL_1_E.test.cpp
documentation_of: math/extgcd.cpp
layout: document
title: "extgcd(\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u306E\u4E92\u9664\u6CD5\
  )"
---

## なにこれ
一次不定方程式 $ax+by=c$ の1つの整数解 $(x,y)$ を求める．

## 関数
- `extgcd(a, b, x, y)`：$ax+by=\gcd(a,b)$ の1つの解を `x`, `y` に格納し，$\gcd(a,b)$ を返す．
- `extgcd(a, b, c, x, y)`：$ax+by=c$ の1つの解を `x`, `y` に格納し，$\gcd(a,b)$ を返す．整数解が存在しない場合は $-1$ を返す．

## 計算量
- $O(\log a)$

## 補足
### 一般解の導出
- 求めた特殊解 $(x_0,y_0)$
- $d = \gcd(a,b)$ とし，$a' = \dfrac a d,\ b' = \dfrac b d$ とおく

このとき，一般解は $(x,y) = (x_0+b't,\ y_0+a't)$
