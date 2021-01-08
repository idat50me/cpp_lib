---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: string/z_algorithm.cpp
    title: string/z_algorithm.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/zalgorithm
    links:
    - https://judge.yosupo.jp/problem/zalgorithm
  bundledCode: "#line 1 \"test/yosupo_zalgorithm.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/zalgorithm\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"string/z_algorithm.cpp\"\n\r\
    \n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\n\
    using namespace std;\r\n#endif\r\n\r\nvector<int> z_algorithm(const string &S)\
    \ {\r\n\tint N = S.length();\r\n\tvector<int> res(N, 0);\r\n\r\n\tfor(int i=1,\
    \ c=0; i<N; i++) {\r\n\t\tint l = i-c;\r\n\t\tif(i+res[l] < c+res[c]) {\r\n\t\t\
    \tres[i] = res[l];\r\n\t\t}\r\n\t\telse {\r\n\t\t\tint l = max(c+res[c]-i, 0);\r\
    \n\t\t\twhile(i+l<N && S[l]==S[i+l]) l++;\r\n\t\t\tres[i] = l;\r\n\t\t\tc = i;\r\
    \n\t\t}\r\n\t}\r\n\r\n\tres[0] = N;\r\n\treturn res;\r\n}\r\n#line 10 \"test/yosupo_zalgorithm.test.cpp\"\
    \n\r\nint main() {\r\n\tstring S; cin>>S;\r\n\tvector<int> v = z_algorithm(S);\r\
    \n\tfor(int i=0; i<v.size(); i++) cout<<v[i]<<(i==v.size()-1?'\\n':' ');\r\n}\r\
    \n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/zalgorithm\"\r\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\n#include \"string/z_algorithm.cpp\"\r\n\r\nint main()\
    \ {\r\n\tstring S; cin>>S;\r\n\tvector<int> v = z_algorithm(S);\r\n\tfor(int i=0;\
    \ i<v.size(); i++) cout<<v[i]<<(i==v.size()-1?'\\n':' ');\r\n}\r\n"
  dependsOn:
  - string/z_algorithm.cpp
  isVerificationFile: true
  path: test/yosupo_zalgorithm.test.cpp
  requiredBy: []
  timestamp: '2021-01-07 08:32:51+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo_zalgorithm.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_zalgorithm.test.cpp
- /verify/test/yosupo_zalgorithm.test.cpp.html
title: test/yosupo_zalgorithm.test.cpp
---
