---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_ALDS1_10_C.test.cpp
    title: test/aoj_ALDS1_10_C.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"dp/lcs.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nint LCS(const\
    \ string &s1, const string &s2) {\r\n\tvector<vector<int>> comlen(s1.length()+1,\
    \ vector<int>(s2.length()+1, 0));\r\n\r\n\tfor(int i=1; i<=s1.length(); i++) for(int\
    \ j=1; j<=s2.length(); j++) {\r\n\t\tcomlen[i][j] = max({\r\n\t\t\tcomlen[i-1][j],\r\
    \n\t\t\tcomlen[i][j-1],\r\n\t\t\tcomlen[i-1][j-1] + (s1[i-1]==s2[j-1] ? 1 : 0)\r\
    \n\t\t});\r\n\t}\r\n\r\n\treturn comlen[s1.length()][s2.length()];\r\n}\r\n\r\n\
    template<typename T>\r\nint LCS(const vector<T> &v1, const vector<T> &v2) {\r\n\
    \tvector<vector<int>> comlen(v1.length()+1, vector<int>(v2.length()+1, 0));\r\n\
    \r\n\tfor(int i=1; i<=v1.length(); i++) for(int j=1; j<=v2.length(); j++) {\r\n\
    \t\tcomlen[i][j] = max({\r\n\t\t\tcomlen[i-1][j],\r\n\t\t\tcomlen[i][j-1],\r\n\
    \t\t\tcomlen[i-1][j-1] + (v1[i-1]==v2[j-1] ? 1 : 0)\r\n\t\t});\r\n\t}\r\n\r\n\t\
    return comlen[v1.length()][v2.length()];\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nint LCS(const string\
    \ &s1, const string &s2) {\r\n\tvector<vector<int>> comlen(s1.length()+1, vector<int>(s2.length()+1,\
    \ 0));\r\n\r\n\tfor(int i=1; i<=s1.length(); i++) for(int j=1; j<=s2.length();\
    \ j++) {\r\n\t\tcomlen[i][j] = max({\r\n\t\t\tcomlen[i-1][j],\r\n\t\t\tcomlen[i][j-1],\r\
    \n\t\t\tcomlen[i-1][j-1] + (s1[i-1]==s2[j-1] ? 1 : 0)\r\n\t\t});\r\n\t}\r\n\r\n\
    \treturn comlen[s1.length()][s2.length()];\r\n}\r\n\r\ntemplate<typename T>\r\n\
    int LCS(const vector<T> &v1, const vector<T> &v2) {\r\n\tvector<vector<int>> comlen(v1.length()+1,\
    \ vector<int>(v2.length()+1, 0));\r\n\r\n\tfor(int i=1; i<=v1.length(); i++) for(int\
    \ j=1; j<=v2.length(); j++) {\r\n\t\tcomlen[i][j] = max({\r\n\t\t\tcomlen[i-1][j],\r\
    \n\t\t\tcomlen[i][j-1],\r\n\t\t\tcomlen[i-1][j-1] + (v1[i-1]==v2[j-1] ? 1 : 0)\r\
    \n\t\t});\r\n\t}\r\n\r\n\treturn comlen[v1.length()][v2.length()];\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/lcs.cpp
  requiredBy: []
  timestamp: '2020-12-30 23:40:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ALDS1_10_C.test.cpp
documentation_of: dp/lcs.cpp
layout: document
redirect_from:
- /library/dp/lcs.cpp
- /library/dp/lcs.cpp.html
title: dp/lcs.cpp
---
