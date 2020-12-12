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

以下，ループさせたときの実行時間
- $n \leq 2 \times 10^9$ で乱数
	- ループ $10^5$ 回で $0.053 \sec$
	- ループ $10^6$ 回で $0.529 \sec$
- $n \leq 9 \times 10^{18}$ で乱数
	- ループ $10^5$ 回で $0.529 \sec$
	- ループ $10^6$ 回で $1.235 \sec$

## 参考
- [Miller–Rabin primality test - Wikipedia](https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test#Testing_against_small_sets_of_bases)
