---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/extgcd.cpp
    title: "extgcd(\u62E1\u5F35\u30E6\u30FC\u30AF\u30EA\u30C3\u30C9\u306E\u4E92\u9664\
      \u6CD5)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
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
    \ long long &y) {\r\n\tlong long x_ = a, xd = 1, xdd = 0,\r\n\t          y_ =\
    \ b, yd = 0, ydd = 1,\r\n\t          div;\r\n\twhile(true) {\r\n\t\tif(!y_) {\r\
    \n\t\t\tx = xd; y = xdd;\r\n\t\t\treturn x_;\r\n\t\t}\r\n\t\tdiv = x_/y_;\r\n\t\
    \tx_  -= div*y_;\r\n\t\txd  -= div*yd;\r\n\t\txdd -= div*ydd;\r\n\r\n\t\tif(!x_)\
    \ {\r\n\t\t\tx = yd; y = ydd;\r\n\t\t\treturn y_;\r\n\t\t}\r\n\t\tdiv = y_/x_;\r\
    \n\t\ty_  -= div*x_;\r\n\t\tyd  -= div*xd;\r\n\t\tydd -= div*xdd;\r\n\t}\r\n}\r\
    \n\r\nlong long extgcd(long long a, long long b, long long c, long long &x, long\
    \ long &y) {\r\n\tlong long d = extgcd(a, b, x, y);\r\n\tif(c % d) return -1;\r\
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
  timestamp: '2020-12-23 15:21:02+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_NTL_1_E.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_NTL_1_E.test.cpp
- /verify/test/aoj_NTL_1_E.test.cpp.html
title: test/aoj_NTL_1_E.test.cpp
---
