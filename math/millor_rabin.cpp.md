---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
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
    _deprecated_at_docs: docs/millor_rabin.md
    document_title: "Millor-Rabin(\u30DF\u30E9\u30FC\u30FB\u30E9\u30D3\u30F3\u7D20\
      \u6570\u5224\u5B9A\u6CD5)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/millor_rabin.cpp: line 15: unable to process #include in #if / #ifdef /\
    \ #ifndef other than include guards\n"
  code: "/*\r\n * @brief Millor-Rabin(\u30DF\u30E9\u30FC\u30FB\u30E9\u30D3\u30F3\u7D20\
    \u6570\u5224\u5B9A\u6CD5)\r\n * @docs docs/millor_rabin.md\r\n */\r\n\r\n#ifndef\
    \ lib_millor_rabin\r\n#define lib_millor_rabin\r\n\r\n#ifndef call_include\r\n\
    #define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\n#include \"math/binpow.cpp\"\r\n\r\nbool isprime(int n) {\r\n\tif(n == 2)\
    \ return true;\r\n\tif(n < 2 || n%2 == 0) return false;\r\n\r\n\tint d=n-1, s=0;\r\
    \n\twhile(d%2 == 0) {\r\n\t\ts++;\r\n\t\td >>= 1;\r\n\t}\r\n\r\n\tint a[]={2,7,61};\r\
    \n\tfor(int k = 0; k < 3; k++) {\r\n\t\tif(a[k] >= n) break;\r\n\t\t\r\n\t\tlong\
    \ long r = binpow(a[k], d, n);\r\n\t\tif(r == 1 || r == n-1) continue;\r\n\t\t\
    \r\n\t\tfor(int i = 1; i < s; i++) {\r\n\t\t\t(r*=r) %= n;\r\n\t\t\tif(r == n-1)\
    \ break;\r\n\t\t}\r\n\t\tif(r != n-1) return false;\r\n\t}\r\n\r\n\treturn true;\r\
    \n}\r\n\r\n#endif // lib_millor_rabin\r\n"
  dependsOn:
  - math/binpow.cpp
  isVerificationFile: false
  path: math/millor_rabin.cpp
  requiredBy: []
  timestamp: '2020-11-09 00:40:50+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ALDS1_1_C_3.test.cpp
documentation_of: math/millor_rabin.cpp
layout: document
redirect_from:
- /library/math/millor_rabin.cpp
- /library/math/millor_rabin.cpp.html
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
	