---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yuki_0888.test.cpp
    title: test/yuki_0888.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "Divisor(\u7D04\u6570\u5217\u6319)"
    links: []
  bundledCode: "#line 2 \"math/divisor.cpp\"\n/*\r\n * @brief Divisor(\u7D04\u6570\
    \u5217\u6319)\r\n */\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n\r\nvector<long long>\
    \ divisor(long long x) {\r\n\tvector<long long> res = {1};\r\n\tlong long i =\
    \ 2, id = 0, sz;\r\n\twhile(i*i<=x || i==x) {\r\n\t\tif(x % i) { i++; id=0; continue;\
    \ }\r\n\t\tsz = res.size();\r\n\t\tfor( ; id<sz; id++) res.emplace_back(res[id]*i);\r\
    \n\t\tx /= i;\r\n\t}\r\n\tif(x > 1) {\r\n\t\tsz = res.size();\r\n\t\tfor(int j=0;\
    \ j<sz; j++) res.emplace_back(res[j]*x);\r\n\t}\r\n\r\n\tsort(res.begin(),res.end());\r\
    \n\treturn res;\r\n}\r\n"
  code: "#pragma once\r\n/*\r\n * @brief Divisor(\u7D04\u6570\u5217\u6319)\r\n */\r\
    \n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n\r\nvector<long long> divisor(long long\
    \ x) {\r\n\tvector<long long> res = {1};\r\n\tlong long i = 2, id = 0, sz;\r\n\
    \twhile(i*i<=x || i==x) {\r\n\t\tif(x % i) { i++; id=0; continue; }\r\n\t\tsz\
    \ = res.size();\r\n\t\tfor( ; id<sz; id++) res.emplace_back(res[id]*i);\r\n\t\t\
    x /= i;\r\n\t}\r\n\tif(x > 1) {\r\n\t\tsz = res.size();\r\n\t\tfor(int j=0; j<sz;\
    \ j++) res.emplace_back(res[j]*x);\r\n\t}\r\n\r\n\tsort(res.begin(),res.end());\r\
    \n\treturn res;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: false
  path: math/divisor.cpp
  requiredBy: []
  timestamp: '2021-01-30 16:48:29+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0888.test.cpp
documentation_of: math/divisor.cpp
layout: document
redirect_from:
- /library/math/divisor.cpp
- /library/math/divisor.cpp.html
title: "Divisor(\u7D04\u6570\u5217\u6319)"
---
