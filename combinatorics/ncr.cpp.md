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
    '*NOT_SPECIAL_COMMENTS*': ''
    document_title: nCr
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/ncr.cpp: line 15: unable to process #include in #if / #ifdef /\
    \ #ifndef other than include guards\n"
  code: "/*\n * @brief nCr\n * \n */\n\n#ifndef lib_ncr\n#define lib_ncr\n\n#ifndef\
    \ call_include\n#define call_include\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#endif\n\n#include \"../pre/macros.cpp\"\n\nll nCr(ll n, ll r) {\n\tif(n\
    \ == r) return 1;\n\tif(r > n) return 0;\n\tif(n == 0) return 0;\n\n\tif(r > n\
    \ / 2) r = n-r;\n\tif(r == 0) return 1;\n\n\tll res = 1;\n\tfor(ll i = 1; i <=\
    \ r; i++) {\n\t\tres *= (n - i + 1) / i;\n\t}\n\n\treturn res;\n}\n\n#endif //\
    \ lib_ncr\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: combinatorics/ncr.cpp
  requiredBy:
  - combinatorics/nhr.cpp
  timestamp: '2020-07-18 18:00:45+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: combinatorics/ncr.cpp
layout: document
redirect_from:
- /library/combinatorics/ncr.cpp
- /library/combinatorics/ncr.cpp.html
title: nCr
---
