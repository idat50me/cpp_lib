---
title: mincostflow(最小費用流)
documentation_of: ../mincostflow.cpp
---

## なにこれ
各辺に容量と非負のコストが設定される有向グラフ $G=(V,E)$ 中で，
始点から終点まで流量 $F$ を流すのに必要な最小費用を求める．

## コンストラクタ
- `mincostflow(V)`：`V` 頂点 $0$ 辺のグラフを構築する．$V \leq 10^8$ 程度．

## メンバ関数
- `add(from, to, cap, cost)`：頂点 `from` から頂点 `to` へ容量 `cap`，コスト `cost` の有向辺を追加する．$0 \leq cap, cost$
- `solve(s, t, f)`：頂点 `s` から頂点 `t` へ流量 `f` を流すのに必要な最小費用を返す．流量 `f` を流せない場合は `mincostflow::inf` を返す．

## 計算量
- `mincostflow(V)`：$O(V)$
- `add(from, to, cap, cost)`：ならし $O(1)$
- `solve(s, t, f)`：$O(F(E+V)\log V)$
