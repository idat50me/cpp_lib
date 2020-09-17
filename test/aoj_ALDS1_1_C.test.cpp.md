---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  - icon: ':heavy_check_mark:'
    path: math/sieve_of_eratosthenes.cpp
    title: "Sieve-of-Eratosthenes(\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\
      \u7BE9)"
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 399, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/sieve_of_eratosthenes.cpp: line 15: unable to process #include in #if /\
    \ #ifdef / #ifndef other than include guards\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\n\
    \n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#endif\n\n#include \"../pre/macros.cpp\"\n#include \"../math/sieve_of_eratosthenes.cpp\"\
    \n\nint main() {\n\tSieve sv(100000010);\n\tint n; cin>>n;\n\tint res=0;\n\tfor(int\
    \ i=0; i<n; i++) {\n\t\tint a; cin>>a;\n\t\tif(sv.isprime(a)) res++;\n\t}\n\t\
    cout<<res<<endl;\n}\n"
  dependsOn:
  - pre/macros.cpp
  - math/sieve_of_eratosthenes.cpp
  - pre/macros.cpp
  isVerificationFile: true
  path: test/aoj_ALDS1_1_C.test.cpp
  requiredBy: []
  timestamp: '2020-08-29 23:06:39+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ALDS1_1_C.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ALDS1_1_C.test.cpp
- /verify/test/aoj_ALDS1_1_C.test.cpp.html
title: test/aoj_ALDS1_1_C.test.cpp
---
