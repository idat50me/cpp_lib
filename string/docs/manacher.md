---
title: Manacher's Algorithm(最長回文)
documentation_of: ../manacher.cpp
---

## なにこれ
連続部分文字列の最長回文の半径を求める．

## 関数
文字列 `S` の連続部分文字列のそれぞれの中心について，最長の回文の半径を格納する配列 `v` を返す．
- `manacher(S)`：`i` 文字目を中心とする最長の回文の半径を `v[i]` に格納する．
- `manacher_even(S)`：`i` 文字目を中心とする最長の回文の半径を `v[2*i]` に，`i` 文字目と `i+1` 文字目の境を中心とする最長の回文の半径を `v[2*i+1]` に格納する．

## 計算量
- $O(\|S\|)$
