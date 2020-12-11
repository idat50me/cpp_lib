---
title: segtree(セグメント木)
documentation_of: ../segtree.cpp
---

## なにこれ
区間取得・一点更新可能な要素数 $n$ のセグメント木．

## コンストラクタ
- `segtree(n, func, e)`：要素数 `n` のセグメント木を構築する．
- `segtree(v, func, e)`：配列 `v` の要素を持つセグメント木を構築する．

`func` は二項演算の関数，`e` は単位元．$n \leq 10^8$ 程度．

## メンバ関数
- `update(idx, val)`：`idx` 番目の要素を値 `val` に更新する．
- `get(idx)`：`idx` 番目の要素を返す．
- `get(L, R)`：区間 `[L, R)` の二項演算の結果を返す．

`idx`, `L`, `R` は 0-indexed である．

## 計算量
- `segtree(n, func, e)`：$O(n)$
- `segtree(v, func, e)`：$O(n)$
- `update(idx, val)`：$O(\log n)$
- `get(idx)`：$O(\log n)$
- `get(L, R)`：$O(\log n)$
