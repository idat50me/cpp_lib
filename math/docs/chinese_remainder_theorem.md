---
title: Chinese-Remainder-Theorem(中国剰余定理)
documentation_of: ../chinese_remainder_theorem.cpp
---

## なにこれ
要素数 $n$ の配列 $B, M$ について，$x \equiv B_i \pmod{M_i}$ を満たす $x \equiv b \pmod m$ を求める．

## 関数
- `crt(B, M)`：配列 `B`, `M` を引数にとり，`pair(b, m)` を返す．条件を満たす $x$ が存在しない場合は `pair(0, 0)` を返す．$\operatorname{lcm}(M_1,\ M_2,\ ...\ ,\ M_n) \leq$ `LLONG_MAX`である必要がある．

## 計算量
- `crt(B, M)`：$O(n \log M_{\max})$

## 補足
$x$ について，合同式 $x \equiv b \pmod m$ と表現できる最小の $m$ は $\operatorname{lcm}(M_1,\ M_2,\ ...\ ,\ M_n)$ である．

## 参考
- [中国剰余定理 (CRT) の解説と、それを用いる問題のまとめ - Qiita](https://qiita.com/drken/items/ae02240cd1f8edfc86fd)
