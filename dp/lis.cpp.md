---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_1_D.test.cpp
    title: test/aoj_DPL_1_D.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"dp/lis.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename\
    \ T>\r\nint LIS(const vector<T> &v, bool strict = true) {\r\n\tvector<T> lis;\r\
    \n\tif(strict) {\r\n\t\tfor(T a: v) {\r\n\t\t\tauto itr = lower_bound(lis.begin(),\
    \ lis.end(), a);\r\n\t\t\tif(itr == lis.end()) lis.emplace_back(a);\r\n\t\t\t\
    else *itr = a;\r\n\t\t}\r\n\t}\r\n\telse {\r\n\t\tfor(T a: v) {\r\n\t\t\tauto\
    \ itr = upper_bound(lis.begin(), lis.end(), a);\r\n\t\t\tif(itr == lis.end())\
    \ lis.emplace_back(a);\r\n\t\t\telse *itr = a;\r\n\t\t}\r\n\t}\r\n\treturn lis.size();\r\
    \n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\
    \nint LIS(const vector<T> &v, bool strict = true) {\r\n\tvector<T> lis;\r\n\t\
    if(strict) {\r\n\t\tfor(T a: v) {\r\n\t\t\tauto itr = lower_bound(lis.begin(),\
    \ lis.end(), a);\r\n\t\t\tif(itr == lis.end()) lis.emplace_back(a);\r\n\t\t\t\
    else *itr = a;\r\n\t\t}\r\n\t}\r\n\telse {\r\n\t\tfor(T a: v) {\r\n\t\t\tauto\
    \ itr = upper_bound(lis.begin(), lis.end(), a);\r\n\t\t\tif(itr == lis.end())\
    \ lis.emplace_back(a);\r\n\t\t\telse *itr = a;\r\n\t\t}\r\n\t}\r\n\treturn lis.size();\r\
    \n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/lis.cpp
  requiredBy: []
  timestamp: '2020-12-26 00:16:48+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_DPL_1_D.test.cpp
documentation_of: dp/lis.cpp
layout: document
title: "LIS(\u6700\u9577\u5897\u52A0\u90E8\u5206\u5217)"
---

## なにこれ
最長増加部分列(LIS)の長さを求める．


## 関数
- `LIS(v, strict)`：配列 `v` の最長増加部分列の長さを返す．`strict` が `true` の場合は狭義単調，`false` の場合は広義単調の長さを返す．

## 計算量
`v` の要素数を $n$ とする．
- $O(n \log n)$
