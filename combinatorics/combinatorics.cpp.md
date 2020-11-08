---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_D.test.cpp
    title: test/aoj_DPL_5_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0117.test.cpp
    title: test/yuki_0117.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: ./docs/combinatorics.md
    document_title: "Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/combinatorics.cpp: line 15: unable to process #include in #if\
    \ / #ifdef / #ifndef other than include guards\n"
  code: "/*\r\n * @brief Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)\r\n * @docs\
    \ ./docs/combinatorics.md\r\n */\r\n\r\n#ifndef lib_combinatorics\r\n#define lib_combinatorics\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"../pre/macros.cpp\"\r\n\r\n\
    struct Combinatorics {\r\nprivate:\r\n\tvector<ll> fact, inv, finv;\r\n\tll P;\r\
    \n\r\n\tvoid pre_mod_comb(ll mx) {\r\n\t\tfact.resize(mx+1);\r\n\t\tinv.resize(mx+1);\r\
    \n\t\tfinv.resize(mx+1);\r\n\t\tfact[0] = fact[1] = inv[1] = finv[0] = finv[1]\
    \ = 1LL;\r\n\t\tfor(ll i=2LL; i<=mx; i++) {\r\n\t\t\tfact[i] = fact[i-1]*i%P;\r\
    \n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\r\n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\n\
    \t\t}\r\n\t}\r\n\r\npublic:\r\n\tCombinatorics(ll mx, ll p) {\r\n\t\tP=p;\r\n\t\
    \tfact.resize(mx+1);\r\n\t\tinv.resize(mx+1);\r\n\t\tfinv.resize(mx+1);\r\n\t\t\
    fact[0] = fact[1] = inv[1] = finv[0] = finv[1] = 1LL;\r\n\t\tfor(ll i=2LL; i<=mx;\
    \ i++) {\r\n\t\t\tfact[i] = fact[i-1]*i%P;\r\n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\r\
    \n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\n\t\t}\r\n\t}\r\n\r\n\tll nPr(ll n, ll\
    \ r) {\r\n\t\tassert(n>=0 && r>=0);\r\n\t\tif (r > n) return 0;\r\n\t\treturn\
    \ fact[n]*finv[n-r]%P;\r\n\t}\r\n\r\n\tll nCr(ll n, ll r) {\r\n\t\tassert(n>=0\
    \ && r>=0);\r\n\t\tif (r > n) return 0;\r\n\t\treturn fact[n]*finv[r]%P*finv[n-r]%P;\r\
    \n\t}\r\n\r\n\tll nHr(ll n, ll r) {\r\n\t\tassert(n>=0 && r>=0);\r\n\t\tif(r ==\
    \ 0) return 1;\r\n\t\tif(n == 0) return 0;\r\n\t\treturn nCr(n+r-1,n-1);\r\n\t\
    }\r\n};\r\n\r\n#endif // lib_combinatorics\r\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: combinatorics/combinatorics.cpp
  requiredBy: []
  timestamp: '2020-11-08 14:26:02+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_DPL_5_D.test.cpp
  - test/yuki_0117.test.cpp
documentation_of: combinatorics/combinatorics.cpp
layout: document
redirect_from:
- /library/combinatorics/combinatorics.cpp
- /library/combinatorics/combinatorics.cpp.html
title: "Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)"
---
