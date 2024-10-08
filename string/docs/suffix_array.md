---
title: Suffix Array (SA-IS)
documentation_of: ../suffix_array.cpp
---

## なにこれ
文字列の Suffix Array を構築する．

## コンストラクタ
- `SuffixArray(s)`

## メンバ関数
- `get_array()`：文字列 `s` の Suffix Array を構築する．

## 計算量
文字列 `s` の長さを $n$ とする．
- コンストラクタ：$O(n)$
- `get_array()`：$O(n)$

## 補足
### SA-IS の処理の流れ
<details><summary>Open</summary><div>
<ol>
	<li>文字列 $s$ の末尾に辞書順で最も小さい文字を追加する．文字列 $s$ の長さを $n$ とする．</li>
	<li>
		$i = n-1, ..., 1, 0$ の順に L-type、S-type のいずれであるかを決定する．
		<ol>
			<li>$i = n-1$ ならば S-type．</li>
			<li>$s_i < s_{i+1}$ ならば S-type．</li>
			<li>$s_i > s_{i+1}$ ならば L-type．</li>
			<li>$s_i = s_{i+1}$ ならば $i+1$ の type と同じ．</li>
		</ol>
	</li>
	<li>
		$i\ (< n)$ に対して LMS であるかを決定する．
		<ul>
			<li>$i$ が S-type かつ $i-1$ が L-type のとき $i$ は LMS．</li>
		</ul>
	</li>
	<li>
		Induced Sorting を行う．
		<ol>
			<li>仮の Suffix Array $A$ を作成し，各 suffix の頭文字を基準にバケットの区切りを決定する．</li>
			<li>LMS を対応するバケットに下から埋める．</li>
			<li>
				$j = 0, 1, ..., n-1$ の順に次の処理を行う．
				<ul>
					<li>$A_j$ が埋まっており，かつ $i = A_j - 1$ が L-type ならば対応するバケットに上から埋める．</li>
				</ul>
			</li>
			<li>
				$j = n-1, ..., 1, 0$ の順に次の処理を行う．
				<ul>
					<li>$i = A_j - 1$ が S-type ならば対応するバケットに下から埋める．ただし，初めにバケットに埋めた LMS は上書きして埋める．</li>
				</ul>
			</li>
		</ol>
	</li>
	<li>
		LMS である $i$ に対して LMS-string $t_i$ を次のように定義する．
		<ul>
			<li>$i = n-1$ ならば，$t_i = s[n-1:n-1]$</li>
			<li>$i \neq n-1$ ならば，$i$ の次の LMS を $j$ として $t_i = s[i:j]$</li>
			<li>(性質) LMS-string は $A$ の上で既にソートされている．</li>
		</ul>
	</li>
	<li>LMS である $i$ に対して連番を振り，文字列 $s$ 上で現れる順番にソートした配列を $s'$ とする．ただし，重複する LMS-string には同じ番号を振る．</li>
	<li>
		LMS-string に重複があるならば，$s'$ に対して SA-IS を行う．
		<ul>
			<li>これにより LMS $i$ に対する接尾辞 $s[i:]$ を基準に $i$ をソートすることができる．重複がないならば既にソートされている．</li>
		</ul>
	</li>
	<li>Induced Sorting を行う．ただし，初めに埋める LMS は上から前項でソートした順に埋まるようにする．</li>
	<li>構築された Suffix Array $A$ から末尾を取り除く．</li>
</ol>
</div></details>

## 参考
- [接尾辞配列(Suffix Array) - Shogo Computing Laboratory](https://shogo82148.github.io/homepage/memo/algorithm/suffix-array/)
