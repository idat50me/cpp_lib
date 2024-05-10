---
title: segtree_lazy(遅延評価セグメント木)
documentation_of: ../segtree_lazy.cpp
---

## なにこれ
区間取得・区間更新可能な要素数 $n$ のセグメント木．
各要素について更新時の作用素を保持しておき，値が必要になるタイミングで要素と作用素をマージする．

## コンストラクタ
- `segtree_lazy(n, op, f_upd, f_lz, ex, em)`：要素数 `n` のセグメント木を構築する．
- `segtree_lazy(v, op, f_upd, f_lz, ex, em)`：配列 `v` の要素を持つセグメント木を構築する．

`op(l, r)` は要素の二項演算，`f_upd(x, m)` は要素と作用素をマージする二項演算，`f_lz(l, r)` は作用素を蓄積するときの二項演算（マージ順は `l` $\to$ `r`）．
`ex` は要素の単位元，`em` は作用素の単位元．
$n \leq 10^8$ 程度．

## メンバ関数
- `update(idx, val)`：`idx` 番目の要素を `val` との二項演算 `f_upd` の結果に更新する．
- `update(L, R, val)`：`[L, R)` 番目の要素を `val` との二項演算 `f_upd` の結果に更新する．
- `get(idx)`：`idx` 番目の要素を返す．
- `get(L, R)`：区間 `[L, R)` の二項演算 `op` の結果を返す．

`idx`, `L`, `R` は 0-indexed である．

## 計算量
各二項演算の計算量を $O(1)$ と仮定したときの計算量を示す．
- コンストラクタ：$O(n)$
- `update(idx, val)`：$O(\log n)$
- `update(L, R, val)`：$O(\log n)$
- `get(idx)`：$O(\log n)$
- `get(L, R)`：$O(\log n)$

## 気を付けるべき使用例
#### Range Matrix Multiplication
ある行列Aに行列Bを掛ける操作をすることは，Bを左から掛けることに相当する．


```cpp
using mat = matrix<T>;

auto op = /* 任意の範囲取得クエリ */;
mat ex = /* opの単位元 */;

/* ある行列Aに行列Bを掛ける操作をすることは、Bを左から掛けることに相当する */
auto f_upd = [](mat A, mat B) { return B * A; };
mat em = mat::Indentity();

auto seg = segtree_lazy(v /* or N */, op, f_upd, f_upd, ex, em);
```
