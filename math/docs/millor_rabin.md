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
定数倍 $(k=7)$ がついている．

以下，ループさせたときの実行時間（Local / AtCoder $[\textrm{ms}]$）
- $n \leq 2 \times 10^9$ で乱数
	- loop = $10^5$ : $0.024$ / $0.015$
	- loop = $10^6$ : $0.237$ / $0.150$
- $n \leq 9 \times 10^{18}$ で乱数
	- loop = $10^5$ : $0.064$ / $0.029$
	- loop = $10^6$ : $0.639$ / $0.292$

[テスト用コード](https://gist.github.com/idat50me/c6e7e2a528586c8e6b1ad512b3255fe7)

## 参考
- [Miller–Rabin primality test - Wikipedia](https://en.wikipedia.org/wiki/Miller%E2%80%93Rabin_primality_test#Testing_against_small_sets_of_bases)
- [Deterministic variants of the Miller-Rabin primality test](https://miller-rabin.appspot.com)
