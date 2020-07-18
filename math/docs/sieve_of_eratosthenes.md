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

- `primefact(n)`：計算量 $O(\sqrt{n})$？  
	$n$ の素因数分解．$\\{素因数,個数\\}$ の pair の vector を返す．
	計算量は最悪 $O(\pi(\sqrt{n})) \approx O(\sqrt{n})$ ※未証明
	- $n < 10^5$ で $\frac{n}{10} < \pi(n) < n$ らしいのでたぶんそんなもん
	- [素数計数関数 - Wikipedia](https://ja.wikipedia.org/wiki/%E7%B4%A0%E6%95%B0%E8%A8%88%E6%95%B0%E9%96%A2%E6%95%B0)

- `divisorcount(n)`：計算量 $O(\sqrt{n})$？  
	$n$ の約数の個数  
	計算量は`primefact(n)`依存
