---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_0341.test.cpp
    title: test/aoj_0341.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_2429.test.cpp
    title: test/aoj_2429.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ITP1_6_B.test.cpp
    title: test/aoj_ITP1_6_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0177.test.cpp
    title: test/yuki_0177.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"structure/matrix.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T>\r\nstruct matrix{\r\nprivate:\r\n\tvector<vector<T>>\
    \ m;\r\n\r\npublic:\r\n\tmatrix() : m(0, vector<T>(0)) {}\r\n\tmatrix(int h, int\
    \ w) : m(h, vector<T>(w)) {}\r\n\tmatrix(int h, int w, const T &init) : m(h, vector<T>(w,\
    \ init)) {}\r\n\r\n\tvoid in() {\r\n\t\tfor(int i=0; i<m.size(); i++) for(int\
    \ j=0; j<m[i].size(); j++) cin>>m[i][j];\r\n\t}\r\n\r\n\tvoid out() {\r\n\t\t\
    for(int i=0; i<m.size(); i++) {\r\n\t\t\tint sz = m[i].size();\r\n\t\t\tfor(int\
    \ j=0; j<sz; j++) {\r\n\t\t\t\tcout<<m[i][j]<<(j==sz-1 ? '\\n' : ' ');\r\n\t\t\
    \t}\r\n\t\t}\r\n\t\tcout<<flush;\r\n\t}\r\n\r\n\tinline vector<T> &operator[](int\
    \ idx) {\r\n\t\tassert(0<=idx && idx<m.size());\r\n\t\treturn m[idx];\r\n\t}\r\
    \n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\
    \nstruct matrix{\r\nprivate:\r\n\tvector<vector<T>> m;\r\n\r\npublic:\r\n\tmatrix()\
    \ : m(0, vector<T>(0)) {}\r\n\tmatrix(int h, int w) : m(h, vector<T>(w)) {}\r\n\
    \tmatrix(int h, int w, const T &init) : m(h, vector<T>(w, init)) {}\r\n\r\n\t\
    void in() {\r\n\t\tfor(int i=0; i<m.size(); i++) for(int j=0; j<m[i].size(); j++)\
    \ cin>>m[i][j];\r\n\t}\r\n\r\n\tvoid out() {\r\n\t\tfor(int i=0; i<m.size(); i++)\
    \ {\r\n\t\t\tint sz = m[i].size();\r\n\t\t\tfor(int j=0; j<sz; j++) {\r\n\t\t\t\
    \tcout<<m[i][j]<<(j==sz-1 ? '\\n' : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\t\tcout<<flush;\r\
    \n\t}\r\n\r\n\tinline vector<T> &operator[](int idx) {\r\n\t\tassert(0<=idx &&\
    \ idx<m.size());\r\n\t\treturn m[idx];\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: structure/matrix.cpp
  requiredBy: []
  timestamp: '2020-12-18 18:45:35+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0177.test.cpp
  - test/aoj_0341.test.cpp
  - test/aoj_ITP1_6_B.test.cpp
  - test/aoj_2429.test.cpp
documentation_of: structure/matrix.cpp
layout: document
title: "Matrix( $2$ \u6B21\u5143\u884C\u5217)"
---

## なにこれ
宣言や入出力を簡単にした $2$ 次元配列．

## コンストラクタ
- `matrix()`：$0$ 行 $0$ 列の $2$ 次元配列を作る．
- `matrix(h, w)`：`h` 行 `w` 列の $2$ 次元配列を作る．
- `matrix(h, w, init)`  ：`init` を初期値とする `h` 行 `w` 列の $2$ 次元配列を作る．

## メンバ関数
- `in()`：現在の要素サイズ分だけ標準入力する．
- `out()`：要素を空白区切りで標準出力する．
- `operator[](idx)`：`idx` 番目の要素である $1$ 次元配列の参照を返す．`vector` を用いた多次元配列と同様に扱える．

## 計算量
- コンストラクタ：$O(HW)$
- `in()`：$O(HW)$
- `out()`：$O(HW)$
- `operator[](idx)`：$O(1)$
