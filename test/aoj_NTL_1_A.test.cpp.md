---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/sieve_of_eratosthenes.cpp
    title: "Sieve-of-Eratosthenes(\u30A8\u30E9\u30C8\u30B9\u30C6\u30CD\u30B9\u306E\
      \u7BE9)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A
  bundledCode: "#line 1 \"test/aoj_NTL_1_A.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"math/sieve_of_eratosthenes.cpp\"\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\nstruct Sieve {\r\nprivate:\r\n\tint N;\r\
    \n\tvector<int> dv,primes;\r\n\r\npublic:\r\n\tSieve(int n=2) : N(n), dv(n+1,0)\
    \ {\r\n\t\tdv[0] = dv[1] = -1;\r\n\t\tfor(int i=2; i<=N; i++) {\r\n\t\t\tif(dv[i])\
    \ continue;\r\n\t\t\tprimes.push_back(i);\r\n\t\t\tdv[i] = i;\r\n\t\t\tif(i >\
    \ (1<<15)) continue;\r\n\t\t\tfor(int j=i*i; j<=N; j+=i) if(!dv[j]) dv[j] = i;\r\
    \n\t\t}\r\n\t}\r\n\r\n\tbool isprime(int x) {\r\n\t\treturn dv[x] == x;\r\n\t\
    }\r\n\r\n\tvector<pair<int,int>> primefact(int n) {\r\n\t\tif(n == 1) return vector<pair<int,int>>({});\r\
    \n\t\tvector<pair<int,int>> res = {pair<int,int>(dv[n],1)};\r\n\t\tn /= dv[n];\r\
    \n\t\twhile(n > 1) {\r\n\t\t\tint d = dv[n];\r\n\t\t\tif(res.back().first == d)\
    \ res.back().second++;\r\n\t\t\telse res.push_back(make_pair(d,1));\r\n\t\t\t\
    n /= d;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\r\n\tint divisorcount(int n) {\r\
    \n\t\tint res = 1;\r\n\t\tvector<pair<int,int>> flist = primefact(n);\r\n\t\t\
    for(int i=0; i<flist.size(); i++) {\r\n\t\t\tres *= flist[i].second+1;\r\n\t\t\
    }\r\n\t\treturn res;\r\n\t}\r\n};\r\n#line 10 \"test/aoj_NTL_1_A.test.cpp\"\n\r\
    \nint main() {\r\n\tint n; cin>>n;\r\n\tSieve sv(n);\r\n\tvector<pair<int,int>>\
    \ flist=sv.primefact(n);\r\n\r\n\tcout<<n<<':';\r\n\tfor(int i=0; i<flist.size();\
    \ i++) {\r\n\t\tfor(int j=0; j<flist[i].second; j++) {\r\n\t\t\tcout<<\" \"<<flist[i].first;\r\
    \n\t\t}\r\n\t}\r\n\tcout<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/library/6/NTL/1/NTL_1_A\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"math/sieve_of_eratosthenes.cpp\"\
    \r\n\r\nint main() {\r\n\tint n; cin>>n;\r\n\tSieve sv(n);\r\n\tvector<pair<int,int>>\
    \ flist=sv.primefact(n);\r\n\r\n\tcout<<n<<':';\r\n\tfor(int i=0; i<flist.size();\
    \ i++) {\r\n\t\tfor(int j=0; j<flist[i].second; j++) {\r\n\t\t\tcout<<\" \"<<flist[i].first;\r\
    \n\t\t}\r\n\t}\r\n\tcout<<endl;\r\n}\r\n"
  dependsOn:
  - math/sieve_of_eratosthenes.cpp
  isVerificationFile: true
  path: test/aoj_NTL_1_A.test.cpp
  requiredBy: []
  timestamp: '2020-12-12 17:30:18+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_NTL_1_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_NTL_1_A.test.cpp
- /verify/test/aoj_NTL_1_A.test.cpp.html
title: test/aoj_NTL_1_A.test.cpp
---
