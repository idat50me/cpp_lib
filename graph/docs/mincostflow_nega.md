---
title: mincostflow_nega(最小費用流)
documentation_of: ../mincostflow_nega.cpp
---

## なにこれ
各辺に容量とコスト(負辺が存在してもよい)が設定される有向グラフ $G=(V,E)$ 中で，
始点から終点まで流量 $F$ を流すのに必要な最小費用を求める．

ダイクストラ法を用いるために，最初の探索のみベルマンフォード法を用いて負辺除去している．

## コンストラクタ
- `mincostflow(V)`：`V` 頂点 $0$ 辺のグラフを構築する．$V \leq 10^8$ 程度．

## メンバ関数
- `add(from, to, cap, cost)`：頂点 `from` から頂点 `to` へ容量 `cap`，コスト `cost` の有向辺を追加する．$0 \leq cap$
- `solve(s, t, f)`：頂点 `s` から頂点 `t` へ流量 `f` を流すのに必要な最小費用を返す．流量 `f` を流せない場合は `mincostflow::inf` を，負閉路を検出した場合は `-mincostflow::inf` を返す．
- `stat()`：各辺の端点と現在流れている流量を格納した配列を返す．

## 計算量
- `mincostflow(V)`：$O(V)$
- `add(from, to, cap, cost)`：ならし $O(1)$
- `solve(s, t, f)`：$O(VE+F(E+V)\log V)$
- `stat()`：$O(E)$
