---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo_zalgorithm.test.cpp
    title: test/yosupo_zalgorithm.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0599.test.cpp
    title: test/yuki_0599.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"string/z_algorithm.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nvector<int> z_algorithm(const string &S) {\r\n\tint N = S.length();\r\n\t\
    vector<int> res(N, 0);\r\n\r\n\tfor(int i=1, c=0; i<N; i++) {\r\n\t\tint l = i-c;\r\
    \n\t\tif(i+res[l] < c+res[c]) {\r\n\t\t\tres[i] = res[l];\r\n\t\t}\r\n\t\telse\
    \ {\r\n\t\t\tint l = max(c+res[c]-i, 0);\r\n\t\t\twhile(i+l<N && S[l]==S[i+l])\
    \ l++;\r\n\t\t\tres[i] = l;\r\n\t\t\tc = i;\r\n\t\t}\r\n\t}\r\n\r\n\tres[0] =\
    \ N;\r\n\treturn res;\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nvector<int> z_algorithm(const\
    \ string &S) {\r\n\tint N = S.length();\r\n\tvector<int> res(N, 0);\r\n\r\n\t\
    for(int i=1, c=0; i<N; i++) {\r\n\t\tint l = i-c;\r\n\t\tif(i+res[l] < c+res[c])\
    \ {\r\n\t\t\tres[i] = res[l];\r\n\t\t}\r\n\t\telse {\r\n\t\t\tint l = max(c+res[c]-i,\
    \ 0);\r\n\t\t\twhile(i+l<N && S[l]==S[i+l]) l++;\r\n\t\t\tres[i] = l;\r\n\t\t\t\
    c = i;\r\n\t\t}\r\n\t}\r\n\r\n\tres[0] = N;\r\n\treturn res;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: string/z_algorithm.cpp
  requiredBy: []
  timestamp: '2021-01-07 08:32:51+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0599.test.cpp
  - test/yosupo_zalgorithm.test.cpp
documentation_of: string/z_algorithm.cpp
layout: document
title: "Z-Algorithm(\u6700\u9577\u5171\u901A\u63A5\u982D\u8F9E)"
---

## なにこれ
文字列 $S$ とその連続部分文字列 $S[i, |S|)$ の最長共通接頭辞の長さを求める．

## 関数
- `z_algorithm(S)`：`S` と `S[i, |S|)` の最長共通接頭辞の長さを `v[i]` とする配列 `v` を返す．

## 計算量
- $O(\|S\|)$
