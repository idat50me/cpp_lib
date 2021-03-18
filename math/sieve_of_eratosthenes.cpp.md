---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C.test.cpp
    title: test/aoj_ALDS1_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_A.test.cpp
    title: test/aoj_NTL_1_A.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"math/sieve_of_eratosthenes.cpp\"\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\nstruct Sieve {\r\nprivate:\r\n\tint N;\r\n\tvector<int> dv, primes;\r\
    \n\r\npublic:\r\n\tSieve(int n) : N(n), dv(n + 1, 0) {\r\n\t\tdv[0] = dv[1] =\
    \ -1;\r\n\t\tfor(int i = 2; i <= N; i++) {\r\n\t\t\tif(!dv[i]) {\r\n\t\t\t\tprimes.emplace_back(i);\r\
    \n\t\t\t\tdv[i] = i;\r\n\t\t\t}\r\n\r\n\t\t\tfor(int p : primes) {\r\n\t\t\t\t\
    if(p > dv[i] || (long long)i * p > N) break;\r\n\t\t\t\tdv[i * p] = p;\r\n\t\t\
    \t}\r\n\t\t}\r\n\t}\r\n\r\n\tbool isprime(int x) {\r\n\t\treturn dv[x] == x;\r\
    \n\t}\r\n\r\n\tvector<pair<int, int>> primefact(int n) {\r\n\t\tif(n == 1) return\
    \ vector<pair<int, int>>({});\r\n\t\tvector<pair<int, int>> res = {pair<int, int>(dv[n],\
    \ 1)};\r\n\t\tn /= dv[n];\r\n\t\twhile(n > 1) {\r\n\t\t\tint d = dv[n];\r\n\t\t\
    \tif(res.back().first == d) res.back().second++;\r\n\t\t\telse\r\n\t\t\t\tres.emplace_back(d,\
    \ 1);\r\n\t\t\tn /= d;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\r\n\tint divisorcount(int\
    \ n) {\r\n\t\tint res = 1;\r\n\t\tvector<pair<int, int>> flist = primefact(n);\r\
    \n\t\tfor(pair<int, int> &p : flist) {\r\n\t\t\tres *= p.second + 1;\r\n\t\t}\r\
    \n\t\treturn res;\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nstruct Sieve {\r\n\
    private:\r\n\tint N;\r\n\tvector<int> dv, primes;\r\n\r\npublic:\r\n\tSieve(int\
    \ n) : N(n), dv(n + 1, 0) {\r\n\t\tdv[0] = dv[1] = -1;\r\n\t\tfor(int i = 2; i\
    \ <= N; i++) {\r\n\t\t\tif(!dv[i]) {\r\n\t\t\t\tprimes.emplace_back(i);\r\n\t\t\
    \t\tdv[i] = i;\r\n\t\t\t}\r\n\r\n\t\t\tfor(int p : primes) {\r\n\t\t\t\tif(p >\
    \ dv[i] || (long long)i * p > N) break;\r\n\t\t\t\tdv[i * p] = p;\r\n\t\t\t}\r\
    \n\t\t}\r\n\t}\r\n\r\n\tbool isprime(int x) {\r\n\t\treturn dv[x] == x;\r\n\t\
    }\r\n\r\n\tvector<pair<int, int>> primefact(int n) {\r\n\t\tif(n == 1) return\
    \ vector<pair<int, int>>({});\r\n\t\tvector<pair<int, int>> res = {pair<int, int>(dv[n],\
    \ 1)};\r\n\t\tn /= dv[n];\r\n\t\twhile(n > 1) {\r\n\t\t\tint d = dv[n];\r\n\t\t\
    \tif(res.back().first == d) res.back().second++;\r\n\t\t\telse\r\n\t\t\t\tres.emplace_back(d,\
    \ 1);\r\n\t\t\tn /= d;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\r\n\tint divisorcount(int\
    \ n) {\r\n\t\tint res = 1;\r\n\t\tvector<pair<int, int>> flist = primefact(n);\r\
    \n\t\tfor(pair<int, int> &p : flist) {\r\n\t\t\tres *= p.second + 1;\r\n\t\t}\r\
    \n\t\treturn res;\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/sieve_of_eratosthenes.cpp
  requiredBy: []
  timestamp: '2021-03-18 14:59:01+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_NTL_1_A.test.cpp
  - test/aoj_ALDS1_1_C.test.cpp
documentation_of: math/sieve_of_eratosthenes.cpp
layout: document
title: "Sieve-of-Eratosthenes(\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\u7BE9\
  )"
---

## なにこれ
エラトステネスの篩というやつ．
前処理して素数判定を高速にやるなど．

## コンストラクタ
- `Sieve(n)`：$n$ までの篩を前計算する．$n \leq 10^{8}$ 程度．

## メンバ関数
- `isprime(x)`：`x` が素数であれば `true`を，そうでなければ `false` を返す．
- `primefact(n)`：`n` を素因数分解し，$\\{素因数,個数\\}$ の `pair` の配列を返す．
- `divisorcount(n)`：`n` の約数の個数を返す．
	
## 計算量
- `Sieve(n)`：$O(n)$
- `isprime(x)`：$O(1)$
- `primefact(n)`：$O(\log n)$
- `divisorcount(n)`：$O(\log n)$

## 参考
- [Sieve of Eratosthenes With Linear Time Complexity  - Competitive Programming Algorithms](https://cp-algorithms.com/algebra/prime-sieve-linear.html)
