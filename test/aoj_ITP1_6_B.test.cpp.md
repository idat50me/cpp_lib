---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: structs/matrix.cpp
    title: "Matrix( $2$ \u6B21\u5143\u884C\u5217)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B
  bundledCode: "#line 1 \"test/aoj_ITP1_6_B.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B\"\
    \n\n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#endif\n\n#line 1 \"structs/matrix.cpp\"\n/*\n * @brief Matrix(\
    \ $2$ \u6B21\u5143\u884C\u5217)\n * @docs ./docs/matrix.md\n */\n\n#ifndef lib_matrix\n\
    #define lib_matrix\n\n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\n\
    using namespace std;\n#endif\n\ntemplate<class T>\nclass Matrix{\n\tvector<vector<T>>\
    \ mat;\n\npublic:\n\n\tMatrix() : Matrix(0,0) {}\n\tMatrix(int h, int w) { make(h,w);\
    \ }\n\tMatrix(int h, int w, T init) { make(h,w,init); }\n\n\tvoid make(int h,\
    \ int w) {\n\t\tmat=vector<vector<T>>(h,vector<T>(w));\n\t}\n\tvoid make(int h,\
    \ int w, T init) {\n\t\tmat=vector<vector<T>>(h,vector<T>(w,init));\n\t};\n\n\t\
    void in() {\n\t\tfor(int i=0; i<mat.size(); i++) for(int j=0; j<mat[i].size();\
    \ j++) {\n\t\t\tcin>>mat[i][j];\n\t\t}\n\t}\n\n\tvoid out() {\n\t\tfor(int i=0;\
    \ i<mat.size(); i++) {\n\t\t\tint wm=mat[i].size();\n\t\t\tfor(int j=0; j<wm;\
    \ j++) {\n\t\t\t\tcout<<mat[i][j]<<(wm==j+1 ? '\\n' : ' ');\n\t\t\t}\n\t\t}\n\t\
    \tcout<<flush;\n\t}\n\n\tinline vector<T> &operator[](int idx) {\n\t\tassert(0<=idx\
    \ && idx<mat.size());\n\t\treturn mat[idx];\n\t}\n};\n\n#endif // lib_matrix\n\
    #line 10 \"test/aoj_ITP1_6_B.test.cpp\"\n\nint main() {\n\tint N; cin>>N;\n\t\
    Matrix card(4,14,true);\n\tmap<char,int> ch2i={{'S',0}, {'H',1}, {'C',2}, {'D',3}};\n\
    \tmap<int,char> i2ch={{0,'S'}, {1,'H'}, {2,'C'}, {3,'D'}};\n\n\tfor(int i=0; i<N;\
    \ i++) {\n\t\tchar ch; int num;\n\t\tcin>>ch>>num;\n\t\tcard[ch2i[ch]][num]=false;\n\
    \t}\n\n\tfor(int i=0; i<4; i++)for(int j=1; j<=13; j++) {\n\t\tif(card[i][j])\
    \ {\n\t\t\tcout<<i2ch[i]<<\" \"<<j<<endl;\n\t\t}\n\t}\n}\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B\"\
    \n\n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#endif\n\n#include \"../structs/matrix.cpp\"\n\nint main() {\n\
    \tint N; cin>>N;\n\tMatrix card(4,14,true);\n\tmap<char,int> ch2i={{'S',0}, {'H',1},\
    \ {'C',2}, {'D',3}};\n\tmap<int,char> i2ch={{0,'S'}, {1,'H'}, {2,'C'}, {3,'D'}};\n\
    \n\tfor(int i=0; i<N; i++) {\n\t\tchar ch; int num;\n\t\tcin>>ch>>num;\n\t\tcard[ch2i[ch]][num]=false;\n\
    \t}\n\n\tfor(int i=0; i<4; i++)for(int j=1; j<=13; j++) {\n\t\tif(card[i][j])\
    \ {\n\t\t\tcout<<i2ch[i]<<\" \"<<j<<endl;\n\t\t}\n\t}\n}\n"
  dependsOn:
  - structs/matrix.cpp
  isVerificationFile: true
  path: test/aoj_ITP1_6_B.test.cpp
  requiredBy: []
  timestamp: '2020-07-19 09:59:33+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ITP1_6_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ITP1_6_B.test.cpp
- /verify/test/aoj_ITP1_6_B.test.cpp.html
title: test/aoj_ITP1_6_B.test.cpp
---
