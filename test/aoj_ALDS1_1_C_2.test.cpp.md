---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/isprime.cpp
    title: "Isprime(\u7D20\u6570\u5224\u5B9A)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
  bundledCode: "#line 1 \"test/aoj_ALDS1_1_C_2.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"math/isprime.cpp\"\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\nbool isprime(long long n) {\r\n\tif(n == 2) return true;\r\
    \n\tif(n < 2 || n % 2 == 0) return false;\r\n\r\n\tfor(long long i = 3; i * i\
    \ <= n; i += 2)\r\n\t\tif(n % i == 0) return false;\r\n\r\n\treturn true;\r\n\
    }\r\n#line 10 \"test/aoj_ALDS1_1_C_2.test.cpp\"\n\r\nint main() {\r\n\tint n;\
    \ cin>>n;\r\n\tint res=0;\r\n\tfor(int i=0; i<n; i++) {\r\n\t\tint a; cin>>a;\r\
    \n\t\tif(isprime(a)) res++;\r\n\t}\r\n\tcout<<res<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"math/isprime.cpp\"\r\n\r\n\
    int main() {\r\n\tint n; cin>>n;\r\n\tint res=0;\r\n\tfor(int i=0; i<n; i++) {\r\
    \n\t\tint a; cin>>a;\r\n\t\tif(isprime(a)) res++;\r\n\t}\r\n\tcout<<res<<endl;\r\
    \n}\r\n"
  dependsOn:
  - math/isprime.cpp
  isVerificationFile: true
  path: test/aoj_ALDS1_1_C_2.test.cpp
  requiredBy: []
  timestamp: '2021-03-24 17:36:33+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ALDS1_1_C_2.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ALDS1_1_C_2.test.cpp
- /verify/test/aoj_ALDS1_1_C_2.test.cpp.html
title: test/aoj_ALDS1_1_C_2.test.cpp
---
