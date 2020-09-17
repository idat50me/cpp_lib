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
    '*NOT_SPECIAL_COMMENTS*': ''
    document_title: nPr mod p
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/npr.cpp: line 14: unable to process #include in #if / #ifdef /\
    \ #ifndef other than include guards\n"
  code: "/*\n * @brief nPr mod p\n * \n */\n\n#ifndef lib_npr\n#define lib_npr\n\n\
    #ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#endif\n#include \"../pre/macros.cpp\"\n\nll nPr(ll n, ll r, ll p=MMPRIME)\
    \ {\n\tif(n < r) return 0LL;\n\n\tll res = 1LL;\n\tfor(int i=0; i<r; i++) res\
    \ = res*(n-i)%p;\n\treturn res;\n}\n\n#endif // lib_npr\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: combinatorics/npr.cpp
  requiredBy: []
  timestamp: '2020-07-18 18:00:45+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: combinatorics/npr.cpp
layout: document
redirect_from:
- /library/combinatorics/npr.cpp
- /library/combinatorics/npr.cpp.html
title: nPr mod p
---
