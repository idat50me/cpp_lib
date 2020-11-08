---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C.test.cpp
    title: test/aoj_ALDS1_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_A.test.cpp
    title: test/aoj_NTL_1_A.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/sieve_of_eratosthenes.md
    document_title: "Sieve-of-Eratosthenes(\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\
      \u306E\u7BE9)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/sieve_of_eratosthenes.cpp: line 15: unable to process #include in #if /\
    \ #ifdef / #ifndef other than include guards\n"
  code: "/*\r\n * @brief Sieve-of-Eratosthenes(\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\
    \u30B9\u306E\u7BE9)\r\n * @docs docs/sieve_of_eratosthenes.md\r\n */\r\n\r\n#ifndef\
    \ lib_sieve_of_eratosthenes\r\n#define lib_sieve_of_eratosthenes\r\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\n#include \"pre/macros.cpp\"\r\n\r\nstruct Sieve {\r\n\t\
    int N;\r\n\tvector<int> f,primes;\r\n\r\n\tSieve(int n=1) : N(n), f(n+1,0) {\r\
    \n\t\tf[0]=f[1]=-1;\r\n\t\tfor(int i=2; i<=N; i++) {\r\n\t\t\tif(f[i]) continue;\r\
    \n\t\t\tprimes.push_back(i);\r\n\t\t\tf[i]=i;\r\n\t\t\tif(i>(1<<15)) continue;\r\
    \n\t\t\tfor(int j=i*i; j<=N; j+=i) if(!f[j]) f[j]=i;\r\n\t\t}\r\n\t}\r\n\r\n\t\
    bool isprime(int x) {\r\n\t\treturn f[x]==x;\r\n\t}\r\n\r\n\tvector<pair<int,int>>\
    \ primefact(int n) {\r\n\t\tif(n==1) return vector<pair<int,int>>({});\r\n\t\t\
    vector<pair<int,int>> res={{f[n],1}};\r\n\t\tn /= f[n];\r\n\t\twhile(n>1) {\r\n\
    \t\t\tint dv=f[n];\r\n\t\t\tif(res.back().first==dv) res.back().second++;\r\n\t\
    \t\telse res.push_back({dv,1});\r\n\t\t\tn /= dv;\r\n\t\t}\r\n\t\treturn res;\r\
    \n\t}\r\n\r\n\tint divisorcount(int n) {\r\n\t\tint res=1;\r\n\t\tvector<pair<int,int>>\
    \ fl=primefact(n);\r\n\t\tfor(int i=0; i<fl.size(); i++) {\r\n\t\t\tres *= fl[i].second;\r\
    \n\t\t}\r\n\t\treturn res;\r\n\t}\r\n};\r\n\r\n#endif // lib_sieve_of_eratosthenes\r\
    \n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: math/sieve_of_eratosthenes.cpp
  requiredBy: []
  timestamp: '2020-11-08 15:04:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ALDS1_1_C.test.cpp
  - test/aoj_NTL_1_A.test.cpp
documentation_of: math/sieve_of_eratosthenes.cpp
layout: document
redirect_from:
- /library/math/sieve_of_eratosthenes.cpp
- /library/math/sieve_of_eratosthenes.cpp.html
title: "Sieve-of-Eratosthenes(\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9\
  )"
---
## なにこれ
エラトステネスの篩というやつ．
前処理して素数判定を高速にやるなど．

## 制約
- $n \leq 10^7$ 程度．

## コンストラクタ
- `Sieve(n)`：計算量 $O(n \log\log n)$  
	- `n`：処理する最大値．

## メンバ関数
- `isprime(x)`：計算量 $O(1)$  
	$x$ の素数判定

- `primefact(n)`：計算量 $O(\log n)$  
	$n$ の素因数分解．$\\{素因数,個数\\}$ の pair の vector を返す．

- `divisorcount(n)`：計算量 $O(\log n)$  
	$n$ の約数の個数  
	計算量は`primefact(n)`依存
