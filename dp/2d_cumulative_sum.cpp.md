---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: structure/2d_array.cpp
    title: "2D-Array( $2$ \u6B21\u5143\u914D\u5217)"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_0560.test.cpp
    title: test/aoj_0560.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"dp/2d_cumulative_sum.cpp\"\n\r\n#ifndef call_include\r\n\
    #define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\n#line 2 \"structure/2d_array.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T>\r\nstruct v2d {\r\nprivate:\r\n\tvector<vector<T>>\
    \ m;\r\n\r\npublic:\r\n\tv2d() {}\r\n\tv2d(int h, int w) : m(h, vector<T>(w))\
    \ {}\r\n\tv2d(int h, int w, const T &init) : m(h, vector<T>(w, init)) {}\r\n\t\
    v2d(const initializer_list<initializer_list<T>> m_init) : m(m_init.begin(), m_init.end())\
    \ {}\r\n\r\n\tvoid assign(int h, int w) { m.assign(h, vector<T>(w)); }\r\n\tvoid\
    \ assign(int h, int w, const T init) { m.assign(h, vector<T>(w, init)); }\r\n\r\
    \n\tinline int size() const {\r\n\t\treturn m.size();\r\n\t}\r\n\r\n\tvoid in()\
    \ {\r\n\t\tfor(vector<T> &v: m) for(T &val: v) cin>>val;\r\n\t}\r\n\tvoid in(int\
    \ h, int w) {\r\n\t\tm.resize(h, vector<T>(w));\r\n\t\tin();\r\n\t}\r\n\r\n\t\
    void out() {\r\n\t\tint h = m.size();\r\n\t\tfor(vector<T> &v: m) {\r\n\t\t\t\
    int sz = v.size();\r\n\t\t\tfor(int j=0; j<sz; j++) {\r\n\t\t\t\tcout<<v[j]<<(j==sz-1\
    \ ? '\\n' : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\t\tcout<<flush;\r\n\t}\r\n\r\n\tinline\
    \ vector<T> &operator[](int idx) {\r\n\t\tassert(0<=idx && idx<m.size());\r\n\t\
    \treturn m[idx];\r\n\t}\r\n};\r\n#line 10 \"dp/2d_cumulative_sum.cpp\"\n\r\ntemplate<typename\
    \ T> struct sum2d {\r\nprivate:\r\n\tconst int H, W;\r\n\tv2d<T> table;\r\n\r\n\
    public:\r\n\tsum2d(v2d<T> &m) : H(m.size() + 1), W(m[0].size() + 1), table(H,\
    \ W, 0) {\r\n\t\tfor(int i = 1; i < H; i++)\r\n\t\t\tfor(int j = 1; j < W; j++)\r\
    \n\t\t\t\ttable[i][j] = m[i - 1][j - 1] + table[i][j - 1] + table[i - 1][j] -\
    \ table[i - 1][j - 1];\r\n\t}\r\n\r\n\tT get(int sx, int sy, int tx, int ty) {\r\
    \n\t\treturn table[tx][ty] - table[sx][ty] - table[tx][sy] + table[sx][sy];\r\n\
    \t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#include \"../structure/2d_array.cpp\"\
    \r\n\r\ntemplate<typename T> struct sum2d {\r\nprivate:\r\n\tconst int H, W;\r\
    \n\tv2d<T> table;\r\n\r\npublic:\r\n\tsum2d(v2d<T> &m) : H(m.size() + 1), W(m[0].size()\
    \ + 1), table(H, W, 0) {\r\n\t\tfor(int i = 1; i < H; i++)\r\n\t\t\tfor(int j\
    \ = 1; j < W; j++)\r\n\t\t\t\ttable[i][j] = m[i - 1][j - 1] + table[i][j - 1]\
    \ + table[i - 1][j] - table[i - 1][j - 1];\r\n\t}\r\n\r\n\tT get(int sx, int sy,\
    \ int tx, int ty) {\r\n\t\treturn table[tx][ty] - table[sx][ty] - table[tx][sy]\
    \ + table[sx][sy];\r\n\t}\r\n};\r\n"
  dependsOn:
  - structure/2d_array.cpp
  isVerificationFile: false
  path: dp/2d_cumulative_sum.cpp
  requiredBy: []
  timestamp: '2021-02-24 18:17:35+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_0560.test.cpp
documentation_of: dp/2d_cumulative_sum.cpp
layout: document
title: "2D-Cumulative-Sum( $2$ \u6B21\u5143\u7D2F\u7A4D\u548C)"
---

## なにこれ
$2$ 次元配列をもとに $2$ 次元累積和を求める．

## コンストラクタ
- `sum2d(m)`：$2$ 次元配列 `m` をもとに $2$ 次元累積和のテーブルを構築する．

## メンバ関数
- `get(sx, sy, tx, ty)`：$(sx,sy)$ から $(tx,ty)$ までの累積和を返す．$sx \leq tx,\ sy \leq ty$ であり，$(sx,sy)$ 側が開区間である．

## 計算量
- コンストラクタ：$O(HW)$
- `get(sx, sy, tx, ty)`：$O(1)$
