---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_0341.test.cpp
    title: test/aoj_0341.test.cpp
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
  bundledCode: "#line 2 \"structs/matrix.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T>\r\nstruct matrix{\r\nprivate:\r\n\tvector<vector<T>>\
    \ mat;\r\n\r\npublic:\r\n\tmatrix() : matrix(0,0) {}\r\n\tmatrix(int h, int w)\
    \ { resize(h,w); }\r\n\tmatrix(int h, int w, T init) { resize(h,w,init); }\r\n\
    \r\n\tvoid resize(int h, int w) {\r\n\t\tmat=vector<vector<T>>(h,vector<T>(w));\r\
    \n\t}\r\n\tvoid resize(int h, int w, T init) {\r\n\t\tmat=vector<vector<T>>(h,vector<T>(w,init));\r\
    \n\t};\r\n\r\n\tvoid in() {\r\n\t\tfor(int i=0; i<mat.size(); i++) for(int j=0;\
    \ j<mat[i].size(); j++) {\r\n\t\t\tcin>>mat[i][j];\r\n\t\t}\r\n\t}\r\n\r\n\tvoid\
    \ out() {\r\n\t\tfor(int i=0; i<mat.size(); i++) {\r\n\t\t\tint wm=mat[i].size();\r\
    \n\t\t\tfor(int j=0; j<wm; j++) {\r\n\t\t\t\tcout<<mat[i][j]<<(wm==j+1 ? '\\n'\
    \ : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\t\tcout<<flush;\r\n\t}\r\n\r\n\tinline vector<T>\
    \ &operator[](int idx) {\r\n\t\tassert(0<=idx && idx<mat.size());\r\n\t\treturn\
    \ mat[idx];\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\
    \nstruct matrix{\r\nprivate:\r\n\tvector<vector<T>> mat;\r\n\r\npublic:\r\n\t\
    matrix() : matrix(0,0) {}\r\n\tmatrix(int h, int w) { resize(h,w); }\r\n\tmatrix(int\
    \ h, int w, T init) { resize(h,w,init); }\r\n\r\n\tvoid resize(int h, int w) {\r\
    \n\t\tmat=vector<vector<T>>(h,vector<T>(w));\r\n\t}\r\n\tvoid resize(int h, int\
    \ w, T init) {\r\n\t\tmat=vector<vector<T>>(h,vector<T>(w,init));\r\n\t};\r\n\r\
    \n\tvoid in() {\r\n\t\tfor(int i=0; i<mat.size(); i++) for(int j=0; j<mat[i].size();\
    \ j++) {\r\n\t\t\tcin>>mat[i][j];\r\n\t\t}\r\n\t}\r\n\r\n\tvoid out() {\r\n\t\t\
    for(int i=0; i<mat.size(); i++) {\r\n\t\t\tint wm=mat[i].size();\r\n\t\t\tfor(int\
    \ j=0; j<wm; j++) {\r\n\t\t\t\tcout<<mat[i][j]<<(wm==j+1 ? '\\n' : ' ');\r\n\t\
    \t\t}\r\n\t\t}\r\n\t\tcout<<flush;\r\n\t}\r\n\r\n\tinline vector<T> &operator[](int\
    \ idx) {\r\n\t\tassert(0<=idx && idx<mat.size());\r\n\t\treturn mat[idx];\r\n\t\
    }\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: structs/matrix.cpp
  requiredBy: []
  timestamp: '2020-11-16 10:57:59+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0177.test.cpp
  - test/aoj_ITP1_6_B.test.cpp
  - test/aoj_0341.test.cpp
documentation_of: structs/matrix.cpp
layout: document
title: "Matrix( $2$ \u6B21\u5143\u884C\u5217)"
---

## なにこれ
宣言とか入出力とか簡単にした $2$ 次元配列です．

## コンストラクタ
- `matrix()`
- `matrix(h, w)`
- `matrix(h, w, init)`  
	`matrix::resize()` を呼ぶ．

## メンバ関数
- `resize(h, w)`
- `resize(h, w, init)`  
	要素数を変更する．  
	内部では `vector` のコンストラクタを呼んでるので初期化と同じ．
	- `h`, `w`：各次元の要素数
	- `init`：初期値

- `in()`  
	現在の要素サイズ分だけ標準入力する．

- `out()`  
	要素を空白区切りで標準出力する．
