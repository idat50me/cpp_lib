---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo_enumerate_palindromes.test.cpp
    title: test/yosupo_enumerate_palindromes.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"string/manacher.cpp\"\n\r\n#ifndef call_include\r\n#define\
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
    \n\r\n\treturn res;\r\n}\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nvector<int> manacher(const\
    \ string &S) {\r\n\tint N = S.length();\r\n\tvector<int> res(N, 1);\r\n\r\n\t\
    for(int i=0, c=0; i<N; i++) {\r\n\t\tint l = c-(i-c);\r\n\t\tif(i+res[l] < c+res[c])\
    \ {\r\n\t\t\tres[i] = res[l];\r\n\t\t}\r\n\t\telse {\r\n\t\t\tint r = c+res[c]-i;\r\
    \n\t\t\twhile(i-r>=0 && i+r<N && S[i-r]==S[i+r]) r++;\r\n\t\t\tres[i] = r;\r\n\
    \t\t\tc = i;\r\n\t\t}\r\n\t}\r\n\r\n\treturn res;\r\n}\r\n\r\nvector<int> manacher_even(const\
    \ string &S) {\r\n\tstring S2;\r\n\tfor(int i=0; i<S.length()-1; i++) (S2+=S[i])\
    \ += '$';\r\n\tS2 += S.back();\r\n\r\n\tvector<int> res = manacher(S2);\r\n\t\
    for(int i=0; i<S.length()-1; i++) {\r\n\t\t++res[i+i]>>=1;\r\n\t\tres[i+i+1]>>=1;\r\
    \n\t}\r\n\t++res[res.size()-1]>>=1;\r\n\r\n\treturn res;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: string/manacher.cpp
  requiredBy: []
  timestamp: '2021-01-07 01:05:55+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo_enumerate_palindromes.test.cpp
documentation_of: string/manacher.cpp
layout: document
redirect_from:
- /library/string/manacher.cpp
- /library/string/manacher.cpp.html
title: string/manacher.cpp
---
