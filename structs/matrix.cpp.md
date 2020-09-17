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
    '*NOT_SPECIAL_COMMENTS*': ''
    _deprecated_at_docs: ./docs/matrix.md
    document_title: "Matrix( $2$ \u6B21\u5143\u884C\u5217)"
    links: []
  bundledCode: "#line 1 \"structs/matrix.cpp\"\n/*\n * @brief Matrix( $2$ \u6B21\u5143\
    \u884C\u5217)\n * @docs ./docs/matrix.md\n */\n\n#ifndef lib_matrix\n#define lib_matrix\n\
    \n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#endif\n\ntemplate<class T>\nclass Matrix{\n\tvector<vector<T>>\
    \ mat;\n\npublic:\n\n\tMatrix() : Matrix(0,0) {}\n\tMatrix(int h, int w) { make(h,w);\
    \ }\n\tMatrix(int h, int w, T init) { make(h,w,init); }\n\n\tvoid make(int h,\
    \ int w) {\n\t\tmat=vector<vector<T>>(h,vector<T>(w));\n\t}\n\tvoid make(int h,\
    \ int w, T init) {\n\t\tmat=vector<vector<T>>(h,vector<T>(w,init));\n\t};\n\n\t\
    void in() {\n\t\tfor(int i=0; i<mat.size(); i++) for(int j=0; j<mat[i].size();\
    \ j++) {\n\t\t\tcin>>mat[i][j];\n\t\t}\n\t}\n\n\tvoid out() {\n\t\tfor(int i=0;\
    \ i<mat.size(); i++) {\n\t\t\tint wm=mat[i].size();\n\t\t\tfor(int j=0; j<wm;\
    \ j++) {\n\t\t\t\tcout<<mat[i][j]<<(wm==j+1 ? '\\n' : ' ');\n\t\t\t}\n\t\t}\n\t\
    \tcout<<flush;\n\t}\n\n\tinline vector<T> &operator[](int idx) {\n\t\tassert(0<=idx\
    \ && idx<mat.size());\n\t\treturn mat[idx];\n\t}\n};\n\n#endif // lib_matrix\n"
  code: "/*\n * @brief Matrix( $2$ \u6B21\u5143\u884C\u5217)\n * @docs ./docs/matrix.md\n\
    \ */\n\n#ifndef lib_matrix\n#define lib_matrix\n\n#ifndef call_include\n#define\
    \ call_include\n#include <bits/stdc++.h>\nusing namespace std;\n#endif\n\ntemplate<class\
    \ T>\nclass Matrix{\n\tvector<vector<T>> mat;\n\npublic:\n\n\tMatrix() : Matrix(0,0)\
    \ {}\n\tMatrix(int h, int w) { make(h,w); }\n\tMatrix(int h, int w, T init) {\
    \ make(h,w,init); }\n\n\tvoid make(int h, int w) {\n\t\tmat=vector<vector<T>>(h,vector<T>(w));\n\
    \t}\n\tvoid make(int h, int w, T init) {\n\t\tmat=vector<vector<T>>(h,vector<T>(w,init));\n\
    \t};\n\n\tvoid in() {\n\t\tfor(int i=0; i<mat.size(); i++) for(int j=0; j<mat[i].size();\
    \ j++) {\n\t\t\tcin>>mat[i][j];\n\t\t}\n\t}\n\n\tvoid out() {\n\t\tfor(int i=0;\
    \ i<mat.size(); i++) {\n\t\t\tint wm=mat[i].size();\n\t\t\tfor(int j=0; j<wm;\
    \ j++) {\n\t\t\t\tcout<<mat[i][j]<<(wm==j+1 ? '\\n' : ' ');\n\t\t\t}\n\t\t}\n\t\
    \tcout<<flush;\n\t}\n\n\tinline vector<T> &operator[](int idx) {\n\t\tassert(0<=idx\
    \ && idx<mat.size());\n\t\treturn mat[idx];\n\t}\n};\n\n#endif // lib_matrix\n"
  dependsOn: []
  isVerificationFile: false
  path: structs/matrix.cpp
  requiredBy: []
  timestamp: '2020-07-14 23:07:26+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_0341.test.cpp
  - test/aoj_ITP1_6_B.test.cpp
documentation_of: structs/matrix.cpp
layout: document
redirect_from:
- /library/structs/matrix.cpp
- /library/structs/matrix.cpp.html
title: "Matrix( $2$ \u6B21\u5143\u884C\u5217)"
---
