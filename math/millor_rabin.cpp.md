---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/binpow.cpp
    title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_3.test.cpp
    title: test/aoj_ALDS1_1_C_3.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    _deprecated_at_docs: ./docs/millor_rabin.md
    document_title: "Millor-Rabin(\u30DF\u30E9\u30FC\u30FB\u30E9\u30D3\u30F3\u7D20\
      \u6570\u5224\u5B9A\u6CD5)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/millor_rabin.cpp: line 15: unable to process #include in #if / #ifdef /\
    \ #ifndef other than include guards\n"
  code: "/*\n * @brief Millor-Rabin(\u30DF\u30E9\u30FC\u30FB\u30E9\u30D3\u30F3\u7D20\
    \u6570\u5224\u5B9A\u6CD5)\n * @docs ./docs/millor_rabin.md\n */\n\n#ifndef lib_millor_rabin\n\
    #define lib_millor_rabin\n\n#ifndef call_include\n#define call_include\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n#endif\n\n#include \"../math/binpow.cpp\"\
    \n\nbool isprime(int n) {\n\tif(n == 2) return true;\n\tif(n < 2 || n%2 == 0)\
    \ return false;\n\n\tint d=n-1, s=0;\n\twhile(d%2 == 0) {\n\t\ts++;\n\t\td >>=\
    \ 1;\n\t}\n\n\tint a[]={2,7,61};\n\tfor(int k = 0; k < 3; k++) {\n\t\tif(a[k]\
    \ >= n) break;\n\t\t\n\t\tll r = binpow(a[k], d, n);\n\t\tif(r == 1 || r == n-1)\
    \ continue;\n\t\t\n\t\tfor(int i = 1; i < s; i++) {\n\t\t\tr = r * r % n;\n\t\t\
    \tif(r == n-1) break;\n\t\t}\n\t\tif(r != n-1) return false;\n\t}\n\n\treturn\
    \ true;\n}\n\n#endif // lib_millor_rabin\n"
  dependsOn:
  - math/binpow.cpp
  - pre/macros.cpp
  isVerificationFile: false
  path: math/millor_rabin.cpp
  requiredBy: []
  timestamp: '2020-07-18 16:39:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ALDS1_1_C_3.test.cpp
documentation_of: math/millor_rabin.cpp
layout: document
redirect_from:
- /library/math/millor_rabin.cpp
- /library/math/millor_rabin.cpp.html
title: "Millor-Rabin(\u30DF\u30E9\u30FC\u30FB\u30E9\u30D3\u30F3\u7D20\u6570\u5224\u5B9A\
  \u6CD5)"
---
