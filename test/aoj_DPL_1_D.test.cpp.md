---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: dp/lis.cpp
    title: "LIS(\u6700\u9577\u5897\u52A0\u90E8\u5206\u5217)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D
  bundledCode: "#line 1 \"test/aoj_DPL_1_D.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"dp/lis.cpp\"\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\ntemplate<typename T>\r\nint LIS(const vector<T> &v, bool strict\
    \ = true) {\r\n\tvector<T> lis;\r\n\tif(strict) {\r\n\t\tfor(T a: v) {\r\n\t\t\
    \tauto itr = lower_bound(lis.begin(), lis.end(), a);\r\n\t\t\tif(itr == lis.end())\
    \ lis.emplace_back(a);\r\n\t\t\telse *itr = a;\r\n\t\t}\r\n\t}\r\n\telse {\r\n\
    \t\tfor(T a: v) {\r\n\t\t\tauto itr = upper_bound(lis.begin(), lis.end(), a);\r\
    \n\t\t\tif(itr == lis.end()) lis.emplace_back(a);\r\n\t\t\telse *itr = a;\r\n\t\
    \t}\r\n\t}\r\n\treturn lis.size();\r\n}\r\n#line 10 \"test/aoj_DPL_1_D.test.cpp\"\
    \n\r\nint main() {\r\n\tint N; cin>>N;\r\n\tvector<int> v(N);\r\n\tfor(int &a:\
    \ v) cin>>a;\r\n\tcout<<LIS(v)<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_1_D\"\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"dp/lis.cpp\"\r\n\r\nint main()\
    \ {\r\n\tint N; cin>>N;\r\n\tvector<int> v(N);\r\n\tfor(int &a: v) cin>>a;\r\n\
    \tcout<<LIS(v)<<endl;\r\n}\r\n"
  dependsOn:
  - dp/lis.cpp
  isVerificationFile: true
  path: test/aoj_DPL_1_D.test.cpp
  requiredBy: []
  timestamp: '2020-12-26 00:16:48+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_DPL_1_D.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_DPL_1_D.test.cpp
- /verify/test/aoj_DPL_1_D.test.cpp.html
title: test/aoj_DPL_1_D.test.cpp
---
