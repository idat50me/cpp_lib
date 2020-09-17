---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':warning:'
    path: test/aoj_0019.cpp
    title: test/aoj_0019.cpp
  - icon: ':warning:'
    path: combinatorics/npr.cpp
    title: nPr mod p
  - icon: ':warning:'
    path: combinatorics/ncr.cpp
    title: nCr
  - icon: ':warning:'
    path: combinatorics/nhr.cpp
    title: nHr
  - icon: ':warning:'
    path: combinatorics/nhr.cpp
    title: nHr
  - icon: ':heavy_check_mark:'
    path: combinatorics/ncr2.cpp
    title: "nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(r)$)"
  - icon: ':heavy_check_mark:'
    path: combinatorics/combinatorics.cpp
    title: "Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)"
  - icon: ':heavy_check_mark:'
    path: math/isprime.cpp
    title: "Isprime(\u7D20\u6570\u5224\u5B9A)"
  - icon: ':heavy_check_mark:'
    path: math/millor_rabin.cpp
    title: "Millor-Rabin(\u30DF\u30E9\u30FC\u30FB\u30E9\u30D3\u30F3\u7D20\u6570\u5224\
      \u5B9A\u6CD5)"
  - icon: ':heavy_check_mark:'
    path: math/binpow.cpp
    title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
  - icon: ':heavy_check_mark:'
    path: math/divisor.cpp
    title: "Divisor(\u7D04\u6570\u5217\u6319)"
  - icon: ':warning:'
    path: math/factorial.cpp
    title: "Factorial(\u968E\u4E57)"
  - icon: ':heavy_check_mark:'
    path: math/sieve_of_eratosthenes.cpp
    title: "Sieve-of-Eratosthenes(\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\
      \u7BE9)"
  - icon: ':heavy_check_mark:'
    path: mod/modint.cpp
    title: ModInt
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_E_2.test.cpp
    title: test/aoj_DPL_5_E_2.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_E_2.test.cpp
    title: test/aoj_DPL_5_E_2.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_A.test.cpp
    title: test/aoj_NTL_1_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0117.test.cpp
    title: test/yuki_0117.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0117.test.cpp
    title: test/yuki_0117.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_0341.test.cpp
    title: test/aoj_0341.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_0341.test.cpp
    title: test/aoj_0341.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_B.test.cpp
    title: test/aoj_NTL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_NTL_1_B.test.cpp
    title: test/aoj_NTL_1_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_2.test.cpp
    title: test/aoj_ALDS1_1_C_2.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_2.test.cpp
    title: test/aoj_ALDS1_1_C_2.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_E.test.cpp
    title: test/aoj_DPL_5_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_E.test.cpp
    title: test/aoj_DPL_5_E.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_D.test.cpp
    title: test/aoj_DPL_5_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_5_D.test.cpp
    title: test/aoj_DPL_5_D.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_3.test.cpp
    title: test/aoj_ALDS1_1_C_3.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C_3.test.cpp
    title: test/aoj_ALDS1_1_C_3.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0888.test.cpp
    title: test/yuki_0888.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0888.test.cpp
    title: test/yuki_0888.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C.test.cpp
    title: test/aoj_ALDS1_1_C.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_1_C.test.cpp
    title: test/aoj_ALDS1_1_C.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    links: []
  bundledCode: '#line 1 "pre/macros.cpp"




    using ll = long long;


    #define MPRIME (ll)(1e9+7)

    #define MMPRIME ((1LL<<61)-1)



    '
  code: '#ifndef lib_macros

    #define lib_macros


    using ll = long long;


    #define MPRIME (ll)(1e9+7)

    #define MMPRIME ((1LL<<61)-1)


    #endif // lib_macros

    '
  dependsOn: []
  isVerificationFile: false
  path: pre/macros.cpp
  requiredBy:
  - test/aoj_0019.cpp
  - combinatorics/npr.cpp
  - combinatorics/ncr.cpp
  - combinatorics/nhr.cpp
  - combinatorics/nhr.cpp
  - combinatorics/ncr2.cpp
  - combinatorics/combinatorics.cpp
  - math/isprime.cpp
  - math/millor_rabin.cpp
  - math/binpow.cpp
  - math/divisor.cpp
  - math/factorial.cpp
  - math/sieve_of_eratosthenes.cpp
  - mod/modint.cpp
  timestamp: '2020-07-15 18:10:42+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_DPL_5_E_2.test.cpp
  - test/aoj_DPL_5_E_2.test.cpp
  - test/aoj_NTL_1_A.test.cpp
  - test/yuki_0117.test.cpp
  - test/yuki_0117.test.cpp
  - test/aoj_0341.test.cpp
  - test/aoj_0341.test.cpp
  - test/aoj_NTL_1_B.test.cpp
  - test/aoj_NTL_1_B.test.cpp
  - test/aoj_ALDS1_1_C_2.test.cpp
  - test/aoj_ALDS1_1_C_2.test.cpp
  - test/aoj_DPL_5_E.test.cpp
  - test/aoj_DPL_5_E.test.cpp
  - test/aoj_DPL_5_D.test.cpp
  - test/aoj_DPL_5_D.test.cpp
  - test/aoj_ALDS1_1_C_3.test.cpp
  - test/aoj_ALDS1_1_C_3.test.cpp
  - test/yuki_0888.test.cpp
  - test/yuki_0888.test.cpp
  - test/aoj_ALDS1_1_C.test.cpp
  - test/aoj_ALDS1_1_C.test.cpp
documentation_of: pre/macros.cpp
layout: document
redirect_from:
- /library/pre/macros.cpp
- /library/pre/macros.cpp.html
title: pre/macros.cpp
---
