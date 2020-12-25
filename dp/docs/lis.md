---
title: LIS(最長増加部分列)
documentation_of: ../lis.cpp
---

## なにこれ
最長増加部分列(LIS)の長さを求める．


## 関数
- `LIS(v, strict)`：配列 `v` の最長増加部分列の長さを返す．`strict` が `true` の場合は狭義単調，`false` の場合は広義単調の長さを返す．

## 計算量
`v` の要素数を $n$ とする．
- $O(n \log n)$
