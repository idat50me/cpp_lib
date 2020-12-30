---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: dp/lcs.cpp
    title: dp/lcs.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C
  bundledCode: "#line 1 \"test/aoj_ALDS1_10_C.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"dp/lcs.cpp\"\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\nint LCS(const string &s1, const string &s2) {\r\n\tvector<vector<int>>\
    \ comlen(s1.length()+1, vector<int>(s2.length()+1, 0));\r\n\r\n\tfor(int i=1;\
    \ i<=s1.length(); i++) for(int j=1; j<=s2.length(); j++) {\r\n\t\tcomlen[i][j]\
    \ = max({\r\n\t\t\tcomlen[i-1][j],\r\n\t\t\tcomlen[i][j-1],\r\n\t\t\tcomlen[i-1][j-1]\
    \ + (s1[i-1]==s2[j-1] ? 1 : 0)\r\n\t\t});\r\n\t}\r\n\r\n\treturn comlen[s1.length()][s2.length()];\r\
    \n}\r\n\r\ntemplate<typename T>\r\nint LCS(const vector<T> &v1, const vector<T>\
    \ &v2) {\r\n\tvector<vector<int>> comlen(v1.length()+1, vector<int>(v2.length()+1,\
    \ 0));\r\n\r\n\tfor(int i=1; i<=v1.length(); i++) for(int j=1; j<=v2.length();\
    \ j++) {\r\n\t\tcomlen[i][j] = max({\r\n\t\t\tcomlen[i-1][j],\r\n\t\t\tcomlen[i][j-1],\r\
    \n\t\t\tcomlen[i-1][j-1] + (v1[i-1]==v2[j-1] ? 1 : 0)\r\n\t\t});\r\n\t}\r\n\r\n\
    \treturn comlen[v1.length()][v2.length()];\r\n}\r\n#line 10 \"test/aoj_ALDS1_10_C.test.cpp\"\
    \n\r\nint main() {\r\n\tint Q; cin>>Q;\r\n\twhile(Q--) {\r\n\t\tstring X,Y; cin>>X>>Y;\r\
    \n\t\tcout<<LCS(X,Y)<<endl;\r\n\t}\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_10_C\"\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"dp/lcs.cpp\"\r\n\r\nint main()\
    \ {\r\n\tint Q; cin>>Q;\r\n\twhile(Q--) {\r\n\t\tstring X,Y; cin>>X>>Y;\r\n\t\t\
    cout<<LCS(X,Y)<<endl;\r\n\t}\r\n}\r\n"
  dependsOn:
  - dp/lcs.cpp
  isVerificationFile: true
  path: test/aoj_ALDS1_10_C.test.cpp
  requiredBy: []
  timestamp: '2020-12-30 23:40:28+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ALDS1_10_C.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ALDS1_10_C.test.cpp
- /verify/test/aoj_ALDS1_10_C.test.cpp.html
title: test/aoj_ALDS1_10_C.test.cpp
---
