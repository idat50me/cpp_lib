---
data:
  _extendedDependsOn: []
  _extendedRequiredBy:
  - icon: ':heavy_check_mark:'
    path: dp/2d_cumulative_sum.cpp
    title: "2D-Cumulative-Sum( $2$ \u6B21\u5143\u7D2F\u7A4D\u548C)"
  - icon: ':heavy_check_mark:'
    path: dp/doubling.cpp
    title: "Doubling(\u30C0\u30D6\u30EA\u30F3\u30B0)"
  - icon: ':question:'
    path: graph/topological_sort.cpp
    title: "Topological-Sort(\u30C8\u30DD\u30ED\u30B8\u30AB\u30EB\u30BD\u30FC\u30C8\
      )"
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_0341.test.cpp
    title: test/aoj_0341.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_0560.test.cpp
    title: test/aoj_0560.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_2429.test.cpp
    title: test/aoj_2429.test.cpp
  - icon: ':x:'
    path: test/aoj_GRL_4_B.test.cpp
    title: test/aoj_GRL_4_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ITP1_6_B.test.cpp
    title: test/aoj_ITP1_6_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0177.test.cpp
    title: test/yuki_0177.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0497.test.cpp
    title: test/yuki_0497.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_1013.test.cpp
    title: test/yuki_1013.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_1097.test.cpp
    title: test/yuki_1097.test.cpp
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':question:'
  attributes:
    links: []
  bundledCode: "#line 2 \"structure/2d_array.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T> struct v2d {\r\nprivate:\r\n\tvector<vector<T>> m;\r\
    \n\r\npublic:\r\n\tv2d() {}\r\n\tv2d(int h, int w) : m(h, vector<T>(w)) {}\r\n\
    \tv2d(int h, int w, const T &init) : m(h, vector<T>(w, init)) {}\r\n\tv2d(const\
    \ initializer_list<initializer_list<T>> m_init) : m(m_init.begin(), m_init.end())\
    \ {}\r\n\r\n\tvoid assign(int h, int w) {\r\n\t\tm.assign(h, vector<T>(w));\r\n\
    \t}\r\n\tvoid assign(int h, int w, const T init) {\r\n\t\tm.assign(h, vector<T>(w,\
    \ init));\r\n\t}\r\n\r\n\tinline int size() const {\r\n\t\treturn m.size();\r\n\
    \t}\r\n\r\n\tvoid in() {\r\n\t\tfor(vector<T> &v : m)\r\n\t\t\tfor(T &val : v)\
    \ cin >> val;\r\n\t}\r\n\tvoid in(int h, int w) {\r\n\t\tm.resize(h, vector<T>(w));\r\
    \n\t\tin();\r\n\t}\r\n\r\n\tvoid out() {\r\n\t\tint h = m.size();\r\n\t\tfor(vector<T>\
    \ &v : m) {\r\n\t\t\tint sz = v.size();\r\n\t\t\tfor(int j = 0; j < sz; j++) {\r\
    \n\t\t\t\tcout << v[j] << (j == sz - 1 ? '\\n' : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\
    \t\tcout << flush;\r\n\t}\r\n\r\n\tinline vector<T> &operator[](int idx) {\r\n\
    \t\tassert(0 <= idx && idx < m.size());\r\n\t\treturn m[idx];\r\n\t}\r\n\r\n\t\
    bool rangeout(int x, int y) {\r\n\t\tif(x < 0 || y < 0 || x >= size() || y >=\
    \ m[x].size()) return true;\r\n\t\treturn false;\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\
    \ struct v2d {\r\nprivate:\r\n\tvector<vector<T>> m;\r\n\r\npublic:\r\n\tv2d()\
    \ {}\r\n\tv2d(int h, int w) : m(h, vector<T>(w)) {}\r\n\tv2d(int h, int w, const\
    \ T &init) : m(h, vector<T>(w, init)) {}\r\n\tv2d(const initializer_list<initializer_list<T>>\
    \ m_init) : m(m_init.begin(), m_init.end()) {}\r\n\r\n\tvoid assign(int h, int\
    \ w) {\r\n\t\tm.assign(h, vector<T>(w));\r\n\t}\r\n\tvoid assign(int h, int w,\
    \ const T init) {\r\n\t\tm.assign(h, vector<T>(w, init));\r\n\t}\r\n\r\n\tinline\
    \ int size() const {\r\n\t\treturn m.size();\r\n\t}\r\n\r\n\tvoid in() {\r\n\t\
    \tfor(vector<T> &v : m)\r\n\t\t\tfor(T &val : v) cin >> val;\r\n\t}\r\n\tvoid\
    \ in(int h, int w) {\r\n\t\tm.resize(h, vector<T>(w));\r\n\t\tin();\r\n\t}\r\n\
    \r\n\tvoid out() {\r\n\t\tint h = m.size();\r\n\t\tfor(vector<T> &v : m) {\r\n\
    \t\t\tint sz = v.size();\r\n\t\t\tfor(int j = 0; j < sz; j++) {\r\n\t\t\t\tcout\
    \ << v[j] << (j == sz - 1 ? '\\n' : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\t\tcout << flush;\r\
    \n\t}\r\n\r\n\tinline vector<T> &operator[](int idx) {\r\n\t\tassert(0 <= idx\
    \ && idx < m.size());\r\n\t\treturn m[idx];\r\n\t}\r\n\r\n\tbool rangeout(int\
    \ x, int y) {\r\n\t\tif(x < 0 || y < 0 || x >= size() || y >= m[x].size()) return\
    \ true;\r\n\t\treturn false;\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: structure/2d_array.cpp
  requiredBy:
  - dp/2d_cumulative_sum.cpp
  - dp/doubling.cpp
  - graph/topological_sort.cpp
  timestamp: '2021-02-26 21:39:59+09:00'
  verificationStatus: LIBRARY_SOME_WA
  verifiedWith:
  - test/yuki_0177.test.cpp
  - test/yuki_1013.test.cpp
  - test/yuki_1097.test.cpp
  - test/aoj_2429.test.cpp
  - test/aoj_GRL_4_B.test.cpp
  - test/aoj_ITP1_6_B.test.cpp
  - test/yuki_0497.test.cpp
  - test/aoj_0341.test.cpp
  - test/aoj_0560.test.cpp
documentation_of: structure/2d_array.cpp
layout: document
title: "2D-Array( $2$ \u6B21\u5143\u914D\u5217)"
---

## なにこれ
入出力・宣言を簡潔に行える $2$ 次元配列．

## コンストラクタ
- `matrix()`：$0$ 行 $0$ 列の $2$ 次元配列を作る．
- `matrix(h, w)`：`h` 行 `w` 列の $2$ 次元配列を作る．
- `matrix(h, w, init)`：`init` を初期値とする `h` 行 `w` 列の $2$ 次元配列を作る．
- `matrix(m_init)`：`m_init`を初期値とする $2$ 次元配列を作る．

## メンバ関数
- `assign(h, w)`：`h` 行 `w` 列の $2$ 次元配列を作る．
- `assign(h, w, init)`：`init` を初期値とする `h` 行 `w` 列の $2$ 次元配列を作る．
- `size()`：配列の縦のサイズを返す．
- `in()`：現在の要素サイズ分だけ標準入力する．
- `in(h, w)`：`h` 行 `w` 列の $2$ 次元配列を作り標準入力する．
- `out()`：要素を空白区切りで標準出力する．
- `operator[](idx)`：`idx` 番目の要素である $1$ 次元配列の参照を返す．`vector` を用いた多次元配列と同様に扱える．
- `rangeout(x ,y)`：`x` 行 `y` 列目の要素が存在しない場合は `true` ，存在する場合は `false` を返す．

## 計算量
$H$ 行 $W$ 列の行列を扱うとする．
- コンストラクタ：$O(HW)$
- `assign()`：$O(HW)$
- `size()`：$O(1)$
- `in()`：$O(HW)$
- `out()`：$O(HW)$
- `operator[](idx)`：$O(1)$
- `rangeout(x, y)`：$O(1)$

## 参考
- [初期化子リスト - cpprefjp C++日本語リファレンス](https://cpprefjp.github.io/lang/cpp11/initializer_lists.html)
