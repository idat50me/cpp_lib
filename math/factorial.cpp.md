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
    '*NOT_SPECIAL_COMMENTS*': ''
    document_title: "Factorial(\u968E\u4E57)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/factorial.cpp: line 14: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "/*\n * @brief Factorial(\u968E\u4E57)\n */\n\n#ifndef lib_factorial\n#define\
    \ lib_factorial\n\n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\n\
    using namespace std;\n#endif\n\n#include \"../pre/macros.cpp\"\n\nll factorial(int\
    \ x, ll p=(1LL<<62)-1) {\n\tll res = 1;\n\tfor(int i=2; i<=x; i++) res = res *\
    \ i % p;\n\treturn res;\n}\n\n#endif // lib_factorial\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: math/factorial.cpp
  requiredBy:
  - test/aoj_0019.cpp
  timestamp: '2020-07-27 00:31:55+09:00'
  verificationStatus: LIBRARY_NO_TESTS
  verifiedWith: []
documentation_of: math/factorial.cpp
layout: document
redirect_from:
- /library/math/factorial.cpp
- /library/math/factorial.cpp.html
title: "Factorial(\u968E\u4E57)"
---
