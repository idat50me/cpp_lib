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
	`resize()` を呼ぶ．

## メンバ関数
- `resize(h, w)`
- `resize(h, w, init)`  
	要素数を変更する．  
	内部では `vector` のコンストラクタを呼んでるので初期化と同じ．
	- `h`, `w`：各次元の要素数
	- `init`：初期値

- `in()`  
	現在の要素サイズ分だけ標準入力する．

- `out()`  
	要素を空白区切りで標準出力する．
