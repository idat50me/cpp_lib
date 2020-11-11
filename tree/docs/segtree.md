---
title: segtree(セグメント木)
documentation_of: ../segtree.cpp
---

## なにこれ
区間取得・一点更新可能な要素 $n$ のセグメント木．

## 制約
- $n \leq 10^8$ 程度

## テンプレート引数
- `op`：二項演算の結果を返す関数．
- `e`：単位元を返す関数．

## コンストラクタ
- `segtree(n, init)`：計算量 $O(n)$
	- `n`：要素数．
	- `init`：初期値．

- `segtree(v)`
	- `v`：初期要素を格納している配列．

## メンバ関数
- `update(idx, val)`：計算量 $O(\log n)$  
	要素を更新する．
	- `idx`：更新する要素の index
	- `val`：更新後の要素の値．

- `get(idx)`：計算量 $O(\log n)$  
	指定した index の要素を返す．
	- `idx`：取得する要素の index

- `get(L, R)`：計算量 $O(\log n)$  
	指定区間の二項演算の結果を返す．
	- `L,R`：`[L,R)`を探索区間とする．
