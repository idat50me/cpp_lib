---
title: 2D-Cumulative-Sum( $2$ 次元累積和)
documentation_of: ../2d_cumulative_sum.cpp
---

## なにこれ
$2$ 次元配列をもとに $2$ 次元累積和を求める．

## コンストラクタ
- `sum2d(m)`：$2$ 次元配列 `m` をもとに $2$ 次元累積和のテーブルを構築する．

## メンバ関数
- `get(x, y)`：$(x,y)$ までの累積和を返す．
- `get(sx, sy, tx, ty)`：$(sx,sy)$ から $(tx,ty)$ までの累積和を返す．$sx \leq tx,\ sy \leq ty$ であり，$(sx,sy)$ 側が開区間である．
- `out()`：累積和テーブルを出力する．

## 計算量
- コンストラクタ：$O(HW)$
- `get()`：$O(1)$
- `out()`：$O(HW)$

## 注意点
累積和テーブルを構築する際に，index が1つずれることに注意．(1次元累積和テーブルで `table[0]` に $0$ を格納するように，`table[0][y]` と `table[x][0]` に $0$ を格納している．)
