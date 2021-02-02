---
title: binary_indexed_tree(BIT)
documentation_of: ../binary_indexed_tree.cpp
---

## なにこれ
一点加算・区間和取得を対数時間で行うことができるデータ構造．
セグメント木より定数倍が軽い．

## コンストラクタ
- `BIT(n)`：要素数 `n` の BIT を構築する．
- `BIT(v)`：配列 `v` の要素で BIT を構築する．

## メンバ関数
- `sum(idx)`：`idx` 番目までの要素の総和を返す．
- `sum(l, r)`：`l` 番目から `r` 番目までの要素の総和を返す．
- `add(idx, val)`：`idx` 番目の要素に `val` を加える．

`idx`, `l`, `r` は 1-indexed である．

## 計算量
- `BIT(n)`：$O(n)$
- `BIT(v)`：$O(n)$
- `sum(idx)`：$O(\log n)$
- `sum(l, r)`：$O(\log n)$
- `add(idx, val)`：$O(\log n)$
