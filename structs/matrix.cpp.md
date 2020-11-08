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
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    _deprecated_at_docs: docs/matrix.md
    document_title: "Matrix( $2$ \u6B21\u5143\u884C\u5217)"
    links: []
  bundledCode: "#line 1 \"structs/matrix.cpp\"\n/*\r\n * @brief Matrix( $2$ \u6B21\
    \u5143\u884C\u5217)\r\n * @docs docs/matrix.md\r\n */\r\n\r\n#ifndef lib_matrix\r\
    \n#define lib_matrix\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<class T>\r\
    \nclass Matrix{\r\n\tvector<vector<T>> mat;\r\n\r\npublic:\r\n\r\n\tMatrix() :\
    \ Matrix(0,0) {}\r\n\tMatrix(int h, int w) { make(h,w); }\r\n\tMatrix(int h, int\
    \ w, T init) { make(h,w,init); }\r\n\r\n\tvoid make(int h, int w) {\r\n\t\tmat=vector<vector<T>>(h,vector<T>(w));\r\
    \n\t}\r\n\tvoid make(int h, int w, T init) {\r\n\t\tmat=vector<vector<T>>(h,vector<T>(w,init));\r\
    \n\t};\r\n\r\n\tvoid in() {\r\n\t\tfor(int i=0; i<mat.size(); i++) for(int j=0;\
    \ j<mat[i].size(); j++) {\r\n\t\t\tcin>>mat[i][j];\r\n\t\t}\r\n\t}\r\n\r\n\tvoid\
    \ out() {\r\n\t\tfor(int i=0; i<mat.size(); i++) {\r\n\t\t\tint wm=mat[i].size();\r\
    \n\t\t\tfor(int j=0; j<wm; j++) {\r\n\t\t\t\tcout<<mat[i][j]<<(wm==j+1 ? '\\n'\
    \ : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\t\tcout<<flush;\r\n\t}\r\n\r\n\tinline vector<T>\
    \ &operator[](int idx) {\r\n\t\tassert(0<=idx && idx<mat.size());\r\n\t\treturn\
    \ mat[idx];\r\n\t}\r\n};\r\n\r\n#endif // lib_matrix\r\n"
  code: "/*\r\n * @brief Matrix( $2$ \u6B21\u5143\u884C\u5217)\r\n * @docs docs/matrix.md\r\
    \n */\r\n\r\n#ifndef lib_matrix\r\n#define lib_matrix\r\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\ntemplate<class T>\r\nclass Matrix{\r\n\tvector<vector<T>> mat;\r\
    \n\r\npublic:\r\n\r\n\tMatrix() : Matrix(0,0) {}\r\n\tMatrix(int h, int w) { make(h,w);\
    \ }\r\n\tMatrix(int h, int w, T init) { make(h,w,init); }\r\n\r\n\tvoid make(int\
    \ h, int w) {\r\n\t\tmat=vector<vector<T>>(h,vector<T>(w));\r\n\t}\r\n\tvoid make(int\
    \ h, int w, T init) {\r\n\t\tmat=vector<vector<T>>(h,vector<T>(w,init));\r\n\t\
    };\r\n\r\n\tvoid in() {\r\n\t\tfor(int i=0; i<mat.size(); i++) for(int j=0; j<mat[i].size();\
    \ j++) {\r\n\t\t\tcin>>mat[i][j];\r\n\t\t}\r\n\t}\r\n\r\n\tvoid out() {\r\n\t\t\
    for(int i=0; i<mat.size(); i++) {\r\n\t\t\tint wm=mat[i].size();\r\n\t\t\tfor(int\
    \ j=0; j<wm; j++) {\r\n\t\t\t\tcout<<mat[i][j]<<(wm==j+1 ? '\\n' : ' ');\r\n\t\
    \t\t}\r\n\t\t}\r\n\t\tcout<<flush;\r\n\t}\r\n\r\n\tinline vector<T> &operator[](int\
    \ idx) {\r\n\t\tassert(0<=idx && idx<mat.size());\r\n\t\treturn mat[idx];\r\n\t\
    }\r\n};\r\n\r\n#endif // lib_matrix\r\n"
  dependsOn: []
  isVerificationFile: false
  path: structs/matrix.cpp
  requiredBy: []
  timestamp: '2020-11-08 14:38:28+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_ITP1_6_B.test.cpp
  - test/aoj_0341.test.cpp
documentation_of: structs/matrix.cpp
layout: document
redirect_from:
- /library/structs/matrix.cpp
- /library/structs/matrix.cpp.html
title: "Matrix( $2$ \u6B21\u5143\u884C\u5217)"
---
## なにこれ

## コンストラクタ
