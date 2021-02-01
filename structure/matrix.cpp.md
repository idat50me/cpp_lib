---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ITP1_7_D.test.cpp
    title: test/aoj_ITP1_7_D.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"structure/matrix.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T>\r\nstruct matrix {\r\nprivate:\r\n\tvector<vector<T>>\
    \ m;\r\n\r\npublic:\r\n\tmatrix() {}\r\n\tmatrix(int h, int w) : m(h, vector<T>(w))\
    \ {}\r\n\tmatrix(const initializer_list<initializer_list<T>> m_init) : m(m_init.begin(),\
    \ m_init.end()) {}\r\n\r\n\tvoid assign(int h, int w) { m.assign(h, vector<T>(w));\
    \ }\r\n\r\n\tint height() const {\r\n\t\treturn m.size();\r\n\t}\r\n\r\n\tint\
    \ width() const {\r\n\t\tif(height()==0) return 0;\r\n\t\treturn m[0].size();\r\
    \n\t}\r\n\r\n\tvoid in() {\r\n\t\tfor(vector<T> &v: m) for(T &val: v) cin>>val;\r\
    \n\t}\r\n\tvoid in(int h, int w) {\r\n\t\tm.resize(h, vector<T>(w));\r\n\t\tin();\r\
    \n\t}\r\n\r\n\tvoid out() {\r\n\t\tint w = width();\r\n\t\tfor(vector<T> &v: m)\
    \ for(int j=0; j<w; j++) {\r\n\t\t\tcout<<v[j]<<(j==w-1 ? '\\n' : ' ');\r\n\t\t\
    }\r\n\t\tcout<<flush;\r\n\t}\r\n\r\n\tinline const vector<T> &operator[](int idx)\
    \ const {\r\n\t\tassert(0<=idx && idx<m.size());\r\n\t\treturn m[idx];\r\n\t}\r\
    \n\tinline vector<T> &operator[](int idx) {\r\n\t\tassert(0<=idx && idx<m.size());\r\
    \n\t\treturn m[idx];\r\n\t}\r\n\r\n\tstatic matrix identity(int n) {\r\n\t\tmatrix\
    \ res(n, n, 0);\r\n\t\tfor(int i=0; i<n; i++) res[i][i] = 1;\r\n\t\treturn res;\r\
    \n\t}\r\n\r\n\tmatrix& operator+=(const matrix& a) {\r\n\t\tint h = height(),\
    \ w = width();\r\n\t\tassert(h==a.height() && w==a.width());\r\n\t\tfor(int i=0;\
    \ i<h; i++) for(int j=0; j<w; j++) m[i][j] += a[i][j];\r\n\t\treturn *this;\r\n\
    \t}\r\n\tmatrix& operator-=(const matrix& a) {\r\n\t\tint h = height(), w = width();\r\
    \n\t\tassert(h==a.height() && w==a.width());\r\n\t\tfor(int i=0; i<h; i++) for(int\
    \ j=0; j<w; j++) m[i][j] -= a[i][j];\r\n\t\treturn *this;\r\n\t}\r\n\tmatrix&\
    \ operator*=(const matrix& a) {\r\n\t\tint h = height(), w = a.width(), ah = a.height();\r\
    \n\t\tassert(width()==ah);\r\n\t\tvector<vector<T>> tmp(h, vector(w, T(0)));\r\
    \n\t\tfor(int i=0; i<h; i++) for(int j=0; j<w; j++) for(int k=0; k<ah; k++) tmp[i][j]\
    \ += m[i][k]*a[k][j];\r\n\t\tm.swap(tmp);\r\n\t\treturn *this;\r\n\t}\r\n\r\n\t\
    matrix operator+(const matrix& a) const {\r\n\t\treturn matrix(*this)+=a;\r\n\t\
    }\r\n\tmatrix operator-(const matrix& a) const {\r\n\t\treturn matrix(*this)-=a;\r\
    \n\t}\r\n\tmatrix operator*(const matrix& a) const {\r\n\t\treturn matrix(*this)*=a;\r\
    \n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\
    \nstruct matrix {\r\nprivate:\r\n\tvector<vector<T>> m;\r\n\r\npublic:\r\n\tmatrix()\
    \ {}\r\n\tmatrix(int h, int w) : m(h, vector<T>(w)) {}\r\n\tmatrix(const initializer_list<initializer_list<T>>\
    \ m_init) : m(m_init.begin(), m_init.end()) {}\r\n\r\n\tvoid assign(int h, int\
    \ w) { m.assign(h, vector<T>(w)); }\r\n\r\n\tint height() const {\r\n\t\treturn\
    \ m.size();\r\n\t}\r\n\r\n\tint width() const {\r\n\t\tif(height()==0) return\
    \ 0;\r\n\t\treturn m[0].size();\r\n\t}\r\n\r\n\tvoid in() {\r\n\t\tfor(vector<T>\
    \ &v: m) for(T &val: v) cin>>val;\r\n\t}\r\n\tvoid in(int h, int w) {\r\n\t\t\
    m.resize(h, vector<T>(w));\r\n\t\tin();\r\n\t}\r\n\r\n\tvoid out() {\r\n\t\tint\
    \ w = width();\r\n\t\tfor(vector<T> &v: m) for(int j=0; j<w; j++) {\r\n\t\t\t\
    cout<<v[j]<<(j==w-1 ? '\\n' : ' ');\r\n\t\t}\r\n\t\tcout<<flush;\r\n\t}\r\n\r\n\
    \tinline const vector<T> &operator[](int idx) const {\r\n\t\tassert(0<=idx &&\
    \ idx<m.size());\r\n\t\treturn m[idx];\r\n\t}\r\n\tinline vector<T> &operator[](int\
    \ idx) {\r\n\t\tassert(0<=idx && idx<m.size());\r\n\t\treturn m[idx];\r\n\t}\r\
    \n\r\n\tstatic matrix identity(int n) {\r\n\t\tmatrix res(n, n, 0);\r\n\t\tfor(int\
    \ i=0; i<n; i++) res[i][i] = 1;\r\n\t\treturn res;\r\n\t}\r\n\r\n\tmatrix& operator+=(const\
    \ matrix& a) {\r\n\t\tint h = height(), w = width();\r\n\t\tassert(h==a.height()\
    \ && w==a.width());\r\n\t\tfor(int i=0; i<h; i++) for(int j=0; j<w; j++) m[i][j]\
    \ += a[i][j];\r\n\t\treturn *this;\r\n\t}\r\n\tmatrix& operator-=(const matrix&\
    \ a) {\r\n\t\tint h = height(), w = width();\r\n\t\tassert(h==a.height() && w==a.width());\r\
    \n\t\tfor(int i=0; i<h; i++) for(int j=0; j<w; j++) m[i][j] -= a[i][j];\r\n\t\t\
    return *this;\r\n\t}\r\n\tmatrix& operator*=(const matrix& a) {\r\n\t\tint h =\
    \ height(), w = a.width(), ah = a.height();\r\n\t\tassert(width()==ah);\r\n\t\t\
    vector<vector<T>> tmp(h, vector(w, T(0)));\r\n\t\tfor(int i=0; i<h; i++) for(int\
    \ j=0; j<w; j++) for(int k=0; k<ah; k++) tmp[i][j] += m[i][k]*a[k][j];\r\n\t\t\
    m.swap(tmp);\r\n\t\treturn *this;\r\n\t}\r\n\r\n\tmatrix operator+(const matrix&\
    \ a) const {\r\n\t\treturn matrix(*this)+=a;\r\n\t}\r\n\tmatrix operator-(const\
    \ matrix& a) const {\r\n\t\treturn matrix(*this)-=a;\r\n\t}\r\n\tmatrix operator*(const\
    \ matrix& a) const {\r\n\t\treturn matrix(*this)*=a;\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: structure/matrix.cpp
  requiredBy: []
  timestamp: '2021-01-31 15:36:56+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ITP1_7_D.test.cpp
documentation_of: structure/matrix.cpp
layout: document
title: "Matrix(\u884C\u5217)"
---

## なにこれ
行列演算のライブラリ．

## コンストラクタ
- `matrix()`：$0$ 行 $0$ 列の行列を作る．
- `matrix(h, w)`：`h` 行 `w` 列の行列を作る．
- `matrix(m_init)`：`m_init`を初期値とする行列を作る．

## メンバ関数
- `assign(h, w)`：`h` 行 `w` 列の行列を作る．
- `height()`, `width()`：行列の縦・横のサイズを返す．
- `in()`：現在の要素サイズ分だけ標準入力する．
- `in(h, w)`：`h` 行 `w` 列の行列を作り標準入力する．
- `out()`：要素を空白区切りで標準出力する．
- `operator[](idx)`：`idx` 番目の要素である $1$ 次元配列の参照を返す．`vector` を用いた多次元配列と同様に扱える．
- `identity(n)`：`n` 次単位行列を返す．
- 各算術演算子：行列和・行列差・行列積を行う．

## 計算量
$H$ 行 $W$ 列の行列を扱うとする．
- コンストラクタ：$O(HW)$
- `assign()`：$O(HW)$
- `height()`, `width()`：$O(1)$
- `in()`：$O(HW)$
- `out()`：$O(HW)$
- `operator[](idx)`：$O(1)$
- `identiry(n)`：$O(n^2)$
- 行列和・行列差：$O(HW)$

$H_1$ 行 $W_1$ 列の行列と $H_2$ 行 $W_2$ 列の行列を扱うとする．
- 行列積：$O(H_1W_1W_2)$

## 参考
- [初期化子リスト - cpprefjp C++日本語リファレンス](https://cpprefjp.github.io/lang/cpp11/initializer_lists.html)
