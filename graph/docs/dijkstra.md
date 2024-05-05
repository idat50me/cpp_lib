---
title: Dijkstra(経路復元付ダイクストラ)
documentation_of: ../dijkstra.cpp
---

## なにこれ
始点 $s$ から各頂点までの最短距離および最短経路を求める．

## コンストラクタ
- `dijkstra(path, cost, s)`：隣接リスト `path`，各辺の重み `cost`，始点 `s` の無向グラフに対しダイクストラ法を適用する．

## メンバ関数
- `operator[](idx)`：始点 $s$ から頂点 $\mathrm{idx}$ までの最短距離を返す．
- `get_path(t)`：始点 $s$ から頂点 $t$ までの最短経路を返す．

## 計算量
頂点数を $n$，辺数を $m$ とする．
- コンストラクタ：$O((n+m)\log n)$
- `operator[](idx)`：$O(1)$
- `get_path(t)`：$O(n)$
