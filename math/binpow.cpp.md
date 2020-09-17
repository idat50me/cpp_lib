---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: math/millor_rabin.cpp
    title: "Millor-Rabin(\u30DF\u30E9\u30FC\u30FB\u30E9\u30D3\u30F3\u7D20\u6570\u5224\
      \u5B9A\u6CD5)"
  - icon: ':heavy_check_mark:'
    path: mod/modint.cpp
    title: ModInt
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_0341.test.cpp
    title: test/aoj_0341.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_B.test.cpp
    title: test/aoj_NTL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_3.test.cpp
    title: test/aoj_ALDS1_1_C_3.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    document_title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/binpow.cpp: line 14: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "/*\n * @brief Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)\n\
    \ */\n\n#ifndef lib_binpow\n#define lib_binpow\n\n#ifndef call_include\n#define\
    \ call_include\n#include <bits/stdc++.h>\nusing namespace std;\n#endif\n\n#include\
    \ \"../pre/macros.cpp\"\n\nll binpow(ll a, ll ex, ll p=(1LL<<60)) {\n\tll res\
    \ = 1;\n\twhile(ex > 0) {\n\t\tif(ex & 1) res = res*a%p;\n\t\tex>>=1;\n\t\ta =\
    \ a*a%p;\n\t}\n\treturn res;\n}\n\n#endif /* lib_binpow */"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: math/binpow.cpp
  requiredBy:
  - math/millor_rabin.cpp
  - mod/modint.cpp
  timestamp: '2020-07-18 12:32:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_0341.test.cpp
  - test/aoj_NTL_1_B.test.cpp
  - test/aoj_ALDS1_1_C_3.test.cpp
documentation_of: math/binpow.cpp
layout: document
redirect_from:
- /library/math/binpow.cpp
- /library/math/binpow.cpp.html
title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
---
