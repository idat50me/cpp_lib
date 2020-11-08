---
data:
  _extendedDependsOn:
  - icon: ':x:'
    path: combinatorics/combinatorics.cpp
    title: "Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D
  bundledCode: "#line 1 \"test/aoj_DPL_5_D.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 1 \"combinatorics/combinatorics.cpp\"\
    \n/*\r\n * @brief Combinatorics(\u7D44\u5408\u305B\u6570\u5B66)\r\n * @docs docs/combinatorics.md\r\
    \n */\r\n\r\n#ifndef lib_combinatorics\r\n#define lib_combinatorics\r\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\nstruct COMB {\r\nprivate:\r\n\tvector<long long> fact,\
    \ inv, finv;\r\n\tlong long P;\r\n\r\npublic:\r\n\tCOMB(long long mx, long long\
    \ p) {\r\n\t\tP=p;\r\n\t\tfact.resize(mx+1);\r\n\t\tinv.resize(mx+1);\r\n\t\t\
    finv.resize(mx+1);\r\n\t\tfact[0] = fact[1] = inv[1] = finv[0] = finv[1] = 1LL;\r\
    \n\t\tfor(long long i=2LL; i<=mx; i++) {\r\n\t\t\tfact[i] = fact[i-1]*i%P;\r\n\
    \t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\r\n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\n\t\
    \t}\r\n\t}\r\n\r\n\tlong long npr(long long n, long long r) {\r\n\t\tassert(n>=0\
    \ && r>=0);\r\n\t\tif (r > n) return 0;\r\n\t\treturn fact[n]*finv[n-r]%P;\r\n\
    \t}\r\n\r\n\tlong long ncr(long long n, long long r) {\r\n\t\tassert(n>=0 && r>=0);\r\
    \n\t\tif (r > n) return 0;\r\n\t\treturn fact[n]*finv[r]%P*finv[n-r]%P;\r\n\t\
    }\r\n\r\n\tlong long nhr(long long n, long long r) {\r\n\t\tassert(n>=0 && r>=0);\r\
    \n\t\tif(r == 0) return 1;\r\n\t\tif(n == 0) return 0;\r\n\t\treturn nCr(n+r-1,n-1);\r\
    \n\t}\r\n};\r\n\r\n#endif // lib_combinatorics\r\n#line 10 \"test/aoj_DPL_5_D.test.cpp\"\
    \n#define MPRIME 1000000007LL\r\n\r\nint main() {\r\n\tint n,k; cin>>n>>k;\r\n\
    \tCOMB cb(2000,MPRIME);\r\n\tcout<<cb.nhr(k,n)<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/7/DPL/5/DPL_5_D\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"../combinatorics/combinatorics.cpp\"\
    \r\n#define MPRIME 1000000007LL\r\n\r\nint main() {\r\n\tint n,k; cin>>n>>k;\r\
    \n\tCOMB cb(2000,MPRIME);\r\n\tcout<<cb.nhr(k,n)<<endl;\r\n}\r\n"
  dependsOn:
  - combinatorics/combinatorics.cpp
  isVerificationFile: true
  path: test/aoj_DPL_5_D.test.cpp
  requiredBy: []
  timestamp: '2020-11-08 16:43:51+09:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj_DPL_5_D.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_DPL_5_D.test.cpp
- /verify/test/aoj_DPL_5_D.test.cpp.html
title: test/aoj_DPL_5_D.test.cpp
---
