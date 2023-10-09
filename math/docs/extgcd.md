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
<details><summary>正当性の証明</summary><div>

$d = \gcd(a,b)$ とし，extgcd(a, b, x, y) で
$$
ax_0 + by_0 = d \tag{1}
$$
なる $(x_0, y_0)$ が求まるとき，$ax+by=c$ の特殊解は
$$
a\frac{c}{d}x_0 + b\frac{c}{d}y_0 = c \tag{2}
$$
より，$(x,y) = \Big(\dfrac{c}{d}x_0, \dfrac{c}{d}y_0\Big)$ である．

しかし，ここで今回のオーバーフロー対策を施すと，$(x,y) = (x_0(c \% a / d) + c/a, y_0(c\%a/d))$ となる．よって，
$$
a\big[x_0(c \% a / d) + c/a\big] + b\big[y_0(c\%a/d)\big] = c \tag{*}
$$
となることを証明すればよい．

除算と剰余算について，(a/b)*b + a%b = a を満たすことが規定されている(https://en.cppreference.com/w/cpp/language/operator_arithmetic)ので，式変形すると a%b = a - (a/b)*b である．

便宜上，各値の正負にかかわらず a/b を $\Big\lfloor\dfrac{a}{b}\Big\rfloor$ と表記する．
$(*)$ について，

$$
\begin{align}
(左辺) &= a \Bigg\{x_0\bigg[\Big(c-\Big\lfloor\dfrac{c}{a}\Big\rfloor a\Big) / d\bigg] + \Big\lfloor\dfrac{c}{a}\Big\rfloor\Bigg\} + b \Bigg\{y_0\bigg[\Big(c-\Big\lfloor\dfrac{c}{a}\Big\rfloor a\Big) / d\bigg]\Bigg\} \notag\\
 &= a \bigg[x_0\Big(\frac{c}{d}-\Big\lfloor\dfrac{c}{a}\Big\rfloor \cdot \frac{a}{d}\Big) + \Big\lfloor\dfrac{c}{a}\Big\rfloor\bigg] + b \bigg[y_0\Big(\frac{c}{d}-\Big\lfloor\dfrac{c}{a}\Big\rfloor \cdot \frac{a}{d}\Big)\bigg] \notag \\
 &= a \frac{c}{d} x_0 - a \Big\lfloor\dfrac{c}{a}\Big\rfloor \cdot \frac{a}{d} x_0 + a \Big\lfloor\dfrac{c}{a}\Big\rfloor + b \frac{c}{d} y_0 - b \Big\lfloor\dfrac{c}{a}\Big\rfloor \cdot \frac{a}{d} y_0 \notag \\
 &= a \frac{c}{d} x_0 + b \frac{c}{d} y_0 - \Big\lfloor\dfrac{c}{a}\Big\rfloor \cdot \frac{a}{d}(ax_0 + by_0) + a \Big\lfloor\dfrac{c}{a}\Big\rfloor \notag \\
\end{align}
$$

これに $(1), (2)$ を代入して，

$$
\begin{align}
(左辺) &= c - \Big\lfloor\dfrac{c}{a}\Big\rfloor \cdot \frac{a}{d} \cdot d + a \Big\lfloor\dfrac{c}{a}\Big\rfloor \notag \\
 &= c - a \Big\lfloor\dfrac{c}{a}\Big\rfloor + a \Big\lfloor\dfrac{c}{a}\Big\rfloor \notag \\
 &= c \notag \\
 &= (右辺) \notag \\
\end{align}
$$
となるから，$a \neq 0$ で等しい．

</div></details>
