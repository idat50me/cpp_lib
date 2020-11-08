---
data:
  _extendedDependsOn:
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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 399, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/sieve_of_eratosthenes.cpp: line 15: unable to process #include in #if /\
    \ #ifdef / #ifndef other than include guards\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"../math/sieve_of_eratosthenes.cpp\"\
    \r\n\r\nint main() {\r\n\tint n; cin>>n;\r\n\tSieve sv(n);\r\n\tvector<pair<int,int>>\
    \ flist=sv.primefact(n);\r\n\r\n\tcout<<n<<':';\r\n\tfor(int i=0; i<flist.size();\
    \ i++) {\r\n\t\tfor(int j=0; j<flist[i].second; j++) {\r\n\t\t\tcout<<\" \"<<flist[i].first;\r\
    \n\t\t}\r\n\t}\r\n\tcout<<endl;\r\n}\r\n"
  dependsOn:
  - math/sieve_of_eratosthenes.cpp
  - pre/macros.cpp
  isVerificationFile: true
  path: test/aoj_NTL_1_A.test.cpp
  requiredBy: []
  timestamp: '2020-11-08 14:38:28+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_NTL_1_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_NTL_1_A.test.cpp
- /verify/test/aoj_NTL_1_A.test.cpp.html
title: test/aoj_NTL_1_A.test.cpp
---
