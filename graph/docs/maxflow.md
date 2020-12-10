---
title: maxflow(最大流)
documentation_of: ../maxflow.cpp
---

## なにこれ
各辺に容量が設定される有向グラフ $G=(V,E)$ 中で，始点から終点まで流せる最大量を求める．

## 制約
- $V \leq 10^8$ 程度

## コンストラクタ
- `maxflow(int V)`：計算量 $O(V)$  
	- `V`：頂点数

## メンバ関数
- add
```cpp
void add(int from, int to, long long cap);
```
