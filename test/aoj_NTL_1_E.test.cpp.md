---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/extgcd.cpp
    title: math/extgcd.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_E
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_E
  bundledCode: "#line 1 \"test/aoj_NTL_1_E.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_E\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"math/extgcd.cpp\"\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\nlong long extgcd(long long a, long long b, long long &x,\
    \ long long &y) {\r\n\tif(b == 0) {\r\n\t\tx = 1; y = 0;\r\n\t\treturn a;\r\n\t\
    }\r\n\tlong long d = extgcd(b, a%b, y, x);\r\n\ty -= a/b*x;\r\n\treturn d;\r\n\
    }\r\n\r\nlong long extgcd(long long a, long long b, long long c, long long &x,\
    \ long long &y) {\r\n\tlong long d = extgcd(a, b, x, y);\r\n\tif(c%d) return -1;\r\
    \n\tx *= c/d;\r\n\ty *= c/d;\r\n\treturn d;\r\n}\r\n#line 10 \"test/aoj_NTL_1_E.test.cpp\"\
    \n\r\nint main() {\r\n\tlong long a, b, x, y;\r\n\tcin>>a>>b;\r\n\textgcd(a, b,\
    \ x, y);\r\n\tcout<<x<<\" \"<<y<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_E\"\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"math/extgcd.cpp\"\r\n\r\nint\
    \ main() {\r\n\tlong long a, b, x, y;\r\n\tcin>>a>>b;\r\n\textgcd(a, b, x, y);\r\
    \n\tcout<<x<<\" \"<<y<<endl;\r\n}\r\n"
  dependsOn:
  - math/extgcd.cpp
  isVerificationFile: true
  path: test/aoj_NTL_1_E.test.cpp
  requiredBy: []
  timestamp: '2020-12-19 23:57:39+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_NTL_1_E.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_NTL_1_E.test.cpp
- /verify/test/aoj_NTL_1_E.test.cpp.html
title: test/aoj_NTL_1_E.test.cpp
---
