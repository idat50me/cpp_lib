---
title: Matrix( $2$ 次元行列)
documentation_of: ../matrix.cpp
---

## なにこれ
宣言とか入出力とか簡単にした $2$ 次元配列です．

## コンストラクタ
- `matrix()`
- `matrix(h, w)`
- `matrix(h, w, init)`  
	`make()` を呼びます

## メンバ関数
- `make(h, w)`
- `make(h, w, init)`  
	要素数を変更する．  
	`vector::resize()` を呼んでるので既に確保されている要素は初期化されない．
	- `h`, `w`：各次元の要素数
	- `init`：初期値

- `in()`  
	現在の要素サイズ分だけ標準入力する．

- `out()`  
	要素を空白区切りで標準出力する．
