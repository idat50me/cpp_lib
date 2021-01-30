---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/primefact.cpp
    title: math/primefact.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_A
  bundledCode: "#line 1 \"test/aoj_NTL_1_A_2.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_A\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"math/primefact.cpp\"\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\nvector<pair<long long, int>> primefact(long long x) {\r\
    \n\tvector<pair<long long, int>> res;\r\n\r\n\tfor(long long i=2; i*i<=x; i++)\
    \ {\r\n\t\tif(x % i) continue;\r\n\r\n\t\tint ex = 0;\r\n\t\twhile(x%i == 0) {\r\
    \n\t\t\tx /= i;\r\n\t\t\tex++;\r\n\t\t}\r\n\t\tres.emplace_back(i, ex);\r\n\t\
    }\r\n\r\n\tif(x > 1) res.emplace_back(x, 1);\r\n\r\n\treturn res;\r\n}\r\n\r\n\
    #line 10 \"test/aoj_NTL_1_A_2.test.cpp\"\n\r\nint main() {\r\n\tint n; cin>>n;\r\
    \n\tvector<pair<long long, int>> v = primefact(n);\r\n\tcout<<n<<\":\";\r\n\t\
    for(auto &p: v) {\r\n\t\twhile(p.second--) cout<<\" \"<<p.first;\r\n\t}\r\n\t\
    cout<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/NTL_1_A\"\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"math/primefact.cpp\"\r\n\r\n\
    int main() {\r\n\tint n; cin>>n;\r\n\tvector<pair<long long, int>> v = primefact(n);\r\
    \n\tcout<<n<<\":\";\r\n\tfor(auto &p: v) {\r\n\t\twhile(p.second--) cout<<\" \"\
    <<p.first;\r\n\t}\r\n\tcout<<endl;\r\n}\r\n"
  dependsOn:
  - math/primefact.cpp
  isVerificationFile: true
  path: test/aoj_NTL_1_A_2.test.cpp
  requiredBy: []
  timestamp: '2021-01-30 17:39:38+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_NTL_1_A_2.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_NTL_1_A_2.test.cpp
- /verify/test/aoj_NTL_1_A_2.test.cpp.html
title: test/aoj_NTL_1_A_2.test.cpp
---
