---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/binpow.cpp
    title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_0341.test.cpp
    title: test/aoj_0341.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    document_title: ModInt
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 71, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.9.0/x64/lib/python3.9/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ mod/modint.cpp: line 15: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "/*\r\n * @brief ModInt\r\n * @!docs docs/modint.md\r\n */\r\n\r\n#ifndef\
    \ lib_mint\r\n#define lib_mint\r\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#include \"\
    ../math/binpow.cpp\"\r\n\r\ntemplate<int mod>\r\nstruct mint {\r\nprivate:\r\n\
    \r\n\tlong long val;\r\n\r\npublic:\r\n\r\n\tmint(long long x=0) : val((mod+x%mod)%mod)\
    \ {}\r\n\r\nprivate:\r\n\r\n\tmint pow(long long ex) const {\r\n\t\treturn mint(binpow(val,\
    \ ex, mod));\r\n\t}\r\n\tmint inv() const {\r\n\t\treturn pow(mod-2);\r\n\t}\r\
    \n\r\npublic:\r\n\r\n\tmint operator-() const {\r\n\t\treturn mint(-val);\r\n\t\
    }\r\n\r\n\tmint& operator+=(const mint& a) {\r\n\t\t(val+=a.val) %= mod;\r\n\t\
    \treturn *this;\r\n\t}\r\n\tmint& operator-=(const mint& a) {\r\n\t\t(val+=mod-a.val)\
    \ %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator*=(const mint& a) {\r\
    \n\t\t(val*=a.val) %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator/=(const\
    \ mint& a) {\r\n\t\treturn (*this) *= a.inv();\r\n\t}\r\n\r\n\tmint operator+(const\
    \ mint& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res+=a;\r\n\t}\r\n\t\
    mint operator-(const mint& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res-=a;\r\
    \n\t}\r\n\tmint operator*(const mint& a) const {\r\n\t\tmint res(*this);\r\n\t\
    \treturn res*=a;\r\n\t}\r\n\tmint operator/(const mint& a) const {\r\n\t\tmint\
    \ res(*this);\r\n\t\treturn res/=a;\r\n\t}\r\n\r\n\tmint& operator++() {\r\n\t\
    \t(++val) %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint operator++(int) {\r\n\t\
    \tmint res(*this);\r\n\t\t(++val) %= mod;\r\n\t\treturn res;\r\n\t}\r\n\tmint&\
    \ operator--() {\r\n\t\t(val+=mod-1) %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\t\
    mint operator--(int) {\r\n\t\tmint res(*this);\r\n\t\t(val+=mod-1) %= mod;\r\n\
    \t\treturn res;\r\n\t}\r\n\r\n\tbool operator==(const mint& a) const {\r\n\t\t\
    return val == a.val;\r\n\t}\r\n\tbool operator!=(const mint& a) const {\r\n\t\t\
    return val != a.val;\r\n\t}\r\n\tbool operator<(const mint& a) const {\r\n\t\t\
    return val < a.val;\r\n\t}\r\n\tbool operator>(const mint& a) const {\r\n\t\t\
    return val > a.val;\r\n\t}\r\n\tbool operator<=(const mint& a) const {\r\n\t\t\
    return val <= a.val;\r\n\t}\r\n\tbool operator>=(const mint& a) const {\r\n\t\t\
    return val >= a.val;\r\n\t}\r\n\r\n\tmint& operator=(const mint& a) {\r\n\t\t\
    val = a.val;\r\n\t\treturn *this;\r\n\t}\r\n\r\n\tfriend ostream& operator<<(ostream&\
    \ os, const mint& a) {\r\n\t\treturn os << a.val;\r\n\t}\r\n\tfriend istream&\
    \ operator>>(istream& is, mint &a) {\r\n\t\tlong long n;\r\n\t\tis >> n;\r\n\t\
    \ta = mint(n);\r\n\t\treturn is;\r\n\t}\r\n};\r\n\r\n#endif // lib_mint\r\n"
  dependsOn:
  - math/binpow.cpp
  isVerificationFile: false
  path: mod/modint.cpp
  requiredBy: []
  timestamp: '2020-11-09 00:40:50+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_0341.test.cpp
documentation_of: mod/modint.cpp
layout: document
redirect_from:
- /library/mod/modint.cpp
- /library/mod/modint.cpp.html
title: ModInt
---
