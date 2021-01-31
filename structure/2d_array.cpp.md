---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_0341.test.cpp
    title: test/aoj_0341.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_2429.test.cpp
    title: test/aoj_2429.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_ITP1_6_B.test.cpp
    title: test/aoj_ITP1_6_B.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0177.test.cpp
    title: test/yuki_0177.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ structure/2d_array.cpp: line 9: #pragma once found in a non-first line\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#pragma once\r\n\r\n\
    #ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing\
    \ namespace std;\r\n#endif\r\n\r\ntemplate<typename T>\r\nstruct v2d {\r\nprivate:\r\
    \n\tvector<vector<T>> m;\r\n\r\npublic:\r\n\tv2d() {}\r\n\tv2d(int h, int w) :\
    \ m(h, vector<T>(w)) {}\r\n\tv2d(int h, int w, const T &init) : m(h, vector<T>(w,\
    \ init)) {}\r\n\tv2d(const initializer_list<initializer_list<T>> m_init) : m(m_init.begin(),\
    \ m_init.end()) {}\r\n\r\n\tvoid assign(int h, int w) { m = vector(h, vector<T>(w));\
    \ }\r\n\tvoid assign(int h, int w, const T init) { m = vector(h, vector<T>(w,\
    \ init)); }\r\n\r\n\tinline int size() const {\r\n\t\treturn m.size();\r\n\t}\r\
    \n\r\n\tvoid in() {\r\n\t\tfor(vector<T> &v: m) for(T &val: v) cin>>val;\r\n\t\
    }\r\n\tvoid in(int h, int w) {\r\n\t\tm = vector(h, vector<T>(w));\r\n\t\tin();\r\
    \n\t}\r\n\r\n\tvoid out() {\r\n\t\tint h = m.size();\r\n\t\tfor(vector<T> &v:\
    \ m) {\r\n\t\t\tint sz = v.size();\r\n\t\t\tfor(int j=0; j<sz; j++) {\r\n\t\t\t\
    \tcout<<v[j]<<(j==sz-1 ? '\\n' : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\t\tcout<<flush;\r\
    \n\t}\r\n\r\n\tinline vector<T> &operator[](int idx) {\r\n\t\tassert(0<=idx &&\
    \ idx<m.size());\r\n\t\treturn m[idx];\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: structure/2d_array.cpp
  requiredBy: []
  timestamp: '2021-01-31 14:43:41+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_0177.test.cpp
  - test/aoj_2429.test.cpp
  - test/aoj_ITP1_6_B.test.cpp
  - test/aoj_0341.test.cpp
documentation_of: structure/2d_array.cpp
layout: document
redirect_from:
- /library/structure/2d_array.cpp
- /library/structure/2d_array.cpp.html
title: structure/2d_array.cpp
---
