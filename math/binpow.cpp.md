---
data:
  _extendedDependsOn: []
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
    path: test/aoj_ALDS1_1_C_3.test.cpp
    title: test/aoj_ALDS1_1_C_3.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_B.test.cpp
    title: test/aoj_NTL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_1035.test.cpp
    title: test/yuki_1035.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 310, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/binpow.cpp: line 5: #pragma once found in a non-first line\n"
  code: "/*\r\n * @brief Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)\r\
    \n */\r\n\r\n#pragma once\r\n//#ifndef lib_binpow\r\n//#define lib_binpow\r\n\r\
    \n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\n\
    using namespace std;\r\n#endif\r\n\r\nlong long binpow(long long a, long long\
    \ ex, long long p=(1LL<<61)-1) {\r\n\tlong long res = 1;\r\n\twhile(ex > 0) {\r\
    \n\t\tif(ex & 1) (res*=a) %= p;\r\n\t\tex>>=1;\r\n\t\t(a*=a) %= p;\r\n\t}\r\n\t\
    return res;\r\n}\r\n\r\n//#endif /* lib_binpow */"
  dependsOn: []
  isVerificationFile: false
  path: math/binpow.cpp
  requiredBy:
  - math/millor_rabin.cpp
  - mod/modint.cpp
  timestamp: '2020-11-16 10:39:05+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ALDS1_1_C_3.test.cpp
  - test/aoj_0341.test.cpp
  - test/aoj_NTL_1_B.test.cpp
  - test/yuki_1035.test.cpp
documentation_of: math/binpow.cpp
layout: document
redirect_from:
- /library/math/binpow.cpp
- /library/math/binpow.cpp.html
title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
---
