---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: structure/2d_array.cpp
    title: structure/2d_array.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B
    links:
    - https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 312, in update\n    raise BundleErrorAt(path, i + 1, \"#pragma once found\
    \ in a non-first line\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ structure/2d_array.cpp: line 9: #pragma once found in a non-first line\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/courses/lesson/2/ITP1/6/ITP1_6_B\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"structure/2d_array.cpp\"\r\n\
    \r\nint main() {\r\n\tint N; cin>>N;\r\n\tv2d card(4,14,true);\r\n\tmap<char,int>\
    \ ch2i = {{'S',0}, {'H',1}, {'C',2}, {'D',3}};\r\n\tmap<int,char> i2ch = {{0,'S'},\
    \ {1,'H'}, {2,'C'}, {3,'D'}};\r\n\r\n\tfor(int i=0; i<N; i++) {\r\n\t\tchar ch;\
    \ int num;\r\n\t\tcin>>ch>>num;\r\n\t\tcard[ch2i[ch]][num]=false;\r\n\t}\r\n\r\
    \n\tfor(int i=0; i<4; i++)for(int j=1; j<=13; j++) {\r\n\t\tif(card[i][j]) {\r\
    \n\t\t\tcout<<i2ch[i]<<\" \"<<j<<endl;\r\n\t\t}\r\n\t}\r\n}\r\n"
  dependsOn:
  - structure/2d_array.cpp
  isVerificationFile: true
  path: test/aoj_ITP1_6_B.test.cpp
  requiredBy: []
  timestamp: '2021-01-31 14:43:41+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_ITP1_6_B.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_ITP1_6_B.test.cpp
- /verify/test/aoj_ITP1_6_B.test.cpp.html
title: test/aoj_ITP1_6_B.test.cpp
---
