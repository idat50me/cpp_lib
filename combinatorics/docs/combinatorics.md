---
title: Combinatorics(組合せ数学)
documentation_of: ../combinatorics.cpp
---

## なにこれ
${}_nP_r, {}_nC_r, {}_nH_r\ (\mathrm{mod}\ p)$ を求める．

## 制約
- $n \leq 10^7$ 程度
- $p$ は素数

## コンストラクタ
- `COMB(mx, p)`：計算量 $O(n)$
	- `mx`：$n$ の最大値．ただし ${}_nH_r$ を求める場合は $(n+r-1)$ の最大値．
	- `p`：値の法．

## メンバ関数
- `npr(n, r)`：計算量 $O(1)$

- `ncr(n, r)`：計算量 $O(1)$

- `nhr(n, r)`：計算量 $O(1)$