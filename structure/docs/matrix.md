---
title: Matrix(行列)
documentation_of: ../matrix.cpp
---

## なにこれ
行列演算のライブラリ．

## コンストラクタ
- `matrix()`：$0$ 行 $0$ 列の行列を作る．
- `matrix(h, w)`：`h` 行 `w` 列の行列を作る．
- `matrix(h, w, init)`：`init` を初期値とする `h` 行 `w` 列の行列を作る．
- `matrix(m_init)`：`m_init`を初期値とする行列を作る．

## メンバ関数
- `assign(h, w)`：`h` 行 `w` 列の行列を作る．
- `assign(h, w, init)`：`init` を初期値とする `h` 行 `w` 列の行列を作る．
- `height()`, `width()`：行列の縦・横のサイズを返す．
- `in()`：現在の要素サイズ分だけ標準入力する．
- `in(h, w)`：`h` 行 `w` 列の行列を作り標準入力する．
- `out()`：要素を空白区切りで標準出力する．
- `operator[](idx)`：`idx` 番目の要素である $1$ 次元配列の参照を返す．`vector` を用いた多次元配列と同様に扱える．
- `operator+, operator-, operator*`：行列和・行列差・行列積．通常の算術演算子と同様に扱える．
- `pow(ex)`：行列累乗の結果を返す．

- `static identity(n)`：`n` 次単位行列を返す．

## 計算量
$H$ 行 $W$ 列の行列を扱うとする．
- コンストラクタ：$O(HW)$
- `assign()`：$O(HW)$
- `height()`, `width()`：$O(1)$
- `in()`：$O(HW)$
- `out()`：$O(HW)$
- `operator[](idx)`：$O(1)$
- `identiry(n)`：$O(n^2)$
- 行列和・行列差：$O(HW)$

$H_1$ 行 $W_1$ 列の行列と $H_2$ 行 $W_2$ 列の行列を扱うとする．
- 行列積：$O(H_1W_1W_2)$

$k$ 次正方行列を扱うとする．
- `pow(ex)`：$O(k^3 \log \mathrm{ex})$

## 参考
- [初期化子リスト - cpprefjp C++日本語リファレンス](https://cpprefjp.github.io/lang/cpp11/initializer_lists.html)
