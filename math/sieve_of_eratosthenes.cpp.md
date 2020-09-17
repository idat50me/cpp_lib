---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_A.test.cpp
    title: test/aoj_NTL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C.test.cpp
    title: test/aoj_ALDS1_1_C.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    _deprecated_at_docs: ./docs/sieve_of_eratosthenes.md
    document_title: "Sieve-of-Eratosthenes(\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\
      \u306E\u7BE9)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/sieve_of_eratosthenes.cpp: line 15: unable to process #include in #if /\
    \ #ifdef / #ifndef other than include guards\n"
  code: "/*\n * @brief Sieve-of-Eratosthenes(\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\
    \u306E\u7BE9)\n * @docs ./docs/sieve_of_eratosthenes.md\n */\n\n#ifndef lib_sieve_of_eratosthenes\n\
    #define lib_sieve_of_eratosthenes\n\n#ifndef call_include\n#define call_include\n\
    #include <bits/stdc++.h>\nusing namespace std;\n#endif\n\n#include \"../pre/macros.cpp\"\
    \n\nstruct Sieve {\n\tint N;\n\tvector<int> f,primes;\n\n\tSieve(int n=1) : N(n),\
    \ f(n+1,0) {\n\t\tf[0]=f[1]=-1;\n\t\tfor(int i=2; i<=N; i++) {\n\t\t\tif(f[i])\
    \ continue;\n\t\t\tprimes.push_back(i);\n\t\t\tf[i]=i;\n\t\t\tif(i>(1<<15)) continue;\n\
    \t\t\tfor(int j=i*i; j<=N; j+=i) if(!f[j]) f[j]=i;\n\t\t}\n\t}\n\n\tbool isprime(int\
    \ x) {\n\t\treturn f[x]==x;\n\t}\n\n\tvector<pair<int,int>> primefact(int n) {\n\
    \t\tif(n==1) return vector<pair<int,int>>({});\n\t\tvector<pair<int,int>> res={{f[n],1}};\n\
    \t\tn /= f[n];\n\t\twhile(n>1) {\n\t\t\tint dv=f[n];\n\t\t\tif(res.back().first==dv)\
    \ res.back().second++;\n\t\t\telse res.push_back({dv,1});\n\t\t\tn /= dv;\n\t\t\
    }\n\t\treturn res;\n\t}\n\n\tint divisorcount(int n) {\n\t\tint res=1;\n\t\tvector<pair<int,int>>\
    \ fl=primefact(n);\n\t\tfor(int i=0; i<fl.size(); i++) {\n\t\t\tres *= fl[i].second;\n\
    \t\t}\n\t\treturn res;\n\t}\n};\n\n#endif // lib_sieve_of_eratosthenes\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: math/sieve_of_eratosthenes.cpp
  requiredBy: []
  timestamp: '2020-08-29 23:06:39+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_NTL_1_A.test.cpp
  - test/aoj_ALDS1_1_C.test.cpp
documentation_of: math/sieve_of_eratosthenes.cpp
layout: document
redirect_from:
- /library/math/sieve_of_eratosthenes.cpp
- /library/math/sieve_of_eratosthenes.cpp.html
title: "Sieve-of-Eratosthenes(\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9\
  )"
---
