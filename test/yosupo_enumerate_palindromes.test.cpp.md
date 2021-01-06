---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: string/manacher.cpp
    title: string/manacher.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/enumerate_palindromes
    links:
    - https://judge.yosupo.jp/problem/enumerate_palindromes
  bundledCode: "#line 1 \"test/yosupo_enumerate_palindromes.test.cpp\"\n#define PROBLEM\
    \ \"https://judge.yosupo.jp/problem/enumerate_palindromes\"\r\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\n#line 2 \"string/manacher.cpp\"\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\nvector<int> manacher(const string &S) {\r\n\tint N = S.length();\r\n\tvector<int>\
    \ res(N, 1);\r\n\r\n\tfor(int i=0, c=0; i<N; i++) {\r\n\t\tint l = c-(i-c);\r\n\
    \t\tif(i+res[l] < c+res[c]) {\r\n\t\t\tres[i] = res[l];\r\n\t\t}\r\n\t\telse {\r\
    \n\t\t\tint r = c+res[c]-i;\r\n\t\t\twhile(i-r>=0 && i+r<N && S[i-r]==S[i+r])\
    \ r++;\r\n\t\t\tres[i] = r;\r\n\t\t\tc = i;\r\n\t\t}\r\n\t}\r\n\r\n\treturn res;\r\
    \n}\r\n\r\nvector<int> manacher_even(const string &S) {\r\n\tstring S2;\r\n\t\
    for(int i=0; i<S.length()-1; i++) (S2+=S[i]) += '$';\r\n\tS2 += S.back();\r\n\r\
    \n\tvector<int> res = manacher(S2);\r\n\tfor(int i=0; i<S.length()-1; i++) {\r\
    \n\t\t++res[i+i]>>=1;\r\n\t\tres[i+i+1]>>=1;\r\n\t}\r\n\t++res[res.size()-1]>>=1;\r\
    \n\r\n\treturn res;\r\n}\r\n#line 10 \"test/yosupo_enumerate_palindromes.test.cpp\"\
    \n\r\nint main() {\r\n\tstring S; cin>>S;\r\n\tvector<int> R = manacher_even(S);\r\
    \n\tfor(int i=0; i<R.size(); i++) {\r\n\t\tif(i%2==0) cout<<2*R[i]-1;\r\n\t\t\
    else cout<<2*R[i];\r\n\t\tcout<<(i==R.size()-1?'\\n':' ');\r\n\t}\r\n}\r\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/enumerate_palindromes\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"string/manacher.cpp\"\r\n\r\
    \nint main() {\r\n\tstring S; cin>>S;\r\n\tvector<int> R = manacher_even(S);\r\
    \n\tfor(int i=0; i<R.size(); i++) {\r\n\t\tif(i%2==0) cout<<2*R[i]-1;\r\n\t\t\
    else cout<<2*R[i];\r\n\t\tcout<<(i==R.size()-1?'\\n':' ');\r\n\t}\r\n}\r\n"
  dependsOn:
  - string/manacher.cpp
  isVerificationFile: true
  path: test/yosupo_enumerate_palindromes.test.cpp
  requiredBy: []
  timestamp: '2021-01-07 01:05:55+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo_enumerate_palindromes.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_enumerate_palindromes.test.cpp
- /verify/test/yosupo_enumerate_palindromes.test.cpp.html
title: test/yosupo_enumerate_palindromes.test.cpp
---
