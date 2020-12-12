---
title: Millor-Rabin(ミラー・ラビン素数判定法)
documentation_of: ../millor_rabin.cpp
---

## なにこれ
ミラー・ラビン素数判定法を用いた素数判定．

## 関数
- `isprime(n)`：$n$ が素数であれば `true` を，そうでなければ `false` を返す．$n \leq $ `LLONG_MAX`

## 計算量
- $O(\log^3 n)$

## 補足
実際は重めの定数倍 $(k=12)$ がついている．

以下，ループさせたときの実験結果 (単位: sec)

Loop | $n \leq 2 \times 10^9$ | $n \leq 9 \times 10^{18}$
---: | ---: | ---:
$10^5$ | $0.053$ | $0.124$
$10^6$ | $0.529$ | $1.235$

## 参考
- [Miller–Rabin primality test - Wikipedia](https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test#Testing_against_small_sets_of_bases)
