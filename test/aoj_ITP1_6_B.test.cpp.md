---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: structure/matrix.cpp
    title: "Matrix(\u884C\u5217)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B
  bundledCode: "#line 1 \"test/aoj_ITP1_6_B.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"structure/matrix.cpp\"\n\r\n\
    #ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing\
    \ namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\nstruct matrix{\r\nprivate:\r\
    \n\tvector<vector<T>> m;\r\n\r\npublic:\r\n\tmatrix() : m(0, vector<T>(0)) {}\r\
    \n\tmatrix(int h, int w) : m(h, vector<T>(w)) {}\r\n\tmatrix(int h, int w, const\
    \ T &init) : m(h, vector<T>(w, init)) {}\r\n\r\n\tvoid assign(int h, int w) {\
    \ m = vector(h, vector<T>(w)); }\r\n\tvoid assign(int h, int w, const T init)\
    \ { m = vector(h, vector<T>(w, init)); }\r\n\r\n\tint height() {\r\n\t\treturn\
    \ m.size();\r\n\t}\r\n\r\n\tint width() {\r\n\t\tif(height()==0) return 0;\r\n\
    \t\treturn m[0].size();\r\n\t}\r\n\r\n\tvoid in() {\r\n\t\tfor(int i=0; i<m.size();\
    \ i++) for(int j=0; j<m[i].size(); j++) cin>>m[i][j];\r\n\t}\r\n\r\n\tvoid out()\
    \ {\r\n\t\tfor(int i=0; i<m.size(); i++) {\r\n\t\t\tint sz = m[i].size();\r\n\t\
    \t\tfor(int j=0; j<sz; j++) {\r\n\t\t\t\tcout<<m[i][j]<<(j==sz-1 ? '\\n' : ' ');\r\
    \n\t\t\t}\r\n\t\t}\r\n\t\tcout<<flush;\r\n\t}\r\n\r\n\tinline vector<T> &operator[](int\
    \ idx) {\r\n\t\tassert(0<=idx && idx<m.size());\r\n\t\treturn m[idx];\r\n\t}\r\
    \n\r\n\tstatic matrix identity(int n) {\r\n\t\tmatrix res(n, n, 0);\r\n\t\tfor(int\
    \ i=0; i<n; i++) res[i][i] = 1;\r\n\t\treturn res;\r\n\t}\r\n\r\n\tmatrix& operator+=(const\
    \ matrix& a) {\r\n\t\tassert(height()==a.height() && width()==a.width());\r\n\t\
    \tfor(int i=0; i<m.size(); i++) for(int j=0; j<m[i].size(); j++) m[i][j] += a[i][j];\r\
    \n\t\treturn *this;\r\n\t}\r\n\tmatrix& operator-=(const matrix& a) {\r\n\t\t\
    assert(height()==a.height() && width()==a.width());\r\n\t\tfor(int i=0; i<m.size();\
    \ i++) for(int j=0; j<m[i].size(); j++) m[i][j] -= a[i][j];\r\n\t\treturn *this;\r\
    \n\t}\r\n\tmatrix& operator*=(const matrix& a) {\r\n\t\tint h = height(), w =\
    \ a.width(), ah = a.height();\r\n\t\tassert(width()==ah);\r\n\t\tvector<vector<T>>\
    \ tmp(h, vector(w, 0));\r\n\t\tfor(int i=0; i<h; i++) for(int j=0; j<w; j++) for(int\
    \ k=0; k<ah; k++) tmp[i][j] += m[i][k]*a[k][j];\r\n\t\tm.swap(tmp);\r\n\t\treturn\
    \ *this;\r\n\t}\r\n\r\n\tmatrix operator+(const matrix& a) const {\r\n\t\treturn\
    \ matrix(*this)+=a;\r\n\t}\r\n\tmatrix operator-(const matrix& a) const {\r\n\t\
    \treturn matrix(*this)-=a;\r\n\t}\r\n\tmatrix operator*(const matrix& a) const\
    \ {\r\n\t\treturn matrix(*this)*=a;\r\n\t}\r\n};\r\n#line 10 \"test/aoj_ITP1_6_B.test.cpp\"\
    \n\r\nint main() {\r\n\tint N; cin>>N;\r\n\tmatrix card(4,14,true);\r\n\tmap<char,int>\
    \ ch2i={{'S',0}, {'H',1}, {'C',2}, {'D',3}};\r\n\tmap<int,char> i2ch={{0,'S'},\
    \ {1,'H'}, {2,'C'}, {3,'D'}};\r\n\r\n\tfor(int i=0; i<N; i++) {\r\n\t\tchar ch;\
    \ int num;\r\n\t\tcin>>ch>>num;\r\n\t\tcard[ch2i[ch]][num]=false;\r\n\t}\r\n\r\
    \n\tfor(int i=0; i<4; i++)for(int j=1; j<=13; j++) {\r\n\t\tif(card[i][j]) {\r\
    \n\t\t\tcout<<i2ch[i]<<\" \"<<j<<endl;\r\n\t\t}\r\n\t}\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"structure/matrix.cpp\"\r\n\r\
    \nint main() {\r\n\tint N; cin>>N;\r\n\tmatrix card(4,14,true);\r\n\tmap<char,int>\
    \ ch2i={{'S',0}, {'H',1}, {'C',2}, {'D',3}};\r\n\tmap<int,char> i2ch={{0,'S'},\
    \ {1,'H'}, {2,'C'}, {3,'D'}};\r\n\r\n\tfor(int i=0; i<N; i++) {\r\n\t\tchar ch;\
    \ int num;\r\n\t\tcin>>ch>>num;\r\n\t\tcard[ch2i[ch]][num]=false;\r\n\t}\r\n\r\
    \n\tfor(int i=0; i<4; i++)for(int j=1; j<=13; j++) {\r\n\t\tif(card[i][j]) {\r\
    \n\t\t\tcout<<i2ch[i]<<\" \"<<j<<endl;\r\n\t\t}\r\n\t}\r\n}\r\n"
  dependsOn:
  - structure/matrix.cpp
  isVerificationFile: true
  path: test/aoj_ITP1_6_B.test.cpp
  requiredBy: []
  timestamp: '2021-01-24 00:57:21+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ITP1_6_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ITP1_6_B.test.cpp
- /verify/test/aoj_ITP1_6_B.test.cpp.html
title: test/aoj_ITP1_6_B.test.cpp
---
