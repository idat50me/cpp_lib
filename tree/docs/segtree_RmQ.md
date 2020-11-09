---
title: RmQ(区間最小値)
documentation_of: ../segtree_RmQ.cpp
---

## なにこれ
$n$ 個の要素を持つ配列の区間最小値を求めるセグメント木．

## 制約
- $n \leq 10^8$ 程度

## コンストラクタ
- `RmQ(v)`：計算量 $O(n)$
	- `v`：初期要素を格納している配列．

## メンバ関数
- `update(idx, val)`：計算量 $O(\log n)$  
	要素を更新する．
	- `idx`：更新する要素の index
	- `val`：更新後の要素の値．

- `getmin(L, R)`：計算量 $O(\log n)$  
	区間最小値を求める．
	- `L,R`：`[L,R)`を探索区間とする．
