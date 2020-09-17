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
    '*NOT_SPECIAL_COMMENTS*': ''
    document_title: "Isprime(\u7D20\u6570\u5224\u5B9A)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/isprime.cpp: line 14: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "/*\n * @brief Isprime(\u7D20\u6570\u5224\u5B9A)\n */\n\n#ifndef lib_isprime\n\
    #define lib_isprime\n\n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\n\
    using namespace std;\n#endif\n\n#include \"../pre/macros.cpp\"\n\nbool isprime(ll\
    \ n) {\n\tif (n<2) return false;\n\tif (n==2) return true;\n\tif (n%2==0) return\
    \ false;\n\n\tfor (ll i=3; i*i<=n; i+=2) if (n%i==0) return false;\n\n\treturn\
    \ true;\n}\n\n#endif // lib_isprime\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: math/isprime.cpp
  requiredBy: []
  timestamp: '2020-07-18 18:00:45+09:00'
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
