---
title: Combinatorics(組合せ数学)
documentation_of: ../combinatorics.cpp
---

## なにこれ
${}_nP_r, {}_nC_r, {}_nH_r\ (\mathrm{mod}\ p)$ を求める．

## 制約
- $n \leq 10^7$ 程度
- $p$ は素数

## メンバ関数
- `npr(n, r)`：計算量 $O(1)$

- `ncr(n, r)`：計算量 $O(1)$

- `nhr(n, r)`：計算量 $O(1)$


## コンストラクタ
- `COMB(n, p)`：$n$ の最大値を `n` ，法を `p` とする．${}_nH_r$ を求める場合は $(n+r-1)$ の最大値を `n` とする．$n \leq 10^7$ 程度．$p$ は素数．

## メンバ関数
- `npr(n, r)`
- `ncr(n, r)`
- `nhr(n, r)`

## 計算量
- `COMB(n, p)`：$O(n)$
- `npr(n, r)`：$O(1)$
- `ncr(n, r)`：$O(1)$
- `nhr(n, r)`：$O(1)$
