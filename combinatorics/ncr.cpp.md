---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: combinatorics/nhr.cpp
    title: nHr
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: nCr
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/ncr.cpp: line 15: unable to process #include in #if / #ifdef /\
    \ #ifndef other than include guards\n"
  code: "/*\r\n * @brief nCr\r\n * \r\n */\r\n\r\n#ifndef lib_ncr\r\n#define lib_ncr\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"../pre/macros.cpp\"\r\n\r\n\
    ll nCr(ll n, ll r) {\r\n\tif(n == r) return 1;\r\n\tif(r > n) return 0;\r\n\t\
    if(n == 0) return 0;\r\n\r\n\tif(r > n / 2) r = n-r;\r\n\tif(r == 0) return 1;\r\
    \n\r\n\tll res = 1;\r\n\tfor(ll i = 1; i <= r; i++) {\r\n\t\tres *= (n - i + 1)\
    \ / i;\r\n\t}\r\n\r\n\treturn res;\r\n}\r\n\r\n#endif // lib_ncr\r\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: combinatorics/ncr.cpp
  requiredBy:
  - combinatorics/nhr.cpp
  timestamp: '2020-11-02 12:20:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: combinatorics/ncr.cpp
layout: document
redirect_from:
- /library/combinatorics/ncr.cpp
- /library/combinatorics/ncr.cpp.html
title: nCr
---
