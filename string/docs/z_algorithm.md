---
title: Z-Algorithm(最長共通接頭辞)
documentation_of: ../z_algorithm.cpp
---

## なにこれ
文字列 $S$ とその連続部分文字列 $S[i, |S|)$ の最長共通接頭辞の長さを求める．

## 関数
- `z_algorithm(S)`：`S` と `S[i, |S|)` の最長共通接頭辞の長さを `v[i]` とする配列 `v` を返す．

## 計算量
- $O(\|S\|)$
