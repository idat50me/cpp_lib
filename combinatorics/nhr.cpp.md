---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  - icon: ':warning:'
    path: combinatorics/ncr.cpp
    title: nCr
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    document_title: nHr
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/nhr.cpp: line 15: unable to process #include in #if / #ifdef /\
    \ #ifndef other than include guards\n"
  code: "/*\n * @brief nHr\n * \n */\n\n#ifndef lib_nhr\n#define lib_nhr\n\n#ifndef\
    \ call_include\n#define call_include\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#endif\n\n#include \"../pre/macros.cpp\"\n#include \"../combinatorics/ncr.cpp\"\
    \n\nll nHr(ll n, ll r) {\n\tif(r == 0) return 1;\n\tif(n == 0) return 0;\n\treturn\
    \ nCr(n+r-1,n-1);\n}\n\n#endif // lib_nhr\n"
  dependsOn:
  - pre/macros.cpp
  - combinatorics/ncr.cpp
  - pre/macros.cpp
  isVerificationFile: false
  path: combinatorics/nhr.cpp
  requiredBy: []
  timestamp: '2020-07-18 18:00:45+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: combinatorics/nhr.cpp
layout: document
redirect_from:
- /library/combinatorics/nhr.cpp
- /library/combinatorics/nhr.cpp.html
title: nHr
---
