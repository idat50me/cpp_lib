---
title: nCr mod p ($n > p$)
documentation_of: ../small_p_ncr.cpp
---

## なにこれ
${}_nC_r\ (\bmod\ p)$ を求める．$n > p$ でも動く．

## コンストラクタ
- `spncr(n, p)`：$n$ の最大値を `n`，法を `p` とする．$p$ は素数．

## メンバ関数
- `operator()(n, r)`

## 計算量
- コンストラクタ：$O(n+p)$
- `operator()(n, r)`：$O(1)$

---

## Verified with (AtCoder)
- [arc117_c](https://atcoder.jp/contests/arc117/submissions/21896178)
