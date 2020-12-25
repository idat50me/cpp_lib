---
title: levenshtein_distance
documentation_of: ../levenshtein_distance.cpp
---

## なにこれ
レーベンシュタイン距離（編集距離）を求める．

## 関数
- `levenshtein(s1, s2)`：文字列 `s1` と `s2` の編集距離を返す．
- `levenshtein(v1, v2)`：配列 `v1` と `v2` の編集距離を返す．

## 計算量
`s1` の長さ（`v1` の要素数）を $n$ ，`s2` の長さ（`v2` の要素数）を $m$ とする．
- $O(nm)$
