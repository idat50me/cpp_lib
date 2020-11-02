---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_E.test.cpp
    title: test/aoj_DPL_5_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_E_2.test.cpp
    title: test/aoj_DPL_5_E_2.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: ./docs/ncr2.md
    document_title: "nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/ncr2.cpp: line 15: unable to process #include in #if / #ifdef\
    \ / #ifndef other than include guards\n"
  code: "/*\r\n * @brief nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$)\r\n\
    \ * @docs ./docs/ncr2.md\r\n */\r\n\r\n#ifndef lib_ncr2\r\n#define lib_ncr2\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"../pre/macros.cpp\"\r\n\r\n\
    struct nCr2 {\r\nprivate:\r\n\tvector<ll> comb, inv, finv;\r\n\tll P;\r\n\r\n\t\
    void calc_inv(ll r) {\r\n\t\tinv.resize(r+1);\r\n\t\tfinv.resize(r+1);\r\n\t\t\
    inv[1] = finv[0] = finv[1]=1LL;\r\n\t\tfor(int i=2; i<=r; i++) {\r\n\t\t\tinv[i]\
    \ = P-inv[P%i]*(P/i)%P;\r\n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\n\t\t}\r\n\t\
    }\r\n\r\npublic:\r\n\tnCr2(ll n, ll r, ll p) {\r\n\t\tif(n/2 < r) r = n/2;\r\n\
    \t\tP=p;\r\n\t\tcalc_inv(r);\r\n\r\n\t\tcomb.resize(r+1);\r\n\t\tcomb[0]=1;\r\n\
    \t\tfor(int i=1; i<=r; i++) {\r\n\t\t\tcomb[i] = comb[i-1]*(n-i+1)%P*inv[i]%P;\r\
    \n\t\t}\r\n\t}\r\n\r\n\tnCr2(ll r, ll p) {\r\n\t\tP=p;\r\n\t\tcalc_inv(r);\r\n\
    \t}\r\n\r\n\tll calc(ll n, ll r) {\r\n\t\tassert(r >= 0);\r\n\t\tif(r > n) return\
    \ 0;\r\n\t\tif(r > n/2) r = n-r;\r\n\t\tif(comb.size() > 0)\r\n\t\t\treturn comb[r];\r\
    \n\t\telse {\r\n\t\t\tll f=1;\r\n\t\t\tfor(ll i=n; i>n-r; i--) {\r\n\t\t\t\tf\
    \ = f*i%P;\r\n\t\t\t}\r\n\t\t\treturn f*finv[r]%P;\r\n\t\t}\r\n\t}\r\n};\r\n\r\
    \n#endif // lib_ncr2\r\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: combinatorics/ncr2.cpp
  requiredBy: []
  timestamp: '2020-11-02 12:20:09+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_DPL_5_E.test.cpp
  - test/aoj_DPL_5_E_2.test.cpp
documentation_of: combinatorics/ncr2.cpp
layout: document
redirect_from:
- /library/combinatorics/ncr2.cpp
- /library/combinatorics/ncr2.cpp.html
title: "nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$)"
---
