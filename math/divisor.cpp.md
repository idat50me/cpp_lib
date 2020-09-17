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
    '*NOT_SPECIAL_COMMENTS*': ''
    document_title: "Divisor(\u7D04\u6570\u5217\u6319)"
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ math/divisor.cpp: line 14: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "/*\n * @brief Divisor(\u7D04\u6570\u5217\u6319)\n */\n\n#ifndef lib_divisor\n\
    #define lib_divisor\n\n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\n\
    using namespace std;\n#endif\n\n#include \"../pre/macros.cpp\"\n\nvector<ll> divisor(ll\
    \ x) {\n\tvector<ll> res;\n\tll i = 1;\n\tfor( ; i*i < x; i++) {\n\t\tif(x%i)\
    \ continue;\n\t\tres.push_back(i);\n\t\tres.push_back(x/i);\n\t}\n\tif(i*i==x)\n\
    \t\tres.push_back(i);\n\t\n\tsort(res.begin(),res.end());\n\treturn res;\n}\n\n\
    #endif // lib_divisor\n"
  dependsOn:
  - pre/macros.cpp
  isVerificationFile: false
  path: math/divisor.cpp
  requiredBy: []
  timestamp: '2020-07-26 17:49:09+09:00'
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
