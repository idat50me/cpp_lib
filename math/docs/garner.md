---
title: Garner's Algorithm
documentation_of: ../garner.cpp
---

## なにこれ
要素数 $n$ の配列 $B, M$ について，$x \equiv B_i \pmod{M_i}$ を満たす最小の非負整数を $x$ としたとき，$x \bmod p$ を求める．

中国剰余定理では $\operatorname{lcm}(M_1,\ M_2,\ ...\ ,\ M_n) \leq$ `LLONG_MAX` の制約があるが，Garner's Algorithm ではオーバーフローすることなく $p$ を法とする値を求めることができる．

## 関数
- `pregarner(B, M, p)`：$M_i,\ M_j\ (i < j)$ が互いに素になるように配列 `B`, `M` を再構築し，$\operatorname{lcm}(M_1,\ M_2,\ ...,\ M_n) \bmod p$ を返す．任意の $2$ 数について既に互いに素であることがわかっている場合は不要．
- `garner(B, M, p)`：配列 `B`, `M` を引数にとり，$x \bmod p$ を返す．条件を満たす $x$ が存在しない場合は $-1$ を返す．

## 計算量
- `pregarner(B, M, p)`：$O(n^2 \log M_{\max})$
- `garner(B, M, p)`：$O(n^2 + n \log p)$

## 参考
- [中国剰余定理 (CRT) の解説と、それを用いる問題のまとめ - Qiita](https://qiita.com/drken/items/ae02240cd1f8edfc86fd)
