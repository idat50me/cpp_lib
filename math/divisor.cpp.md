---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
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
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/divisor.cpp: line 14: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "/*\r\n * @brief Divisor(\u7D04\u6570\u5217\u6319)\r\n */\r\n\r\n#ifndef lib_divisor\r\
    \n#define lib_divisor\r\n\r\n#ifndef call_include\r\n#define call_include\r\n\
    #include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#include \"\
    ../pre/macros.cpp\"\r\n\r\nvector<ll> divisor(ll x) {\r\n\tvector<ll> res;\r\n\
    \tll i = 1;\r\n\tfor( ; i*i < x; i++) {\r\n\t\tif(x%i) continue;\r\n\t\tres.push_back(i);\r\
    \n\t\tres.push_back(x/i);\r\n\t}\r\n\tif(i*i==x)\r\n\t\tres.push_back(i);\r\n\t\
    \r\n\tsort(res.begin(),res.end());\r\n\treturn res;\r\n}\r\n\r\n#endif // lib_divisor\r\
    \n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: math/divisor.cpp
  requiredBy: []
  timestamp: '2020-11-02 12:20:09+09:00'
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
