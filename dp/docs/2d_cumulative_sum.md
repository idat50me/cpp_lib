---
title: 2D-Cumulative-Sum( $2$ 次元累積和)
documentation_of: ../2d_cumulative_sum.cpp
---

## なにこれ
$2$ 次元配列をもとに $2$ 次元累積和を求める．

## コンストラクタ
- `sum2d(m)`：$2$ 次元配列 `m` をもとに $2$ 次元累積和のテーブルを構築する．

## メンバ関数
- `get(sx, sy, tx, ty)`：$(sx,sy)$ から $(tx,ty)$ までの累積和を返す．$sx \leq tx, tx \leq ty$ であり，$(sx,sy)$ 側が開区間である．

## 計算量
- コンストラクタ：$O(HW)$
- `get(sx, sy, tx, ty)`：$O(1)$
