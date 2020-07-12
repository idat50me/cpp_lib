## なにこれ
エラトステネスの篩というやつ．
前処理して素数判定を高速にやるなど．

## コンストラクタ
- `Sieve(n)`
	- `n`：処理する最大値．$n \leq 10^7$ くらいを想定．
	- 計算量は $O(n \log\log n)$

## メンバ関数
- `isprime(x)`
	- 素数判定
	- 計算量は $O(1)$

- `primefact(n)`
	- 素因数分解
	- $\{素因数,個数\}$のpairのvectorを返す
	- 計算量は最悪 $O(\pi(\sqrt{n})) \approx O(\sqrt{n})$ ※未証明
		$n < 10^5$ で $\frac{n}{10} < \pi(n) < n$ らしいのでたぶんそんなもん（[素数計数関数 - Wikipedia](https://ja.wikipedia.org/wiki/%E7%B4%A0%E6%95%B0%E8%A8%88%E6%95%B0%E9%96%A2%E6%95%B0)）

- `divisorcount(n)`
	- $n$ の約数の個数
	- 計算量は`primefact(n)`に依存
