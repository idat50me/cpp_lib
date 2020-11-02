---
data:
  _extendedDependsOn:
  - icon: ':warning:'
    path: combinatorics/ncr.cpp
    title: nCr
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: nHr
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/nhr.cpp: line 15: unable to process #include in #if / #ifdef /\
    \ #ifndef other than include guards\n"
  code: "/*\r\n * @brief nHr\r\n * \r\n */\r\n\r\n#ifndef lib_nhr\r\n#define lib_nhr\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"../pre/macros.cpp\"\r\n#include\
    \ \"../combinatorics/ncr.cpp\"\r\n\r\nll nHr(ll n, ll r) {\r\n\tif(r == 0) return\
    \ 1;\r\n\tif(n == 0) return 0;\r\n\treturn nCr(n+r-1,n-1);\r\n}\r\n\r\n#endif\
    \ // lib_nhr\r\n"
  dependsOn:
  - pre/macros.cpp
  - combinatorics/ncr.cpp
  - pre/macros.cpp
  isVerificationFile: false
  path: combinatorics/nhr.cpp
  requiredBy: []
  timestamp: '2020-11-02 12:20:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: combinatorics/nhr.cpp
layout: document
redirect_from:
- /library/combinatorics/nhr.cpp
- /library/combinatorics/nhr.cpp.html
title: nHr
---
