---
title: maxflow(最大流)
documentation_of: ../maxflow.cpp
---

## なにこれ
各辺に容量が設定される有向グラフ $G=(V,E)$ 中で，始点から終点まで流せる最大の流量を求める．

## コンストラクタ
- `maxflow(V)`：`V` 頂点 $0$ 辺のグラフを作る．$V \leq 10^8$ 程度．

## メンバ関数
- `add(from, to, cap)`：頂点 `from` から頂点 `to` へ容量 `cap` の辺を追加する．$0 \leq cap$
- `solve(s, t)`：頂点 `s` から頂点 `t` へ流せる最大の流量を返す．

## 計算量
$F$を最大流の流量とする．
- `maxflow(V)`：$O(V)$
- `add(from, to, cap)`：ならし $O(1)$
- `solve(s, t)`：$O(F(V+E))$
