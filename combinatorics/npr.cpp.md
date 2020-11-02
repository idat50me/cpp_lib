---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: nPr mod p
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/npr.cpp: line 14: unable to process #include in #if / #ifdef /\
    \ #ifndef other than include guards\n"
  code: "/*\r\n * @brief nPr mod p\r\n * \r\n */\r\n\r\n#ifndef lib_npr\r\n#define\
    \ lib_npr\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n#include \"../pre/macros.cpp\"\r\n\r\nll nPr(ll\
    \ n, ll r, ll p=MMPRIME) {\r\n\tif(n < r) return 0LL;\r\n\r\n\tll res = 1LL;\r\
    \n\tfor(int i=0; i<r; i++) res = res*(n-i)%p;\r\n\treturn res;\r\n}\r\n\r\n#endif\
    \ // lib_npr\r\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: combinatorics/npr.cpp
  requiredBy: []
  timestamp: '2020-11-02 12:20:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: combinatorics/npr.cpp
layout: document
redirect_from:
- /library/combinatorics/npr.cpp
- /library/combinatorics/npr.cpp.html
title: nPr mod p
---
