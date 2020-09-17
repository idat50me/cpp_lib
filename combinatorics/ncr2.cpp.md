---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_E_2.test.cpp
    title: test/aoj_DPL_5_E_2.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_E.test.cpp
    title: test/aoj_DPL_5_E.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    _deprecated_at_docs: ./docs/ncr2.md
    document_title: "nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/ncr2.cpp: line 15: unable to process #include in #if / #ifdef\
    \ / #ifndef other than include guards\n"
  code: "/*\n * @brief nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$)\n * @docs\
    \ ./docs/ncr2.md\n */\n\n#ifndef lib_ncr2\n#define lib_ncr2\n\n#ifndef call_include\n\
    #define call_include\n#include <bits/stdc++.h>\nusing namespace std;\n#endif\n\
    \n#include \"../pre/macros.cpp\"\n\nstruct nCr2 {\nprivate:\n\tvector<ll> comb,\
    \ inv, finv;\n\tll P;\n\n\tvoid calc_inv(ll r) {\n\t\tinv.resize(r+1);\n\t\tfinv.resize(r+1);\n\
    \t\tinv[1] = finv[0] = finv[1]=1LL;\n\t\tfor(int i=2; i<=r; i++) {\n\t\t\tinv[i]\
    \ = P-inv[P%i]*(P/i)%P;\n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\n\t\t}\n\t}\n\npublic:\n\
    \tnCr2(ll n, ll r, ll p) {\n\t\tif(n/2 < r) r = n/2;\n\t\tP=p;\n\t\tcalc_inv(r);\n\
    \n\t\tcomb.resize(r+1);\n\t\tcomb[0]=1;\n\t\tfor(int i=1; i<=r; i++) {\n\t\t\t\
    comb[i] = comb[i-1]*(n-i+1)%P*inv[i]%P;\n\t\t}\n\t}\n\n\tnCr2(ll r, ll p) {\n\t\
    \tP=p;\n\t\tcalc_inv(r);\n\t}\n\n\tll calc(ll n, ll r) {\n\t\tassert(r >= 0);\n\
    \t\tif(r > n) return 0;\n\t\tif(r > n/2) r = n-r;\n\t\tif(comb.size() > 0)\n\t\
    \t\treturn comb[r];\n\t\telse {\n\t\t\tll f=1;\n\t\t\tfor(ll i=n; i>n-r; i--)\
    \ {\n\t\t\t\tf = f*i%P;\n\t\t\t}\n\t\t\treturn f*finv[r]%P;\n\t\t}\n\t}\n};\n\n\
    #endif // lib_ncr2\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: combinatorics/ncr2.cpp
  requiredBy: []
  timestamp: '2020-07-18 18:00:45+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_DPL_5_E_2.test.cpp
  - test/aoj_DPL_5_E.test.cpp
documentation_of: combinatorics/ncr2.cpp
layout: document
redirect_from:
- /library/combinatorics/ncr2.cpp
- /library/combinatorics/ncr2.cpp.html
title: "nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$)"
---
