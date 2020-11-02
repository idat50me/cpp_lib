---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_2.test.cpp
    title: test/aoj_ALDS1_1_C_2.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "Isprime(\u7D20\u6570\u5224\u5B9A)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/isprime.cpp: line 14: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "/*\r\n * @brief Isprime(\u7D20\u6570\u5224\u5B9A)\r\n */\r\n\r\n#ifndef lib_isprime\r\
    \n#define lib_isprime\r\n\r\n#ifndef call_include\r\n#define call_include\r\n\
    #include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#include \"\
    ../pre/macros.cpp\"\r\n\r\nbool isprime(ll n) {\r\n\tif (n<2) return false;\r\n\
    \tif (n==2) return true;\r\n\tif (n%2==0) return false;\r\n\r\n\tfor (ll i=3;\
    \ i*i<=n; i+=2) if (n%i==0) return false;\r\n\r\n\treturn true;\r\n}\r\n\r\n#endif\
    \ // lib_isprime\r\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: math/isprime.cpp
  requiredBy: []
  timestamp: '2020-11-02 12:20:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ALDS1_1_C_2.test.cpp
documentation_of: math/isprime.cpp
layout: document
redirect_from:
- /library/math/isprime.cpp
- /library/math/isprime.cpp.html
title: "Isprime(\u7D20\u6570\u5224\u5B9A)"
---
