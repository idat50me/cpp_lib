---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: math/extgcd.cpp
    title: "extgcd(\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u306E\u4E92\u9664\
      \u6CD5)"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yuki_0186.test.cpp
    title: test/yuki_0186.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/chinese_remainder_theorem.cpp\"\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\n#line 2 \"math/extgcd.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nlong long extgcd(long long a, long long b, long long &x, long long &y) {\r\
    \n\tlong long x_ = abs(a), xd = 1, xdd = 0, y_ = abs(b), yd = 0, ydd = 1, div;\r\
    \n\twhile(true) {\r\n\t\tif(!y_) {\r\n\t\t\tx = xd;\r\n\t\t\ty = xdd;\r\n\t\t\t\
    return x_;\r\n\t\t}\r\n\t\tdiv = x_ / y_;\r\n\t\tx_ -= div * y_;\r\n\t\txd -=\
    \ div * yd;\r\n\t\txdd -= div * ydd;\r\n\r\n\t\tif(!x_) {\r\n\t\t\tx = yd;\r\n\
    \t\t\ty = ydd;\r\n\t\t\treturn y_;\r\n\t\t}\r\n\t\tdiv = y_ / x_;\r\n\t\ty_ -=\
    \ div * x_;\r\n\t\tyd -= div * xd;\r\n\t\tydd -= div * xdd;\r\n\t}\r\n}\r\n\r\n\
    long long extgcd(long long a, long long b, long long c, long long &x, long long\
    \ &y) {\r\n\tlong long d = extgcd(a, b, x, y);\r\n\tif(c % d) return -1;\r\n\t\
    x *= c / d;\r\n\tif(a < 0) x = -x;\r\n\ty *= c / d;\r\n\tif(b < 0) y = -y;\r\n\
    \treturn d;\r\n}\r\n#line 10 \"math/chinese_remainder_theorem.cpp\"\n\r\npair<long\
    \ long, long long> crt(const vector<long long> &B, const vector<long long> &M)\
    \ {\r\n\tlong long r = 0, m = 1, p, q, d;\r\n\tfor(int i = 0; i < B.size(); i++)\
    \ {\r\n\t\td = extgcd(m, M[i], B[i] - r, p, q);\r\n\t\tif(d == -1) return make_pair(0LL,\
    \ 0LL);\r\n\t\tr += p % (M[i] / d) * m; // r = r + m * p\r\n\t\tm *= M[i] / d;\
    \           // m = lcm(m, M[i])\r\n\t\tr %= m;                  // r = r % lcm(m,\
    \ M[i])\r\n\t\tif(r < 0) r += m;\r\n\t}\r\n\treturn make_pair(r, m);\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#include \"../math/extgcd.cpp\"\
    \r\n\r\npair<long long, long long> crt(const vector<long long> &B, const vector<long\
    \ long> &M) {\r\n\tlong long r = 0, m = 1, p, q, d;\r\n\tfor(int i = 0; i < B.size();\
    \ i++) {\r\n\t\td = extgcd(m, M[i], B[i] - r, p, q);\r\n\t\tif(d == -1) return\
    \ make_pair(0LL, 0LL);\r\n\t\tr += p % (M[i] / d) * m; // r = r + m * p\r\n\t\t\
    m *= M[i] / d;           // m = lcm(m, M[i])\r\n\t\tr %= m;                  //\
    \ r = r % lcm(m, M[i])\r\n\t\tif(r < 0) r += m;\r\n\t}\r\n\treturn make_pair(r,\
    \ m);\r\n}\r\n"
  dependsOn:
  - math/extgcd.cpp
  isVerificationFile: false
  path: math/chinese_remainder_theorem.cpp
  requiredBy: []
  timestamp: '2021-02-28 15:32:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0186.test.cpp
documentation_of: math/chinese_remainder_theorem.cpp
layout: document
title: "Chinese-Remainder-Theorem(\u4E2D\u56FD\u5270\u4F59\u5B9A\u7406)"
---

## なにこれ
要素数 $n$ の配列 $B, M$ について，$x \equiv B_i \pmod{M_i}$ を満たす $x \equiv b \pmod m$ を求める．

## 関数
- `crt(B, M)`：配列 `B`, `M` を引数にとり，`pair(b, m)` を返す．条件を満たす $x$ が存在しない場合は `pair(0, 0)` を返す．$\operatorname{lcm}(M_1,\ M_2,\ ...\ ,\ M_n) \leq$ `LLONG_MAX`である必要がある．

## 計算量
- `crt(B, M)`：$O(n \log M_{\max})$
