---
title: 2D-Array( $2$ 次元配列)
documentation_of: ../2d_array.cpp
---

## なにこれ
入出力・宣言を簡潔に行える $2$ 次元配列．

## コンストラクタ
- `matrix()`：$0$ 行 $0$ 列の $2$ 次元配列を作る．
- `matrix(h, w)`：`h` 行 `w` 列の $2$ 次元配列を作る．
- `matrix(h, w, init)`：`init` を初期値とする `h` 行 `w` 列の $2$ 次元配列を作る．
- `matrix(m_init)`：`m_init`を初期値とする $2$ 次元配列を作る．

## メンバ関数
- `assign(h, w)`：`h` 行 `w` 列の $2$ 次元配列を作る．
- `assign(h, w, init)`：`init` を初期値とする `h` 行 `w` 列の $2$ 次元配列を作る．
- `size()`：配列の縦のサイズを返す．
- `in()`：現在の要素サイズ分だけ標準入力する．
- `in(h, w)`：`h` 行 `w` 列の $2$ 次元配列を作り標準入力する．
- `out()`：要素を空白区切りで標準出力する．
- `operator[](idx)`：`idx` 番目の要素である $1$ 次元配列の参照を返す．`vector` を用いた多次元配列と同様に扱える．
- `rangeout(x ,y)`：`x` 行 `y` 列目の要素が存在しない場合は `true` ，存在する場合は `false` を返す．

## 計算量
$H$ 行 $W$ 列の行列を扱うとする．
- コンストラクタ：$O(HW)$
- `assign()`：$O(HW)$
- `size()`：$O(1)$
- `in()`：$O(HW)$
- `out()`：$O(HW)$
- `operator[](idx)`：$O(1)$
- `rangeout(x, y)`：$O(1)$

## 参考
- [初期化子リスト - cpprefjp C++日本語リファレンス](https://cpprefjp.github.io/lang/cpp11/initializer_lists.html)
