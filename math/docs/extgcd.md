---
title: extgcd(拡張ユークリッドの互除法)
documentation_of: ../extgcd.cpp
---

## なにこれ
一次不定方程式 $ax+by=c$ の 1 つの整数解 $(x,y)$ を求める．

## 関数
- `extgcd(a, b, x, y)`：$ax+by=\gcd(|a|,|b|)$ の解のうち，$|x|+|y|$ が最小なものを `x`, `y` に格納し，$\gcd(|a|,|b|)$ を返す．
- `extgcd(a, b, c, x, y)`：$ax+by=c$ の 1 つの解を `x`, `y` に格納し，$\gcd(|a|,|b|)$ を返す．整数解が存在しない場合は $-1$ を返す．

## 計算量
- $O(\log a)$

## 補足
### 一般解の導出
- 求めた特殊解 $(x_0,y_0)$
- $d = \gcd(a,b)$ とし，$a' = \dfrac a d,\ b' = \dfrac b d$ とおく

このとき，一般解は $(x,y) = (x_0+b't,\ y_0-a't)$
