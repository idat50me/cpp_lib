---
title: Prime-Factorization(素因数分解)
documentation_of: ../primefact.cpp
---

## なにこれ
素因数分解をする．

## 関数
- `primefact(x)`：
`x` を素因数分解した結果を `vector<pair>` で返す．
各要素について，`first` に素因数，`second` に冪指数を格納する．
`x` が $1$ 以下の場合，空の配列を返す．

## 計算量
- $O(\sqrt x)$
