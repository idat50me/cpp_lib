## なにこれ
エラトステネスの篩というやつ．
前処理して素数判定を高速にやるなど．

## 制約
- $n \leq 10^7$ 程度．

## コンストラクタ
- `Sieve(n)`：計算量 $O(n \log\log n)$  
	- `n`：処理する最大値．

## メンバ関数
- `isprime(x)`：計算量 $O(1)$  
	$x$ の素数判定

- `primefact(n)`：計算量 $O(\log n)$  
	$n$ の素因数分解．$\\{素因数,個数\\}$ の pair の vector を返す．

- `divisorcount(n)`：計算量 $O(\log n)$  
	$n$ の約数の個数  
	計算量は`primefact(n)`依存
