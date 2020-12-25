---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_1_E.test.cpp
    title: test/aoj_DPL_1_E.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"dp/levenshtein_distance.cpp\"\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\nint levenshtein(const string &s1, const string &s2) {\r\n\tif(s1.length()\
    \ == 0) return s2.length();\r\n\tif(s2.length() == 0) return s1.length();\r\n\r\
    \n\tvector<vector<int>> dist(s1.length()+1, vector<int>(s2.length()+1, (1<<30)-1));\r\
    \n\r\n\tfor(int i=0; i<=s1.length(); i++) dist[i][0] = i;\r\n\tfor(int i=1; i<=s2.length();\
    \ i++) dist[0][i] = i;\r\n\tfor(int i=1; i<=s1.length(); i++) for(int j=1; j<=s2.length();\
    \ j++) {\r\n\t\tdist[i][j] = min({\r\n\t\t\tdist[i-1][j] + 1,\r\n\t\t\tdist[i][j-1]\
    \ + 1,\r\n\t\t\tdist[i-1][j-1] + (s1[i-1]==s2[j-1] ? 0 : 1)\r\n\t\t});\r\n\t}\r\
    \n\r\n\treturn dist[s1.length()][s2.length()];\r\n}\r\n\r\ntemplate<typename T>\r\
    \nint levenshtein(const vector<T> &v1, const vector<T> &v2) {\r\n\tif(v1.size()\
    \ == 0) return v2.size();\r\n\tif(v2.size() == 0) return v1.size();\r\n\r\n\t\
    vector<vector<int>> dist(v1.size()+1, vector<int>(v2.size()+1, (1<<30)-1));\r\n\
    \r\n\tfor(int i=0; i<=v1.size(); i++) dist[i][0] = i;\r\n\tfor(int i=1; i<=v2.size();\
    \ i++) dist[0][i] = i;\r\n\tfor(int i=1; i<=v1.size(); i++) for(int j=1; j<=v2.size();\
    \ j++) {\r\n\t\tdist[i][j] = min({\r\n\t\t\tdist[i-1][j] + 1,\r\n\t\t\tdist[i][j-1]\
    \ + 1,\r\n\t\t\tdist[i-1][j-1] + (v1[i-1]==v2[j-1] ? 0 : 1)\r\n\t\t});\r\n\t}\r\
    \n\r\n\treturn dist[v1.size()][v2.size()];\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nint levenshtein(const\
    \ string &s1, const string &s2) {\r\n\tif(s1.length() == 0) return s2.length();\r\
    \n\tif(s2.length() == 0) return s1.length();\r\n\r\n\tvector<vector<int>> dist(s1.length()+1,\
    \ vector<int>(s2.length()+1, (1<<30)-1));\r\n\r\n\tfor(int i=0; i<=s1.length();\
    \ i++) dist[i][0] = i;\r\n\tfor(int i=1; i<=s2.length(); i++) dist[0][i] = i;\r\
    \n\tfor(int i=1; i<=s1.length(); i++) for(int j=1; j<=s2.length(); j++) {\r\n\t\
    \tdist[i][j] = min({\r\n\t\t\tdist[i-1][j] + 1,\r\n\t\t\tdist[i][j-1] + 1,\r\n\
    \t\t\tdist[i-1][j-1] + (s1[i-1]==s2[j-1] ? 0 : 1)\r\n\t\t});\r\n\t}\r\n\r\n\t\
    return dist[s1.length()][s2.length()];\r\n}\r\n\r\ntemplate<typename T>\r\nint\
    \ levenshtein(const vector<T> &v1, const vector<T> &v2) {\r\n\tif(v1.size() ==\
    \ 0) return v2.size();\r\n\tif(v2.size() == 0) return v1.size();\r\n\r\n\tvector<vector<int>>\
    \ dist(v1.size()+1, vector<int>(v2.size()+1, (1<<30)-1));\r\n\r\n\tfor(int i=0;\
    \ i<=v1.size(); i++) dist[i][0] = i;\r\n\tfor(int i=1; i<=v2.size(); i++) dist[0][i]\
    \ = i;\r\n\tfor(int i=1; i<=v1.size(); i++) for(int j=1; j<=v2.size(); j++) {\r\
    \n\t\tdist[i][j] = min({\r\n\t\t\tdist[i-1][j] + 1,\r\n\t\t\tdist[i][j-1] + 1,\r\
    \n\t\t\tdist[i-1][j-1] + (v1[i-1]==v2[j-1] ? 0 : 1)\r\n\t\t});\r\n\t}\r\n\r\n\t\
    return dist[v1.size()][v2.size()];\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/levenshtein_distance.cpp
  requiredBy: []
  timestamp: '2020-12-26 01:37:12+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_DPL_1_E.test.cpp
documentation_of: dp/levenshtein_distance.cpp
layout: document
title: levenshtein_distance
---

## なにこれ
レーベンシュタイン距離（編集距離）を求める．

## 関数
- `levenshtein(s1, s2)`：文字列 `s1` と `s2` の編集距離を返す．
- `levenshtein(v1, v2)`：配列 `v1` と `v2` の編集距離を返す．

## 計算量
`s1` の長さ（`v1` の要素数）を $n$ ，`s2` の長さ（`v2` の要素数）を $m$ とする．
- $O(nm)$
