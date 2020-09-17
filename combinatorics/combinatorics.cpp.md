---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yuki_0117.test.cpp
    title: test/yuki_0117.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_D.test.cpp
    title: test/aoj_DPL_5_D.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    _deprecated_at_docs: ./docs/combinatorics.md
    document_title: "Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/combinatorics.cpp: line 15: unable to process #include in #if\
    \ / #ifdef / #ifndef other than include guards\n"
  code: "/*\n * @brief Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)\n * @docs ./docs/combinatorics.md\n\
    \ */\n\n#ifndef lib_combinatorics\n#define lib_combinatorics\n\n#ifndef call_include\n\
    #define call_include\n#include <bits/stdc++.h>\nusing namespace std;\n#endif\n\
    \n#include \"../pre/macros.cpp\"\n\nstruct Combinatorics {\nprivate:\n\tvector<ll>\
    \ fact, inv, finv;\n\tll P;\n\n\tvoid pre_mod_comb(ll mx) {\n\t\tfact.resize(mx+1);\n\
    \t\tinv.resize(mx+1);\n\t\tfinv.resize(mx+1);\n\t\tfact[0] = fact[1] = inv[1]\
    \ = finv[0] = finv[1] = 1LL;\n\t\tfor(ll i=2LL; i<=mx; i++) {\n\t\t\tfact[i] =\
    \ fact[i-1]*i%P;\n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\n\
    \t\t}\n\t}\n\npublic:\n\tCombinatorics(ll mx, ll p) {\n\t\tP=p;\n\t\tfact.resize(mx+1);\n\
    \t\tinv.resize(mx+1);\n\t\tfinv.resize(mx+1);\n\t\tfact[0] = fact[1] = inv[1]\
    \ = finv[0] = finv[1] = 1LL;\n\t\tfor(ll i=2LL; i<=mx; i++) {\n\t\t\tfact[i] =\
    \ fact[i-1]*i%P;\n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\n\
    \t\t}\n\t}\n\n\tll nPr(ll n, ll r) {\n\t\tassert(n>=0 && r>=0);\n\t\tif (r > n)\
    \ return 0;\n\t\treturn fact[n]*finv[n-r]%P;\n\t}\n\n\tll nCr(ll n, ll r) {\n\t\
    \tassert(n>=0 && r>=0);\n\t\tif (r > n) return 0;\n\t\treturn fact[n]*finv[r]%P*finv[n-r]%P;\n\
    \t}\n\n\tll nHr(ll n, ll r) {\n\t\tassert(n>=0 && r>=0);\n\t\tif(r == 0) return\
    \ 1;\n\t\tif(n == 0) return 0;\n\t\treturn nCr(n+r-1,n-1);\n\t}\n};\n\n#endif\
    \ // lib_combinatorics\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: combinatorics/combinatorics.cpp
  requiredBy: []
  timestamp: '2020-07-18 18:00:45+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0117.test.cpp
  - test/aoj_DPL_5_D.test.cpp
documentation_of: combinatorics/combinatorics.cpp
layout: document
redirect_from:
- /library/combinatorics/combinatorics.cpp
- /library/combinatorics/combinatorics.cpp.html
title: "Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)"
---
