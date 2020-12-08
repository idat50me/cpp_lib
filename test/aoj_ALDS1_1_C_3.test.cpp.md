---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/binpow.cpp
    title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
  - icon: ':heavy_check_mark:'
    path: math/millor_rabin.cpp
    title: "Millor-Rabin(\u30DF\u30E9\u30FC\u30FB\u30E9\u30D3\u30F3\u7D20\u6570\u5224\
      \u5B9A\u6CD5)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
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
    \ namespace std;\r\n#endif\r\n\r\n#line 2 \"math/binpow.cpp\"\n/*\r\n * @brief\
    \ Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)\r\n */\r\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\nlong long binpow(long long a, long long ex, long long\
    \ p=(1LL<<61)-1) {\r\n\tlong long res = 1;\r\n\twhile(ex > 0) {\r\n\t\tif(ex &\
    \ 1) (res*=a) %= p;\r\n\t\tex>>=1;\r\n\t\t(a*=a) %= p;\r\n\t}\r\n\treturn res;\r\
    \n}\r\n#line 10 \"math/millor_rabin.cpp\"\n\r\nbool isprime(int n) {\r\n\tif(n\
    \ == 2) return true;\r\n\tif(n < 2 || n%2 == 0) return false;\r\n\r\n\tint d =\
    \ n-1, s = 0;\r\n\twhile(!(d&1)) {\r\n\t\ts++;\r\n\t\td >>= 1;\r\n\t}\r\n\r\n\t\
    constexpr int a[] = {2,7,61};\r\n\tfor(int k = 0; k < 3; k++) {\r\n\t\tif(a[k]\
    \ >= n) break;\r\n\t\t\r\n\t\tlong long r = binpow(a[k], d, n);\r\n\t\tif(r ==\
    \ 1 || r == n-1) continue;\r\n\t\t\r\n\t\tfor(int i = 1; i < s; i++) {\r\n\t\t\
    \t(r*=r) %= n;\r\n\t\t\tif(r == n-1) break;\r\n\t\t}\r\n\t\tif(r != n-1) return\
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
  - math/binpow.cpp
  isVerificationFile: true
  path: test/aoj_ALDS1_1_C_3.test.cpp
  requiredBy: []
  timestamp: '2020-12-09 01:22:30+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ALDS1_1_C_3.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ALDS1_1_C_3.test.cpp
- /verify/test/aoj_ALDS1_1_C_3.test.cpp.html
title: test/aoj_ALDS1_1_C_3.test.cpp
---
