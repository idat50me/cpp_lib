---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DPL_1_D.test.cpp
    title: test/aoj_DPL_1_D.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"dp/lis.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename\
    \ T>\r\nint LIS(const vector<T> &v, bool strict = true) {\r\n\tvector<T> lis;\r\
    \n\tif(strict) {\r\n\t\tfor(T a: v) {\r\n\t\t\tauto itr = lower_bound(lis.begin(),\
    \ lis.end(), a);\r\n\t\t\tif(itr == lis.end()) lis.push_back(a);\r\n\t\t\telse\
    \ *itr = a;\r\n\t\t}\r\n\t}\r\n\telse {\r\n\t\tfor(T a: v) {\r\n\t\t\tauto itr\
    \ = upper_bound(lis.begin(), lis.end(), a);\r\n\t\t\tif(itr == lis.end()) lis.push_back(a);\r\
    \n\t\t\telse *itr = a;\r\n\t\t}\r\n\t}\r\n\treturn lis.size();\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\
    \nint LIS(const vector<T> &v, bool strict = true) {\r\n\tvector<T> lis;\r\n\t\
    if(strict) {\r\n\t\tfor(T a: v) {\r\n\t\t\tauto itr = lower_bound(lis.begin(),\
    \ lis.end(), a);\r\n\t\t\tif(itr == lis.end()) lis.push_back(a);\r\n\t\t\telse\
    \ *itr = a;\r\n\t\t}\r\n\t}\r\n\telse {\r\n\t\tfor(T a: v) {\r\n\t\t\tauto itr\
    \ = upper_bound(lis.begin(), lis.end(), a);\r\n\t\t\tif(itr == lis.end()) lis.push_back(a);\r\
    \n\t\t\telse *itr = a;\r\n\t\t}\r\n\t}\r\n\treturn lis.size();\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: dp/lis.cpp
  requiredBy: []
  timestamp: '2020-12-25 23:26:56+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_DPL_1_D.test.cpp
documentation_of: dp/lis.cpp
layout: document
redirect_from:
- /library/dp/lis.cpp
- /library/dp/lis.cpp.html
title: dp/lis.cpp
---
