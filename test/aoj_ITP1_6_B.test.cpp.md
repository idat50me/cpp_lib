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
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 1 \"structs/matrix.cpp\"\n\n\n\r\
    \n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\n\
    using namespace std;\r\n#endif\r\n\r\ntemplate<class T>\r\nclass Matrix{\r\n\t\
    vector<vector<T>> mat;\r\n\r\npublic:\r\n\r\n\tMatrix() : Matrix(0,0) {}\r\n\t\
    Matrix(int h, int w) { make(h,w); }\r\n\tMatrix(int h, int w, T init) { make(h,w,init);\
    \ }\r\n\r\n\tvoid make(int h, int w) {\r\n\t\tmat=vector<vector<T>>(h,vector<T>(w));\r\
    \n\t}\r\n\tvoid make(int h, int w, T init) {\r\n\t\tmat=vector<vector<T>>(h,vector<T>(w,init));\r\
    \n\t};\r\n\r\n\tvoid in() {\r\n\t\tfor(int i=0; i<mat.size(); i++) for(int j=0;\
    \ j<mat[i].size(); j++) {\r\n\t\t\tcin>>mat[i][j];\r\n\t\t}\r\n\t}\r\n\r\n\tvoid\
    \ out() {\r\n\t\tfor(int i=0; i<mat.size(); i++) {\r\n\t\t\tint wm=mat[i].size();\r\
    \n\t\t\tfor(int j=0; j<wm; j++) {\r\n\t\t\t\tcout<<mat[i][j]<<(wm==j+1 ? '\\n'\
    \ : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\t\tcout<<flush;\r\n\t}\r\n\r\n\tinline vector<T>\
    \ &operator[](int idx) {\r\n\t\tassert(0<=idx && idx<mat.size());\r\n\t\treturn\
    \ mat[idx];\r\n\t}\r\n};\r\n\r\n\n#line 10 \"test/aoj_ITP1_6_B.test.cpp\"\n\r\n\
    int main() {\r\n\tint N; cin>>N;\r\n\tMatrix card(4,14,true);\r\n\tmap<char,int>\
    \ ch2i={{'S',0}, {'H',1}, {'C',2}, {'D',3}};\r\n\tmap<int,char> i2ch={{0,'S'},\
    \ {1,'H'}, {2,'C'}, {3,'D'}};\r\n\r\n\tfor(int i=0; i<N; i++) {\r\n\t\tchar ch;\
    \ int num;\r\n\t\tcin>>ch>>num;\r\n\t\tcard[ch2i[ch]][num]=false;\r\n\t}\r\n\r\
    \n\tfor(int i=0; i<4; i++)for(int j=1; j<=13; j++) {\r\n\t\tif(card[i][j]) {\r\
    \n\t\t\tcout<<i2ch[i]<<\" \"<<j<<endl;\r\n\t\t}\r\n\t}\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"structs/matrix.cpp\"\r\n\r\n\
    int main() {\r\n\tint N; cin>>N;\r\n\tMatrix card(4,14,true);\r\n\tmap<char,int>\
    \ ch2i={{'S',0}, {'H',1}, {'C',2}, {'D',3}};\r\n\tmap<int,char> i2ch={{0,'S'},\
    \ {1,'H'}, {2,'C'}, {3,'D'}};\r\n\r\n\tfor(int i=0; i<N; i++) {\r\n\t\tchar ch;\
    \ int num;\r\n\t\tcin>>ch>>num;\r\n\t\tcard[ch2i[ch]][num]=false;\r\n\t}\r\n\r\
    \n\tfor(int i=0; i<4; i++)for(int j=1; j<=13; j++) {\r\n\t\tif(card[i][j]) {\r\
    \n\t\t\tcout<<i2ch[i]<<\" \"<<j<<endl;\r\n\t\t}\r\n\t}\r\n}\r\n"
  dependsOn:
  - structs/matrix.cpp
  isVerificationFile: true
  path: test/aoj_ITP1_6_B.test.cpp
  requiredBy: []
  timestamp: '2020-11-09 16:10:15+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ITP1_6_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ITP1_6_B.test.cpp
- /verify/test/aoj_ITP1_6_B.test.cpp.html
title: test/aoj_ITP1_6_B.test.cpp
---
