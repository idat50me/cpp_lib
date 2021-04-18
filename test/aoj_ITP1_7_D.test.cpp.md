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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_D
  bundledCode: "#line 1 \"test/aoj_ITP1_7_D.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_D\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"structure/matrix.cpp\"\n\r\n\
    #ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing\
    \ namespace std;\r\n#endif\r\n\r\ntemplate<typename T> struct matrix {\r\nprivate:\r\
    \n\tvector<vector<T>> m;\r\n\r\npublic:\r\n\tmatrix() {}\r\n\tmatrix(int h, int\
    \ w) : m(h, vector<T>(w)) {}\r\n\tmatrix(int h, int w, T init) : m(h, vector(w,\
    \ init)) {}\r\n\tmatrix(const initializer_list<initializer_list<T>> m_init) :\
    \ m(m_init.begin(), m_init.end()) {}\r\n\r\n\tvoid assign(int h, int w) {\r\n\t\
    \tm.assign(h, vector<T>(w));\r\n\t}\r\n\r\n\tint height() const {\r\n\t\treturn\
    \ m.size();\r\n\t}\r\n\r\n\tint width() const {\r\n\t\tif(height() == 0) return\
    \ 0;\r\n\t\treturn m[0].size();\r\n\t}\r\n\r\n\tvoid in() {\r\n\t\tfor(vector<T>\
    \ &v : m)\r\n\t\t\tfor(T &val : v) cin >> val;\r\n\t}\r\n\tvoid in(int h, int\
    \ w) {\r\n\t\tm.resize(h, vector<T>(w));\r\n\t\tin();\r\n\t}\r\n\r\n\tvoid out()\
    \ {\r\n\t\tint w = width();\r\n\t\tfor(vector<T> &v : m)\r\n\t\t\tfor(int j =\
    \ 0; j < w; j++) {\r\n\t\t\t\tcout << v[j] << (j == w - 1 ? '\\n' : ' ');\r\n\t\
    \t\t}\r\n\t\tcout << flush;\r\n\t}\r\n\r\n\tinline const vector<T> &operator[](int\
    \ idx) const {\r\n\t\tassert(0 <= idx && idx < m.size());\r\n\t\treturn m[idx];\r\
    \n\t}\r\n\tinline vector<T> &operator[](int idx) {\r\n\t\tassert(0 <= idx && idx\
    \ < m.size());\r\n\t\treturn m[idx];\r\n\t}\r\n\r\n\tstatic matrix identity(int\
    \ n) {\r\n\t\tmatrix res(n, n, 0);\r\n\t\tfor(int i = 0; i < n; i++) res[i][i]\
    \ = 1;\r\n\t\treturn res;\r\n\t}\r\n\r\n\tmatrix &operator+=(const matrix &a)\
    \ {\r\n\t\tint h = height(), w = width();\r\n\t\tassert(h == a.height() && w ==\
    \ a.width());\r\n\t\tfor(int i = 0; i < h; i++)\r\n\t\t\tfor(int j = 0; j < w;\
    \ j++) m[i][j] += a[i][j];\r\n\t\treturn *this;\r\n\t}\r\n\tmatrix &operator-=(const\
    \ matrix &a) {\r\n\t\tint h = height(), w = width();\r\n\t\tassert(h == a.height()\
    \ && w == a.width());\r\n\t\tfor(int i = 0; i < h; i++)\r\n\t\t\tfor(int j = 0;\
    \ j < w; j++) m[i][j] -= a[i][j];\r\n\t\treturn *this;\r\n\t}\r\n\tmatrix &operator*=(const\
    \ matrix &a) {\r\n\t\tint h = height(), w = a.width(), ah = a.height();\r\n\t\t\
    assert(width() == ah);\r\n\t\tvector<vector<T>> tmp(h, vector(w, T(0)));\r\n\t\
    \tfor(int i = 0; i < h; i++)\r\n\t\t\tfor(int j = 0; j < w; j++)\r\n\t\t\t\tfor(int\
    \ k = 0; k < ah; k++) tmp[i][j] += m[i][k] * a[k][j];\r\n\t\tm.swap(tmp);\r\n\t\
    \treturn *this;\r\n\t}\r\n\r\n\tmatrix operator+(const matrix &a) const {\r\n\t\
    \treturn matrix(*this) += a;\r\n\t}\r\n\tmatrix operator-(const matrix &a) const\
    \ {\r\n\t\treturn matrix(*this) -= a;\r\n\t}\r\n\tmatrix operator*(const matrix\
    \ &a) const {\r\n\t\treturn matrix(*this) *= a;\r\n\t}\r\n\r\n\tstatic matrix\
    \ pow(matrix a, long long ex) {\r\n\t\tmatrix res = identity(a.height());\r\n\t\
    \twhile(ex > 0) {\r\n\t\t\tif(ex & 1) res *= a;\r\n\t\t\tex >>= 1;\r\n\t\t\ta\
    \ *= a;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n};\r\n#line 10 \"test/aoj_ITP1_7_D.test.cpp\"\
    \n\r\nint main() {\r\n\tint N,M,L; cin>>N>>M>>L;\r\n\tmatrix<long long> A,B;\r\
    \n\tA.in(N,M);\r\n\tB.in(M,L);\r\n\t(A*B).out();\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ITP1_7_D\"\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"structure/matrix.cpp\"\r\n\r\
    \nint main() {\r\n\tint N,M,L; cin>>N>>M>>L;\r\n\tmatrix<long long> A,B;\r\n\t\
    A.in(N,M);\r\n\tB.in(M,L);\r\n\t(A*B).out();\r\n}\r\n"
  dependsOn:
  - structure/matrix.cpp
  isVerificationFile: true
  path: test/aoj_ITP1_7_D.test.cpp
  requiredBy: []
  timestamp: '2021-04-19 01:27:30+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ITP1_7_D.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ITP1_7_D.test.cpp
- /verify/test/aoj_ITP1_7_D.test.cpp.html
title: test/aoj_ITP1_7_D.test.cpp
---
