---
title: Rolling-Hash
documentation_of: ../rolling_hash.cpp
---

## なにこれ
文字列 $S$ の部分文字列に文字列 $T$ が存在するかを高速に判定する．

## コンストラクタ
- `RollingHash(s)`：文字列 `s` のハッシュテーブルを構築する．

## メンバ関数
- `get(l, r)`：$S$ の部分文字列 $S[l, r)$ のハッシュ値を返す．
- `get(t)`：文字列 $T$ のハッシュ値を返す．
- `match(t)`：文字列 $T$ と等しい，$S$ の部分文字列 $S[l, r)$ の $l$ を格納した配列を返す．

## 計算量
文字列 $S, T$ の長さをそれぞれ $n, m$ とする．
- コンストラクタ：$O(n)$
- `get(l, r)`：$O(1)$
- `get(t)`：$O(m)$
- `match(t)`：$O(n)$

## 参考
- [蟻本片手に学ぶアルゴリズム 〜ローリングハッシュ〜](https://qiita.com/hirominn/items/80464ee381c8d400725f)
- [Rolling Hashを殺す話](https://www.slideshare.net/nagisaeto/rolling-hash-149990902)
- [安全で爆速なRollingHashの話](https://qiita.com/keymoon/items/11fac5627672a6d6a9f6)
