---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/millor_rabin.cpp
    title: "Millor-Rabin(\u30DF\u30E9\u30FC\u30FB\u30E9\u30D3\u30F3\u7D20\u6570\u5224\
      \u5B9A\u6CD5)"
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
  bundledCode: "#line 1 \"test/aoj_ALDS1_1_C_3.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"math/millor_rabin.cpp\"\n\r\n\
    #ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing\
    \ namespace std;\r\n#endif\r\n\r\nbool isprime(long long n) {\r\n\tif(n == 2)\
    \ return true;\r\n\tif(n < 2 || n % 2 == 0) return false;\r\n\r\n\tif(n < 200000)\
    \ {\r\n\t\tfor(long long i = 3; i * i <= n; i += 2)\r\n\t\t\tif(n % i == 0) return\
    \ false;\r\n\t\treturn true;\r\n\t}\r\n\r\n\tlong long d = n >> 1;\r\n\tint s\
    \ = 1;\r\n\twhile(!(d & 1)) {\r\n\t\ts++;\r\n\t\td >>= 1;\r\n\t}\r\n\r\n\tfor(int\
    \ k : {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37}) {\r\n\t\tif(k >= n) break;\r\
    \n\r\n\t\t__int128_t r = 1, q = k;\r\n\t\twhile(d > 0) {\r\n\t\t\tif(d & 1) (r\
    \ *= q) %= n;\r\n\t\t\td >>= 1;\r\n\t\t\t(q *= q) %= n;\r\n\t\t}\r\n\t\tif(r ==\
    \ 1 || r == n - 1) continue;\r\n\r\n\t\tfor(int i = 1; i < s; i++) {\r\n\t\t\t\
    (r *= r) %= n;\r\n\t\t\tif(r == n - 1) break;\r\n\t\t}\r\n\t\tif(r != n - 1) return\
    \ false;\r\n\t}\r\n\r\n\treturn true;\r\n}\r\n#line 10 \"test/aoj_ALDS1_1_C_3.test.cpp\"\
    \n\r\nint main() {\r\n\tint n; cin>>n;\r\n\tint res=0;\r\n\tfor(int i=0; i<n;\
    \ i++) {\r\n\t\tint a; cin>>a;\r\n\t\tif(isprime(a)) res++;\r\n\t}\r\n\tcout<<res<<endl;\r\
    \n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"math/millor_rabin.cpp\"\r\n\
    \r\nint main() {\r\n\tint n; cin>>n;\r\n\tint res=0;\r\n\tfor(int i=0; i<n; i++)\
    \ {\r\n\t\tint a; cin>>a;\r\n\t\tif(isprime(a)) res++;\r\n\t}\r\n\tcout<<res<<endl;\r\
    \n}\r\n"
  dependsOn:
  - math/millor_rabin.cpp
  isVerificationFile: true
  path: test/aoj_ALDS1_1_C_3.test.cpp
  requiredBy: []
  timestamp: '2021-03-24 17:36:33+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ALDS1_1_C_3.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ALDS1_1_C_3.test.cpp
- /verify/test/aoj_ALDS1_1_C_3.test.cpp.html
title: test/aoj_ALDS1_1_C_3.test.cpp
---
