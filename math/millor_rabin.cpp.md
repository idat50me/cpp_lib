---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: math/binpow.cpp
    title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_3.test.cpp
    title: test/aoj_ALDS1_1_C_3.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"math/millor_rabin.cpp\"\n\n\n\r\n#ifndef call_include\r\n\
    #define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\n#line 1 \"math/binpow.cpp\"\n/*\r\n * @brief Binary-Power(\u7E70\u308A\u8FD4\
    \u3057\u4E8C\u4E57\u6CD5)\r\n */\r\n\r\n#ifndef lib_binpow\r\n#define lib_binpow\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\nlong long binpow(long long a, long long\
    \ ex, long long p=(1LL<<61)-1) {\r\n\tlong long res = 1;\r\n\twhile(ex > 0) {\r\
    \n\t\tif(ex & 1) (res*=a) %= p;\r\n\t\tex>>=1;\r\n\t\t(a*=a) %= p;\r\n\t}\r\n\t\
    return res;\r\n}\r\n\r\n#endif /* lib_binpow */\n#line 11 \"math/millor_rabin.cpp\"\
    \n\r\nbool isprime(int n) {\r\n\tif(n == 2) return true;\r\n\tif(n < 2 || n%2\
    \ == 0) return false;\r\n\r\n\tint d=n-1, s=0;\r\n\twhile(d%2 == 0) {\r\n\t\t\
    s++;\r\n\t\td >>= 1;\r\n\t}\r\n\r\n\tint a[]={2,7,61};\r\n\tfor(int k = 0; k <\
    \ 3; k++) {\r\n\t\tif(a[k] >= n) break;\r\n\t\t\r\n\t\tlong long r = binpow(a[k],\
    \ d, n);\r\n\t\tif(r == 1 || r == n-1) continue;\r\n\t\t\r\n\t\tfor(int i = 1;\
    \ i < s; i++) {\r\n\t\t\t(r*=r) %= n;\r\n\t\t\tif(r == n-1) break;\r\n\t\t}\r\n\
    \t\tif(r != n-1) return false;\r\n\t}\r\n\r\n\treturn true;\r\n}\r\n\r\n\n"
  code: "#ifndef lib_millor_rabin\r\n#define lib_millor_rabin\r\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\n#include \"math/binpow.cpp\"\r\n\r\nbool isprime(int n) {\r\n\t\
    if(n == 2) return true;\r\n\tif(n < 2 || n%2 == 0) return false;\r\n\r\n\tint\
    \ d=n-1, s=0;\r\n\twhile(d%2 == 0) {\r\n\t\ts++;\r\n\t\td >>= 1;\r\n\t}\r\n\r\n\
    \tint a[]={2,7,61};\r\n\tfor(int k = 0; k < 3; k++) {\r\n\t\tif(a[k] >= n) break;\r\
    \n\t\t\r\n\t\tlong long r = binpow(a[k], d, n);\r\n\t\tif(r == 1 || r == n-1)\
    \ continue;\r\n\t\t\r\n\t\tfor(int i = 1; i < s; i++) {\r\n\t\t\t(r*=r) %= n;\r\
    \n\t\t\tif(r == n-1) break;\r\n\t\t}\r\n\t\tif(r != n-1) return false;\r\n\t}\r\
    \n\r\n\treturn true;\r\n}\r\n\r\n#endif // lib_millor_rabin\r\n"
  dependsOn:
  - math/binpow.cpp
  isVerificationFile: false
  path: math/millor_rabin.cpp
  requiredBy: []
  timestamp: '2020-11-09 16:10:15+09:00'
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

## 制約
- $n \leq $ `INT_MAX` (そのうち上限緩和したい)

## 関数
- `isprime(n)`：計算量 $O(\log^3 n)\ \leftarrow$ なんで？  
	$n$ の素数判定．
	実際は定数倍が重いけど実用上は問題ないはず．
	- [Miller–Rabin primality test - Wikipedia](https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test#Testing_against_small_sets_of_bases)
	