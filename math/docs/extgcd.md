---
title: extgcd(拡張ユークリッドの互除法)
documentation_of: ../extgcd.cpp
---

## なにこれ
一次不定方程式 $ax+by=c$ の 1 つの整数解 $(x,y)$ を求める．

## 関数
- `extgcd(a, b, x, y)`：$ax+by=\gcd(\|a\|,\|b\|)$ の解のうち，$\|x\|+\|y\|$ が最小なものを `x`, `y` に格納し，$\gcd(\|a\|,\|b\|)$ を返す．
- `extgcd(a, b, c, x, y)`：$ax+by=c$ の 1 つの解を `x`, `y` に格納し，$\gcd(\|a\|,\|b\|)$ を返す．整数解が存在しない場合は $-1$ を返す．

## 計算量
- $O(\log a)$

## 補足
### 一般解の導出
- 求めた特殊解 $(x_0,y_0)$
- $d = \gcd(a,b)$ とし，$a' = \dfrac a d,\ b' = \dfrac b d$ とおく

このとき，一般解は $(x,y) = (x_0+b't,\ y_0-a't)$

### `extgcd(a, b, c, x, y)` の最後の処理の正当性
本来は
```cpp
x *= c / d;
y *= c / d;
```
とすべきだが，`x * c / d` が大きくオーバーフローする可能性がある場合も，`a` の大きさによっては以下の処理でオーバーフローの可能性を低くすることができる．
- 参考：[ABC315_G Editorial](https://atcoder.jp/contests/abc315/editorial/6994)

```cpp
x *= c % a / d;
y *= c % a / d;
x += c / a;
```

これの正当性を以下に示す．
<details><summary>正当性の証明</summary>

$d = \gcd(a,b)$ とし，`sextgcd(a,b,x,y)` で
$$
ax_0 + by_0 = d \tag{1}
$$
なる $(x_0, y_0)$ が求まるとき，$ax+by=c$ の特殊解は
$$
a\frac{c}{d}x_0 + b\frac{c}{d}y_0 = c \tag{2}
$$
より，$(x,y) = \bigg(\dfrac{c}{d}x_0, \dfrac{c}{d}y_0\bigg)$ である．
しかし，ここで今回のオーバーフロー対策を施すと，$(x,y) = (x_0(c \% a / d) + c/a, y_0(c\%a/d))$ となる．

除算と剰余算について，`(a/b)*b + a%b = a`
</details>
