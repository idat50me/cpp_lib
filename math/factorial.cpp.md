---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy:
  - icon: ':warning:'
    path: test/aoj_0019.cpp
    title: test/aoj_0019.cpp
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':warning:'
  attributes:
    document_title: "Factorial(\u968E\u4E57)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/factorial.cpp: line 14: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "/*\r\n * @brief Factorial(\u968E\u4E57)\r\n */\r\n\r\n#ifndef lib_factorial\r\
    \n#define lib_factorial\r\n\r\n#ifndef call_include\r\n#define call_include\r\n\
    #include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#include \"\
    ../pre/macros.cpp\"\r\n\r\nll factorial(int x, ll p=(1LL<<62)-1) {\r\n\tll res\
    \ = 1;\r\n\tfor(int i=2; i<=x; i++) res = res * i % p;\r\n\treturn res;\r\n}\r\
    \n\r\n#endif // lib_factorial\r\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: math/factorial.cpp
  requiredBy:
  - test/aoj_0019.cpp
  timestamp: '2020-11-02 12:20:09+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/factorial.cpp
layout: document
redirect_from:
- /library/math/factorial.cpp
- /library/math/factorial.cpp.html
title: "Factorial(\u968E\u4E57)"
---
