---
title: Segment Set(区間をsetで管理するやつ)
documentation_of: ../segment_set.cpp
---

## なにこれ
区間の集合についてのクエリを処理する構造体

## コンストラクタ
- `SegmentSet()`：初期化した集合 $S$ を得る．

## メンバ関数
- `insert(x)`：$S \leftarrow S \cup \{x\}$
- `insert(l, r)`：$S \leftarrow S \cup \{l, l+1, ..., r-1, r\}$
- `erase(x)`：$S \leftarrow S \setminus \{x\}$
- `erase(l, r)`：$S \leftarrow S \setminus \{l, l+1, ..., r-1, r\}$

- `get_seg(x)`：$x$ が所属する区間の両端の値をもつ `pair` を返す．$x$ がどの区間にも所属しない場合は `pair(0, -1)` を返す．
- `min()`：最も左にある区間の左端の値を返す．
- `max()`：最も右にある区間の右端の値を返す．
- `mex(x)`：$x$ 以上であって集合に含まれない値のうち最小のものを返す．
- `same(x, y)`：$x$ と $y$ が同じ区間に含まれる場合は `true`，そうでない場合は `false` を返す．
- `size()`：区間の数を返す．
- `out()`：区間の一覧表示を出力する．

## 計算量
区間の数を $n$ とする．
- `insert(x)`：$O(\log n)$
- `insert(l, r)`：$O(\log n)$
- `erase(x)`：$O(\log n)$
- `erase(l, r)`：$O(\log n)$

- `get_seg(x)`：$O(\log n)$
- `min()`：$O(1)$
- `max()`：$O(1)$
- `mex(x)`：$O(\log n)$
- `same(x, y)`：$O(\log n)$
- `size()`：$O(1)$
- `out()`：$O(n)$

## 参考
- [要素の追加・削除と mex を対数時間で処理するよ - えびちゃんの日記](https://rsk0315.hatenablog.com/entry/2020/10/11/125049)
- [区間をsetで管理するやつ - satanic0258.github.io](https://satanic0258.github.io/snippets/data-structure/SegmentMap.html)
