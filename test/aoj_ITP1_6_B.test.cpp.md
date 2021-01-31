---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: structure/2d_array.cpp
    title: structure/2d_array.cpp
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
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"structure/2d_array.cpp\"\n\r\
    \n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\n\
    using namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\nstruct v2d {\r\n\
    private:\r\n\tvector<vector<T>> m;\r\n\r\npublic:\r\n\tv2d() {}\r\n\tv2d(int h,\
    \ int w) : m(h, vector<T>(w)) {}\r\n\tv2d(int h, int w, const T &init) : m(h,\
    \ vector<T>(w, init)) {}\r\n\tv2d(const initializer_list<initializer_list<T>>\
    \ m_init) : m(m_init.begin(), m_init.end()) {}\r\n\r\n\tvoid assign(int h, int\
    \ w) { m = vector(h, vector<T>(w)); }\r\n\tvoid assign(int h, int w, const T init)\
    \ { m = vector(h, vector<T>(w, init)); }\r\n\r\n\tinline int size() const {\r\n\
    \t\treturn m.size();\r\n\t}\r\n\r\n\tvoid in() {\r\n\t\tfor(vector<T> &v: m) for(T\
    \ &val: v) cin>>val;\r\n\t}\r\n\tvoid in(int h, int w) {\r\n\t\tm.resize(h, vector<T>(w));\r\
    \n\t\tin();\r\n\t}\r\n\r\n\tvoid out() {\r\n\t\tint h = m.size();\r\n\t\tfor(vector<T>\
    \ &v: m) {\r\n\t\t\tint sz = v.size();\r\n\t\t\tfor(int j=0; j<sz; j++) {\r\n\t\
    \t\t\tcout<<v[j]<<(j==sz-1 ? '\\n' : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\t\tcout<<flush;\r\
    \n\t}\r\n\r\n\tinline vector<T> &operator[](int idx) {\r\n\t\tassert(0<=idx &&\
    \ idx<m.size());\r\n\t\treturn m[idx];\r\n\t}\r\n};\r\n#line 10 \"test/aoj_ITP1_6_B.test.cpp\"\
    \n\r\nint main() {\r\n\tint N; cin>>N;\r\n\tv2d card(4,14,true);\r\n\tmap<char,int>\
    \ ch2i = {{'S',0}, {'H',1}, {'C',2}, {'D',3}};\r\n\tmap<int,char> i2ch = {{0,'S'},\
    \ {1,'H'}, {2,'C'}, {3,'D'}};\r\n\r\n\tfor(int i=0; i<N; i++) {\r\n\t\tchar ch;\
    \ int num;\r\n\t\tcin>>ch>>num;\r\n\t\tcard[ch2i[ch]][num]=false;\r\n\t}\r\n\r\
    \n\tfor(int i=0; i<4; i++)for(int j=1; j<=13; j++) {\r\n\t\tif(card[i][j]) {\r\
    \n\t\t\tcout<<i2ch[i]<<\" \"<<j<<endl;\r\n\t\t}\r\n\t}\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"structure/2d_array.cpp\"\r\n\
    \r\nint main() {\r\n\tint N; cin>>N;\r\n\tv2d card(4,14,true);\r\n\tmap<char,int>\
    \ ch2i = {{'S',0}, {'H',1}, {'C',2}, {'D',3}};\r\n\tmap<int,char> i2ch = {{0,'S'},\
    \ {1,'H'}, {2,'C'}, {3,'D'}};\r\n\r\n\tfor(int i=0; i<N; i++) {\r\n\t\tchar ch;\
    \ int num;\r\n\t\tcin>>ch>>num;\r\n\t\tcard[ch2i[ch]][num]=false;\r\n\t}\r\n\r\
    \n\tfor(int i=0; i<4; i++)for(int j=1; j<=13; j++) {\r\n\t\tif(card[i][j]) {\r\
    \n\t\t\tcout<<i2ch[i]<<\" \"<<j<<endl;\r\n\t\t}\r\n\t}\r\n}\r\n"
  dependsOn:
  - structure/2d_array.cpp
  isVerificationFile: true
  path: test/aoj_ITP1_6_B.test.cpp
  requiredBy: []
  timestamp: '2021-01-31 15:05:40+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ITP1_6_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ITP1_6_B.test.cpp
- /verify/test/aoj_ITP1_6_B.test.cpp.html
title: test/aoj_ITP1_6_B.test.cpp
---
