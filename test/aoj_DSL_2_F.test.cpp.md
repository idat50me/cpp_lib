---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _isVerificationFailed: true
  _pathExtension: cpp
  _verificationStatusIcon: ':x:'
  attributes: {}
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir, options={'include_paths': [basedir]}).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 193, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 401, in update\n    self.update(self._resolve(pathlib.Path(included), included_from=path))\n\
    \  File \"/opt/hostedtoolcache/Python/3.9.1/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 260, in _resolve\n    raise BundleErrorAt(path, -1, \"no such header\"\
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: graph/segtree_lazy.cpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_F\"\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"graph/segtree_lazy.cpp\"\r\n\
    \r\nint main() {\r\n\tint N,Q; cin>>N>>Q;\r\n\tconst int in = 2147483647;\r\n\t\
    segtree_lazy<int,int> lsg(\r\n\t\tN,\r\n\t\t[](int l, int r){return min(l,r);},\r\
    \n\t\t[](int x, int m){return m;},\r\n\t\t[](int l, int r){return r;},\r\n\t\t\
    in, in\r\n\t);\r\n\r\n\twhile(Q--) {\r\n\t\tint mode; cin>>mode;\r\n\t\tif(mode==0)\
    \ {\r\n\t\t\tint S,T,X; cin>>S>>T>>X;\r\n\t\t\tlsg.update(S,T+1,X);\r\n\t\t}\r\
    \n\t\telse {\r\n\t\t\tint S,T; cin>>S>>T;\r\n\t\t\tcout<<lsg.get(S,T+1)<<endl;\r\
    \n\t\t}\r\n\t}\r\n}\r\n"
  dependsOn: []
  isVerificationFile: true
  path: test/aoj_DSL_2_F.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj_DSL_2_F.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_DSL_2_F.test.cpp
- /verify/test/aoj_DSL_2_F.test.cpp.html
title: test/aoj_DSL_2_F.test.cpp
---
