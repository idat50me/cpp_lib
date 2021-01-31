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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: graph/segtree_RmQ.cpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A\"\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"graph/segtree_RmQ.cpp\"\r\n\
    \r\nint main() {\r\n\tint N,Q; cin>>N>>Q;\r\n\tvector<int> v(N,(1<<31)-1);\r\n\
    \tRmQ rmq_tree(v);\r\n\r\n\tfor(int i=0; i<Q; i++) {\r\n\t\tint com,x,y; cin>>com>>x>>y;\r\
    \n\r\n\t\tif(com==0) rmq_tree.update(x,y);\r\n\t\telse cout<<rmq_tree.getmin(x,y+1)<<'\\\
    n';\r\n\t}\r\n\tcout<<flush;\r\n}\r\n"
  dependsOn: []
  isVerificationFile: true
  path: test/aoj_DSL_2_A.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/aoj_DSL_2_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_DSL_2_A.test.cpp
- /verify/test/aoj_DSL_2_A.test.cpp.html
title: test/aoj_DSL_2_A.test.cpp
---
