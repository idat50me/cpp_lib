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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C
  bundledCode: "#line 1 \"test/aoj_ALDS1_1_C.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"math/sieve_of_eratosthenes.cpp\"\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\nstruct Sieve {\r\n\tint N;\r\n\tvector<int>\
    \ f,primes;\r\n\r\n\tSieve(int n=1) : N(n), f(n+1,0) {\r\n\t\tf[0]=f[1]=-1;\r\n\
    \t\tfor(int i=2; i<=N; i++) {\r\n\t\t\tif(f[i]) continue;\r\n\t\t\tprimes.push_back(i);\r\
    \n\t\t\tf[i]=i;\r\n\t\t\tif(i>(1<<15)) continue;\r\n\t\t\tfor(int j=i*i; j<=N;\
    \ j+=i) if(!f[j]) f[j]=i;\r\n\t\t}\r\n\t}\r\n\r\n\tbool isprime(int x) {\r\n\t\
    \treturn f[x]==x;\r\n\t}\r\n\r\n\tvector<pair<int,int>> primefact(int n) {\r\n\
    \t\tif(n==1) return vector<pair<int,int>>({});\r\n\t\tvector<pair<int,int>> res={{f[n],1}};\r\
    \n\t\tn /= f[n];\r\n\t\twhile(n>1) {\r\n\t\t\tint dv=f[n];\r\n\t\t\tif(res.back().first==dv)\
    \ res.back().second++;\r\n\t\t\telse res.push_back({dv,1});\r\n\t\t\tn /= dv;\r\
    \n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\r\n\tint divisorcount(int n) {\r\n\t\tint\
    \ res=1;\r\n\t\tvector<pair<int,int>> fl=primefact(n);\r\n\t\tfor(int i=0; i<fl.size();\
    \ i++) {\r\n\t\t\tres *= fl[i].second;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\
    };\r\n#line 10 \"test/aoj_ALDS1_1_C.test.cpp\"\n\r\nint main() {\r\n\tSieve sv(100000010);\r\
    \n\tint n; cin>>n;\r\n\tint res=0;\r\n\tfor(int i=0; i<n; i++) {\r\n\t\tint a;\
    \ cin>>a;\r\n\t\tif(sv.isprime(a)) res++;\r\n\t}\r\n\tcout<<res<<endl;\r\n}\r\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/ALDS1_1_C\"\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"math/sieve_of_eratosthenes.cpp\"\
    \r\n\r\nint main() {\r\n\tSieve sv(100000010);\r\n\tint n; cin>>n;\r\n\tint res=0;\r\
    \n\tfor(int i=0; i<n; i++) {\r\n\t\tint a; cin>>a;\r\n\t\tif(sv.isprime(a)) res++;\r\
    \n\t}\r\n\tcout<<res<<endl;\r\n}\r\n"
  dependsOn:
  - math/sieve_of_eratosthenes.cpp
  isVerificationFile: true
  path: test/aoj_ALDS1_1_C.test.cpp
  requiredBy: []
  timestamp: '2020-11-16 10:57:59+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ALDS1_1_C.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ALDS1_1_C.test.cpp
- /verify/test/aoj_ALDS1_1_C.test.cpp.html
title: test/aoj_ALDS1_1_C.test.cpp
---
