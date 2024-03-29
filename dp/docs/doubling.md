---
title: Doubling(ダブリング)
documentation_of: ../doubling.cpp
---

## なにこれ
各頂点からの遷移先が $1$ 点に定まっているとき，ある頂点から $T$ 回遷移したときの状態を高速に求める．

## コンストラクタ
- `doubling(v, _max_t)`：各頂点から $1$ 回遷移した先の頂点を格納した配列 `v`，遷移の最大回数 `_max_t` を元にダブリングテーブルを構築する．
- `doubling(v, v_data, _max_t, _f)`：上記の引数に加え，各頂点から $1$ 回の遷移で変化する状態を格納した配列 `v_data`，状態遷移関数 `_f` を元にダブリングテーブルを構築する．

## メンバ関数
- `get(x, init, t)`：初期頂点 `x`，初期値 `init` として `t` 回遷移したときの状態を返す．
- `get_idx(x, t)`：初期頂点 `x` から `t` 回遷移した先の頂点を返す．

## 計算量
頂点数を $N$，遷移回数を $T$ とし，遷移関数は $O(1)$ で動作するものとする．
- コンストラクタ：$O(N \log \max(T))$
- `get(x, init, t)`：$O(\log T)$
- `get_idx(x, t)`：$O(\log T)$

---

## Verified with (AtCoder)
- [abc167_d](https://atcoder.jp/contests/abc167/submissions/20642022)
- [abc175_d](https://atcoder.jp/contests/abc175/submissions/20641894)
