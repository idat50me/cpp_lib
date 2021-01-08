---
title: nCr mod p ($r \leq 10^7$, クエリ $O(1)$ or $O(r)$)
documentation_of: ../ncr2.cpp
---

## なにこれ
${}_nC_r\ (\mathrm{mod}\ p)$ を求める．
計算量が $r$ 依存．

## コンストラクタ
- `NCR(n, r, p)`：$r$ の最大値を `r`，法を `p` とする．($n$ は固定値)
- `NCR(r, p)`：$r$ の最大値を `r`，法を `p` とする．

$n \leq 10^9$，$r \leq 10^7$ 程度．$p$ は素数．

## メンバ関数
- `calc(n, r)`：計算量 $O(1)$ or $O(r)$  
	${}_nC_r$ を求める．  
	$n$ が固定値のときは $O(1)$，不定値のときは $O(r)$

## 計算量
- `NCR(n, r, p)`：$O(r)$
- `NCR(r, p)`：$O(r)$
- `calc(n, r)`：$n$ の最大値が既知の場合 $O(1)$，未知の場合 $O(r)$
