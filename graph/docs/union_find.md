---
title: Union-Find木
documentation_of: ../union_find.cpp
---

## なにこれ
$n$ 頂点を持つ Union-Find 木．

## コンストラクタ
- `UnionFind(n)`
- `UninoFind(n, f1)`
- `UninoFind(n, f2)`
- `UnionFind(n, f1, f2)`

`n` 頂点の Union-Find 木を構築する．

- `UnionFind(v, f2)`
- `UnionFind(v, f1, f2)`

各頂点が配列 `v` の要素をデータとして持つ Union-Find 木を構築する．

`function<bool(int,int,T&,T&)> f1` はマージテクの swap 判定関数．  
`function<void(T&,T&)> f2` はデータのマージを行う関数．(左の引数が親の値)  
$n \leq 10^8$ 程度．(保持するデータの大きさによる)

## メンバ関数
- `root(x)`：頂点 `x` が属する木の根を返す．
- `size(x)`：頂点 `x` が属する木のサイズを返す．
- `merge(x, y)`：頂点 `x` と `y` を結合し，属する木の根を返す．
- `same(x, y)`：頂点 `x` と `y` が同じ木に属するか判定する．
- `tnum()`：木の数を返す．

## 計算量
- コンストラクタ：$O(n)$
- `root(x)`：ならし $O(\log n)$
- `size(x)`：ならし $O(1)$
- `merge(x, y)`：ならし $O(1)$
- `same(x, y)`：ならし $O(1)$
- `tnum()`：$O(1)$
