---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  - icon: ':heavy_check_mark:'
    path: combinatorics/ncr2.cpp
    title: "nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$)"
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DPL_5_E
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DPL_5_E
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 399, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ combinatorics/ncr2.cpp: line 15: unable to process #include in #if / #ifdef\
    \ / #ifndef other than include guards\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_5_E\"\n\n\
    #ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#endif\n\n#include \"../pre/macros.cpp\"\n#include \"../combinatorics/ncr2.cpp\"\
    \n\nint main() {\n\tint n,k; cin>>n>>k;\n\tnCr2 table(k,1000,MPRIME);\n\tcout<<table.calc(k,n)<<endl;\n\
    }\n"
  dependsOn:
  - pre/macros.cpp
  - combinatorics/ncr2.cpp
  - pre/macros.cpp
  isVerificationFile: true
  path: test/aoj_DPL_5_E.test.cpp
  requiredBy: []
  timestamp: '2020-07-19 09:59:33+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_DPL_5_E.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_DPL_5_E.test.cpp
- /verify/test/aoj_DPL_5_E.test.cpp.html
title: test/aoj_DPL_5_E.test.cpp
---
