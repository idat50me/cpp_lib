---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/extgcd.cpp
    title: "extgcd(\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u306E\u4E92\u9664\
      \u6CD5)"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yuki_0187.test.cpp
    title: test/yuki_0187.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/garner.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"\
    math/extgcd.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
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
    \ < 0) x = -x;\r\n\ty *= c / d;\r\n\tif(b < 0) y = -y;\r\n\treturn d;\r\n}\r\n\
    #line 10 \"math/garner.cpp\"\n\r\nlong long pregarner(vector<long long> &b, vector<long\
    \ long> &m, const int p) {\r\n\tlong long lcm = 1, g, gi, gj;\r\n\tfor(int i =\
    \ 0; i < m.size(); i++) {\r\n\t\tfor(int j = i + 1; j < m.size(); j++) {\r\n\t\
    \t\tg = gcd(m[i], m[j]);\r\n\t\t\tif((b[j] - b[i]) % g) return -1;\r\n\r\n\t\t\
    \tm[i] /= g, m[j] /= g;\r\n\t\t\tgi = gcd(m[i], g), gj = g / gi;\r\n\r\n\t\t\t\
    do {\r\n\t\t\t\tg = gcd(gi, gj);\r\n\t\t\t\tgi *= g, gj /= g;\r\n\t\t\t} while(g\
    \ > 1);\r\n\r\n\t\t\tm[i] *= gi, m[j] *= gj;\r\n\t\t\tb[i] %= m[i], b[j] %= m[j];\r\
    \n\t\t}\r\n\t\t(lcm *= m[i]) %= p;\r\n\t}\r\n\treturn lcm;\r\n}\r\n\r\nlong long\
    \ garner(const vector<long long> &b, const vector<long long> &m, const int p)\
    \ {\r\n\tconst int n = m.size();\r\n\tvector<long long> mprod(n + 1, 1);\r\n\t\
    vector<long long> X(n + 1, 0);\r\n\tlong long t, x, y, inv;\r\n\r\n\tfor(int k\
    \ = 0; k < n; k++) {\r\n\t\tif(extgcd(mprod[k], m[k], 1, x, y) == -1) return -1;\r\
    \n\t\tinv = x % m[k];\r\n\t\tif(inv < 0) inv += m[k];\r\n\t\tt = (b[k] - X[k])\
    \ * inv % m[k];\r\n\t\tif(t < 0) t += m[k];\r\n\t\tfor(int i = k + 1; i < n; i++)\
    \ {\r\n\t\t\t(X[i] += t * mprod[i]) %= m[i];\r\n\t\t\t(mprod[i] *= m[k]) %= m[i];\r\
    \n\t\t}\r\n\t\t(X[n] += t * mprod[n]) %= p;\r\n\t\t(mprod[n] *= m[k]) %= p;\r\n\
    \t}\r\n\treturn X.back();\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#include \"../math/extgcd.cpp\"\
    \r\n\r\nlong long pregarner(vector<long long> &b, vector<long long> &m, const\
    \ int p) {\r\n\tlong long lcm = 1, g, gi, gj;\r\n\tfor(int i = 0; i < m.size();\
    \ i++) {\r\n\t\tfor(int j = i + 1; j < m.size(); j++) {\r\n\t\t\tg = gcd(m[i],\
    \ m[j]);\r\n\t\t\tif((b[j] - b[i]) % g) return -1;\r\n\r\n\t\t\tm[i] /= g, m[j]\
    \ /= g;\r\n\t\t\tgi = gcd(m[i], g), gj = g / gi;\r\n\r\n\t\t\tdo {\r\n\t\t\t\t\
    g = gcd(gi, gj);\r\n\t\t\t\tgi *= g, gj /= g;\r\n\t\t\t} while(g > 1);\r\n\r\n\
    \t\t\tm[i] *= gi, m[j] *= gj;\r\n\t\t\tb[i] %= m[i], b[j] %= m[j];\r\n\t\t}\r\n\
    \t\t(lcm *= m[i]) %= p;\r\n\t}\r\n\treturn lcm;\r\n}\r\n\r\nlong long garner(const\
    \ vector<long long> &b, const vector<long long> &m, const int p) {\r\n\tconst\
    \ int n = m.size();\r\n\tvector<long long> mprod(n + 1, 1);\r\n\tvector<long long>\
    \ X(n + 1, 0);\r\n\tlong long t, x, y, inv;\r\n\r\n\tfor(int k = 0; k < n; k++)\
    \ {\r\n\t\tif(extgcd(mprod[k], m[k], 1, x, y) == -1) return -1;\r\n\t\tinv = x\
    \ % m[k];\r\n\t\tif(inv < 0) inv += m[k];\r\n\t\tt = (b[k] - X[k]) * inv % m[k];\r\
    \n\t\tif(t < 0) t += m[k];\r\n\t\tfor(int i = k + 1; i < n; i++) {\r\n\t\t\t(X[i]\
    \ += t * mprod[i]) %= m[i];\r\n\t\t\t(mprod[i] *= m[k]) %= m[i];\r\n\t\t}\r\n\t\
    \t(X[n] += t * mprod[n]) %= p;\r\n\t\t(mprod[n] *= m[k]) %= p;\r\n\t}\r\n\treturn\
    \ X.back();\r\n}\r\n"
  dependsOn:
  - math/extgcd.cpp
  isVerificationFile: false
  path: math/garner.cpp
  requiredBy: []
  timestamp: '2021-03-01 01:03:43+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0187.test.cpp
documentation_of: math/garner.cpp
layout: document
title: Garner's Algorithm
---

## なにこれ
要素数 $n$ の配列 $B, M$ について，$x \equiv B_i \pmod{M_i}$ を満たす最小の $x \bmod p$ を求める．

中国剰余定理では $\operatorname{lcm}(M_1,\ M_2,\ ...\ ,\ M_n) \leq$ `LLONG_MAX` の制約があるが，Garner's Algorithm ではオーバーフローすることなく $p$ を法とする値を求めることができる．

## 関数
- `pregarner(B, M, p)`：$M_i,\ M_j\ (i < j)$ が互いに素になるように配列 `B`, `M` を再構築し，$\operatorname{lcm}(M_1,\ M_2,\ ...,\ M_n)$ を返す．任意の $2$ 数について既に互いに素であることがわかっている場合は不要．
- `garner(B, M, p)`：配列 `B`, `M` を引数にとり，$x \bmod p$ を返す．条件を満たす $x$ が存在しない場合は $-1$ を返す．

## 計算量
- `pregarner(B, M, p)`：$O(n^2 \log M_{\max})$
- `garner(B, M, p)`：$O(n^2 + n \log p)$
