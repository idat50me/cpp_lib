---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yuki_0888.test.cpp
    title: test/yuki_0888.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: "Divisor(\u7D04\u6570\u5217\u6319)"
    links: []
  bundledCode: "#line 1 \"math/divisor.cpp\"\n/*\r\n * @brief Divisor(\u7D04\u6570\
    \u5217\u6319)\r\n */\r\n\r\n#ifndef lib_divisor\r\n#define lib_divisor\r\n\r\n\
    #ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing\
    \ namespace std;\r\n#endif\r\n\r\n\r\nvector<long long> divisor(long long x) {\r\
    \n\tvector<long long> res;\r\n\tlong long i = 1;\r\n\tfor( ; i*i < x; i++) {\r\
    \n\t\tif(x%i) continue;\r\n\t\tres.push_back(i);\r\n\t\tres.push_back(x/i);\r\n\
    \t}\r\n\tif(i*i==x)\r\n\t\tres.push_back(i);\r\n\t\r\n\tsort(res.begin(),res.end());\r\
    \n\treturn res;\r\n}\r\n\r\n#endif // lib_divisor\r\n"
  code: "/*\r\n * @brief Divisor(\u7D04\u6570\u5217\u6319)\r\n */\r\n\r\n#ifndef lib_divisor\r\
    \n#define lib_divisor\r\n\r\n#ifndef call_include\r\n#define call_include\r\n\
    #include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n\r\nvector<long\
    \ long> divisor(long long x) {\r\n\tvector<long long> res;\r\n\tlong long i =\
    \ 1;\r\n\tfor( ; i*i < x; i++) {\r\n\t\tif(x%i) continue;\r\n\t\tres.push_back(i);\r\
    \n\t\tres.push_back(x/i);\r\n\t}\r\n\tif(i*i==x)\r\n\t\tres.push_back(i);\r\n\t\
    \r\n\tsort(res.begin(),res.end());\r\n\treturn res;\r\n}\r\n\r\n#endif // lib_divisor\r\
    \n"
  dependsOn: []
  isVerificationFile: false
  path: math/divisor.cpp
  requiredBy: []
  timestamp: '2020-11-08 20:39:46+09:00'
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
