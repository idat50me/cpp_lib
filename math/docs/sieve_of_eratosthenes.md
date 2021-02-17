---
title: Sieve-of-Eratosthenes(エラトステネスの篩)
documentation_of: ../sieve_of_eratosthenes.cpp
---

## なにこれ
エラトステネスの篩というやつ．
前処理して素数判定を高速にやるなど．

## コンストラクタ
- `Sieve(n)`：$n$ までの篩を前計算する．

## メンバ関数
- `isprime(x)`：`x` が素数であれば `true`を，そうでなければ `false` を返す．
- `primefact(n)`：`n` を素因数分解し，$\\{素因数,個数\\}$ の `pair` の配列を返す．
- `divisorcount(n)`：`n` の約数の個数を返す．
	
## 計算量
- `Sieve(n)`：$O(n)$
- `isprime(x)`：$O(1)$
- `primefact(n)`：$O(\log n)$
- `divisorcount(n)`：$O(\log n)$
