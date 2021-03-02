---
title: Topological-Sort(トポロジカルソート)
documentation_of: ../topological_sort.cpp
---

## なにこれ
グラフの隣接リストを元に，各辺について終点より始点が先にくる頂点配列を求める．

## 関数
- `topological(lst)`：隣接リスト `lst` を元に，トポロジカルソートした頂点配列を返す．
- `topological(lst, indeg)`：隣接リスト `lst`，頂点の入次数を格納した配列 `indeg` を元に，トポロジカルソートした頂点配列を返す．

## 計算量
頂点数を $V$，辺の数を $E$ とする．
- `topological(lst)`：$O(V+E)$
- `topological(lst, indeg)`：$O(V+E)$
