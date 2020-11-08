---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/isprime.cpp
    title: "Isprime(\u7D20\u6570\u5224\u5B9A)"
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
  bundledCode: "#line 1 \"test/aoj_ALDS1_1_C_2.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 1 \"pre/macros.cpp\"\n\n\n\r\nusing\
    \ ll = long long;\r\n\r\n#define MPRIME (ll)(1e9+7)\r\n#define MMPRIME ((1LL<<61)-1)\r\
    \n\r\n\n#line 1 \"math/isprime.cpp\"\n/*\r\n * @brief Isprime(\u7D20\u6570\u5224\
    \u5B9A)\r\n */\r\n\r\n#ifndef lib_isprime\r\n#define lib_isprime\r\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\nbool isprime(long long n) {\r\n\tif (n<2) return false;\r\
    \n\tif (n==2) return true;\r\n\tif (n%2==0) return false;\r\n\r\n\tfor (long long\
    \ i=3; i*i<=n; i+=2) if (n%i==0) return false;\r\n\r\n\treturn true;\r\n}\r\n\r\
    \n#endif // lib_isprime\r\n#line 11 \"test/aoj_ALDS1_1_C_2.test.cpp\"\n\r\nint\
    \ main() {\r\n\tint n; cin>>n;\r\n\tint res=0;\r\n\tfor(int i=0; i<n; i++) {\r\
    \n\t\tint a; cin>>a;\r\n\t\tif(isprime(a)) res++;\r\n\t}\r\n\tcout<<res<<endl;\r\
    \n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"../pre/macros.cpp\"\r\n#include\
    \ \"../math/isprime.cpp\"\r\n\r\nint main() {\r\n\tint n; cin>>n;\r\n\tint res=0;\r\
    \n\tfor(int i=0; i<n; i++) {\r\n\t\tint a; cin>>a;\r\n\t\tif(isprime(a)) res++;\r\
    \n\t}\r\n\tcout<<res<<endl;\r\n}\r\n"
  dependsOn:
  - pre/macros.cpp
  - math/isprime.cpp
  isVerificationFile: true
  path: test/aoj_ALDS1_1_C_2.test.cpp
  requiredBy: []
  timestamp: '2020-11-08 20:39:46+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ALDS1_1_C_2.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ALDS1_1_C_2.test.cpp
- /verify/test/aoj_ALDS1_1_C_2.test.cpp.html
title: test/aoj_ALDS1_1_C_2.test.cpp
---
