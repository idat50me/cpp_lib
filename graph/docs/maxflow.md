---
title: maxflow(最大流)
documentation_of: ../maxflow.cpp
---

## なにこれ
各辺に容量が設定される有向グラフ $G=(V,E)$ 中で，始点から終点まで流せる最大量を求める．


## コンストラクタ
```cpp
maxflow(int V);
```
`V` 頂点 $0$ 辺のグラフを作る．

#### 制約
- $V \leq 10^8$ 程度

#### 計算量
- $O(V)$


## メンバ関数
### add
```cpp
void add(int from, int to, long long cap);
```
頂点`from`から頂点`to`へ容量`cap`の辺を追加する．

#### 制約
- $0 \leq cap$

#### 計算量
- ならし $O(1)$

### solve
```cpp
long long solve(int s, int t);
```
頂点`s`から頂点`t`へ流せる最大量を返す．

#### 計算量
$F$ を流せる最大量とする．
- $O(F(V+E))$
