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
    )\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt: graph/segtree.cpp:\
    \ line -1: no such header\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/static_range_sum\"\r\n\r\
    \n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\n\
    using namespace std;\r\n#endif\r\n\r\n#include \"graph/segtree.cpp\"\r\nusing\
    \ ll = long long;\r\n\r\nint main() {\r\n\tint N,Q; cin>>N>>Q;\r\n\tvector<ll>\
    \ v(N);\r\n\tfor(int i=0; i<N; i++) cin>>v[i];\r\n\tsegtree tree(v, [](ll a, ll\
    \ b) { return a+b; }, 0LL);\r\n\r\n\tfor(int i=0; i<Q; i++) {\r\n\t\tint l,r;\
    \ cin>>l>>r;\r\n\t\tcout<<tree.get(l,r)<<'\\n';\r\n\t}\r\n\tcout<<flush;\r\n}\r\
    \n"
  dependsOn: []
  isVerificationFile: true
  path: test/yosupo_static_range_sum.test.cpp
  requiredBy: []
  timestamp: '1970-01-01 00:00:00+00:00'
  verificationStatus: TEST_WRONG_ANSWER
  verifiedWith: []
documentation_of: test/yosupo_static_range_sum.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_static_range_sum.test.cpp
- /verify/test/yosupo_static_range_sum.test.cpp.html
title: test/yosupo_static_range_sum.test.cpp
---
