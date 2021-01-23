---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: combinatorics/ncr2.cpp
    title: "nCr mod p ($r \\leq 10^7$, \u30AF\u30A8\u30EA $O(1)$ or $O(r)$)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DPL_5_E
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DPL_5_E
  bundledCode: "#line 1 \"test/aoj_DPL_5_E.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_5_E\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"combinatorics/ncr2.cpp\"\n\r\
    \n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\n\
    using namespace std;\r\n#endif\r\n\r\nstruct NCR {\r\nprivate:\r\n\tvector<long\
    \ long> comb, inv, finv;\r\n\tlong long P;\r\n\r\n\tvoid calc_inv(long long r)\
    \ {\r\n\t\tinv[1] = finv[0] = finv[1] = 1LL;\r\n\t\tfor(int i=2; i<=r; i++) {\r\
    \n\t\t\tinv[i] = P-inv[P%i]*(P/i)%P;\r\n\t\t\tfinv[i] = finv[i-1]*inv[i]%P;\r\n\
    \t\t}\r\n\t}\r\n\r\npublic:\r\n\tNCR(long long n, long long r, long long p) :\
    \ comb(n+1), inv(r+1), finv(r+1), P(p) {\r\n\t\tif(n/2 < r) r = n/2;\r\n\t\tcalc_inv(r);\r\
    \n\r\n\t\tcomb[0] = 1;\r\n\t\tfor(int i=1; i<=r; i++) {\r\n\t\t\tcomb[i] = comb[i-1]*(n-i+1)%P*inv[i]%P;\r\
    \n\t\t}\r\n\t}\r\n\r\n\tNCR(long long r, long long p) : inv(r+1), finv(r+1), P(p)\
    \ {\r\n\t\tcalc_inv(r);\r\n\t}\r\n\r\n\tlong long calc(long long n, long long\
    \ r) {\r\n\t\tassert(r >= 0);\r\n\t\tif(r > n) return 0;\r\n\t\tif(r > n/2) r\
    \ = n-r;\r\n\t\tif(comb.size() > 0)\r\n\t\t\treturn comb[r];\r\n\t\telse {\r\n\
    \t\t\tlong long f=1;\r\n\t\t\tfor(long long i=n; i>n-r; i--) (f*=i) %= P;\r\n\t\
    \t\treturn f*finv[r]%P;\r\n\t\t}\r\n\t}\r\n};\r\n#line 10 \"test/aoj_DPL_5_E.test.cpp\"\
    \n#define MPRIME 1000000007LL\r\n\r\nint main() {\r\n\tint n,k; cin>>n>>k;\r\n\
    \tNCR ncr(k,1000,MPRIME);\r\n\tcout<<ncr.calc(k,n)<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DPL_5_E\"\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"combinatorics/ncr2.cpp\"\r\n\
    #define MPRIME 1000000007LL\r\n\r\nint main() {\r\n\tint n,k; cin>>n>>k;\r\n\t\
    NCR ncr(k,1000,MPRIME);\r\n\tcout<<ncr.calc(k,n)<<endl;\r\n}\r\n"
  dependsOn:
  - combinatorics/ncr2.cpp
  isVerificationFile: true
  path: test/aoj_DPL_5_E.test.cpp
  requiredBy: []
  timestamp: '2020-12-11 23:39:25+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_DPL_5_E.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_DPL_5_E.test.cpp
- /verify/test/aoj_DPL_5_E.test.cpp.html
title: test/aoj_DPL_5_E.test.cpp
---
