---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: math/chinese_remainder_theorem.cpp
    title: "Chinese-Remainder-Theorem(\u4E2D\u56FD\u5270\u4F59\u5B9A\u7406)"
  - icon: ':heavy_check_mark:'
    path: math/garner.cpp
    title: Garner's Algorithm
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_B.test.cpp
    title: test/aoj_ALDS1_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_E.test.cpp
    title: test/aoj_NTL_1_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0186.test.cpp
    title: test/yuki_0186.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0187.test.cpp
    title: test/yuki_0187.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/extgcd.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nlong long\
    \ extgcd(long long a, long long b, long long &x, long long &y) {\r\n\tlong long\
    \ x_ = abs(a), xd = 1, xdd = 0, y_ = abs(b), yd = 0, ydd = 1, div;\r\n\twhile(true)\
    \ {\r\n\t\tif(!y_) {\r\n\t\t\tx = xd;\r\n\t\t\ty = xdd;\r\n\t\t\treturn x_;\r\n\
    \t\t}\r\n\t\tdiv = x_ / y_;\r\n\t\tx_ -= div * y_;\r\n\t\txd -= div * yd;\r\n\t\
    \txdd -= div * ydd;\r\n\r\n\t\tif(!x_) {\r\n\t\t\tx = yd;\r\n\t\t\ty = ydd;\r\n\
    \t\t\treturn y_;\r\n\t\t}\r\n\t\tdiv = y_ / x_;\r\n\t\ty_ -= div * x_;\r\n\t\t\
    yd -= div * xd;\r\n\t\tydd -= div * xdd;\r\n\t}\r\n}\r\n\r\nlong long extgcd(long\
    \ long a, long long b, long long c, long long &x, long long &y) {\r\n\tlong long\
    \ d = extgcd(a, b, x, y);\r\n\tif(c % d) return -1;\r\n\tx *= c / d;\r\n\tif(a\
    \ < 0) x = -x;\r\n\ty *= c / d;\r\n\tif(b < 0) y = -y;\r\n\treturn d;\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nlong long extgcd(long\
    \ long a, long long b, long long &x, long long &y) {\r\n\tlong long x_ = abs(a),\
    \ xd = 1, xdd = 0, y_ = abs(b), yd = 0, ydd = 1, div;\r\n\twhile(true) {\r\n\t\
    \tif(!y_) {\r\n\t\t\tx = xd;\r\n\t\t\ty = xdd;\r\n\t\t\treturn x_;\r\n\t\t}\r\n\
    \t\tdiv = x_ / y_;\r\n\t\tx_ -= div * y_;\r\n\t\txd -= div * yd;\r\n\t\txdd -=\
    \ div * ydd;\r\n\r\n\t\tif(!x_) {\r\n\t\t\tx = yd;\r\n\t\t\ty = ydd;\r\n\t\t\t\
    return y_;\r\n\t\t}\r\n\t\tdiv = y_ / x_;\r\n\t\ty_ -= div * x_;\r\n\t\tyd -=\
    \ div * xd;\r\n\t\tydd -= div * xdd;\r\n\t}\r\n}\r\n\r\nlong long extgcd(long\
    \ long a, long long b, long long c, long long &x, long long &y) {\r\n\tlong long\
    \ d = extgcd(a, b, x, y);\r\n\tif(c % d) return -1;\r\n\tx *= c / d;\r\n\tif(a\
    \ < 0) x = -x;\r\n\ty *= c / d;\r\n\tif(b < 0) y = -y;\r\n\treturn d;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/extgcd.cpp
  requiredBy:
  - math/chinese_remainder_theorem.cpp
  - math/garner.cpp
  timestamp: '2021-02-28 01:32:23+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ALDS1_1_B.test.cpp
  - test/yuki_0186.test.cpp
  - test/yuki_0187.test.cpp
  - test/aoj_NTL_1_E.test.cpp
documentation_of: math/extgcd.cpp
layout: document
title: "extgcd(\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u306E\u4E92\u9664\u6CD5\
  )"
---

## なにこれ
一次不定方程式 $ax+by=c$ の 1 つの整数解 $(x,y)$ を求める．

## 関数
- `extgcd(a, b, x, y)`：$ax+by=\gcd(a,b)$ の 1 つの解を `x`, `y` に格納し，$\gcd(a,b)$ を返す．
- `extgcd(a, b, c, x, y)`：$ax+by=c$ の 1 つの解を `x`, `y` に格納し，$\gcd(a,b)$ を返す．整数解が存在しない場合は $-1$ を返す．

## 計算量
- $O(\log a)$

## 補足
### 一般解の導出
- 求めた特殊解 $(x_0,y_0)$
- $d = \gcd(a,b)$ とし，$a' = \dfrac a d,\ b' = \dfrac b d$ とおく

このとき，一般解は $(x,y) = (x_0+b't,\ y_0-a't)$
