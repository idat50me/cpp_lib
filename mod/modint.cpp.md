---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: math/binpow.cpp
    title: "Binary-Power(\u7E70\u308A\u8FD4\u3057\u4E8C\u4E57\u6CD5)"
  - icon: ':heavy_check_mark:'
    path: pre/macros.cpp
    title: pre/macros.cpp
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_0341.test.cpp
    title: test/aoj_0341.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    document_title: ModInt
    links: []
  bundledCode: "Traceback (most recent call last):\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/documentation/build.py\"\
    , line 70, in _render_source_code_stat\n    bundled_code = language.bundle(stat.path,\
    \ basedir=basedir).decode()\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus.py\"\
    , line 191, in bundle\n    bundler.update(path)\n  File \"/opt/hostedtoolcache/Python/3.8.5/x64/lib/python3.8/site-packages/onlinejudge_verify/languages/cplusplus_bundle.py\"\
    , line 398, in update\n    raise BundleErrorAt(path, i + 1, \"unable to process\
    \ #include in #if / #ifdef / #ifndef other than include guards\")\nonlinejudge_verify.languages.cplusplus_bundle.BundleErrorAt:\
    \ mod/modint.cpp: line 15: unable to process #include in #if / #ifdef / #ifndef\
    \ other than include guards\n"
  code: "/*\n * @brief ModInt\n * @!docs ./docs/modint.md\n */\n\n#ifndef lib_mint\n\
    #define lib_mint\n\n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\n\
    using namespace std;\n#endif\n\n#include \"../math/binpow.cpp\"\n\ntemplate<int\
    \ mod>\nstruct mint {\nprivate:\n\n\tlong long val;\n\npublic:\n\n\tmint(long\
    \ long x=0) : val((mod+x%mod)%mod) {}\n\nprivate:\n\n\tmint pow(long long ex)\
    \ const {\n\t\treturn mint(binpow(val, ex, mod));\n\t}\n\tmint inv() const {\n\
    \t\treturn pow(mod-2);\n\t}\n\npublic:\n\n\tmint operator-() const {\n\t\treturn\
    \ mint(-val);\n\t}\n\n\tmint& operator+=(const mint& a) {\n\t\t(val+=a.val) %=\
    \ mod;\n\t\treturn *this;\n\t}\n\tmint& operator-=(const mint& a) {\n\t\t(val+=mod-a.val)\
    \ %= mod;\n\t\treturn *this;\n\t}\n\tmint& operator*=(const mint& a) {\n\t\t(val*=a.val)\
    \ %= mod;\n\t\treturn *this;\n\t}\n\tmint& operator/=(const mint& a) {\n\t\treturn\
    \ (*this) *= a.inv();\n\t}\n\n\tmint operator+(const mint& a) const {\n\t\tmint\
    \ res(*this);\n\t\treturn res+=a;\n\t}\n\tmint operator-(const mint& a) const\
    \ {\n\t\tmint res(*this);\n\t\treturn res-=a;\n\t}\n\tmint operator*(const mint&\
    \ a) const {\n\t\tmint res(*this);\n\t\treturn res*=a;\n\t}\n\tmint operator/(const\
    \ mint& a) const {\n\t\tmint res(*this);\n\t\treturn res/=a;\n\t}\n\n\tmint& operator++()\
    \ {\n\t\t(++val) %= mod;\n\t\treturn *this;\n\t}\n\tmint operator++(int) {\n\t\
    \tmint res(*this);\n\t\t(++val) %= mod;\n\t\treturn res;\n\t}\n\tmint& operator--()\
    \ {\n\t\t(val+=mod-1) %= mod;\n\t\treturn *this;\n\t}\n\tmint operator--(int)\
    \ {\n\t\tmint res(*this);\n\t\t(val+=mod-1) %= mod;\n\t\treturn res;\n\t}\n\n\t\
    bool operator==(const mint& a) const {\n\t\treturn val == a.val;\n\t}\n\tbool\
    \ operator!=(const mint& a) const {\n\t\treturn val != a.val;\n\t}\n\tbool operator<(const\
    \ mint& a) const {\n\t\treturn val < a.val;\n\t}\n\tbool operator>(const mint&\
    \ a) const {\n\t\treturn val > a.val;\n\t}\n\tbool operator<=(const mint& a) const\
    \ {\n\t\treturn val <= a.val;\n\t}\n\tbool operator>=(const mint& a) const {\n\
    \t\treturn val >= a.val;\n\t}\n\n\tmint& operator=(const mint& a) {\n\t\tval =\
    \ a.val;\n\t\treturn *this;\n\t}\n\n\tfriend ostream& operator<<(ostream& os,\
    \ const mint& a) {\n\t\treturn os << a.val;\n\t}\n\tfriend istream& operator>>(istream&\
    \ is, mint &a) {\n\t\tlong long n;\n\t\tis >> n;\n\t\ta = mint(n);\n\t\treturn\
    \ is;\n\t}\n};\n\n#endif // lib_mint\n"
  dependsOn:
  - math/binpow.cpp
  - pre/macros.cpp
  isVerificationFile: false
  path: mod/modint.cpp
  requiredBy: []
  timestamp: '2020-08-29 23:04:02+09:00'
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
