---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_0341.test.cpp
    title: test/aoj_0341.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_0599.test.cpp
    title: test/yuki_0599.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_1035.test.cpp
    title: test/yuki_1035.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"mod/modint.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<int\
    \ mod>\r\nstruct mint {\r\nprivate:\r\n\r\n\tlong long val;\r\n\r\npublic:\r\n\
    \r\n\tmint(long long x=0) : val((mod+x%mod)%mod) {}\r\n\r\nprivate:\r\n\tmint\
    \ inv() const {\r\n\t\tlong long x_ = val, xd = 1, xdd = 0,\r\n\t\t          y_\
    \ = mod, yd = 0, ydd = 1,\r\n\t\t          div;\r\n\t\t\r\n\t\twhile(true) {\r\
    \n\t\t\tif(!y_) return mint(xd);\r\n\t\t\tdiv = x_/y_;\r\n\t\t\tx_  -= div*y_;\r\
    \n\t\t\txd  -= div*yd;\r\n\t\t\txdd -= div*ydd;\r\n\r\n\t\t\tif(!x_) return mint(yd);\r\
    \n\t\t\tdiv = y_/x_;\r\n\t\t\ty_  -= div*x_;\r\n\t\t\tyd  -= div*xd;\r\n\t\t\t\
    ydd -= div*xdd;\r\n\t\t}\r\n\t}\r\n\r\npublic:\r\n\r\n\tmint operator-() const\
    \ {\r\n\t\treturn mint(-val);\r\n\t}\r\n\r\n\tmint& operator+=(const mint& a)\
    \ {\r\n\t\tval += a.val;\r\n\t\tif(val >= mod) val -= mod;\r\n\t\treturn *this;\r\
    \n\t}\r\n\tmint& operator-=(const mint& a) {\r\n\t\tval -= a.val;\r\n\t\tif(val\
    \ < 0) val += mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator*=(const mint&\
    \ a) {\r\n\t\t(val*=a.val) %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator/=(const\
    \ mint& a) {\r\n\t\treturn (*this) *= a.inv();\r\n\t}\r\n\tmint& operator+=(const\
    \ long long& a) {\r\n\t\t(val+=mod+a%mod) %= mod;\r\n\t\treturn *this;\r\n\t}\r\
    \n\tmint& operator-=(const long long& a) {\r\n\t\t(val+=mod-a%mod) %= mod;\r\n\
    \t\treturn *this;\r\n\t}\r\n\tmint& operator*=(const long long& a) {\r\n\t\t(val*=mod+a%mod)\
    \ %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator/=(const long long& a)\
    \ {\r\n\t\treturn (*this)/=mint(a);\r\n\t}\r\n\r\n\tmint operator+(const mint&\
    \ a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res+=a;\r\n\t}\r\n\tmint operator-(const\
    \ mint& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res-=a;\r\n\t}\r\n\t\
    mint operator*(const mint& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res*=a;\r\
    \n\t}\r\n\tmint operator/(const mint& a) const {\r\n\t\tmint res(*this);\r\n\t\
    \treturn res/=a;\r\n\t}\r\n\tmint operator+(const long long& a) const {\r\n\t\t\
    mint res(*this);\r\n\t\treturn res+=a;\r\n\t}\r\n\tmint operator-(const long long&\
    \ a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res-=a;\r\n\t}\r\n\tmint operator*(const\
    \ long long& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res*=a;\r\n\t}\r\
    \n\tmint operator/(const long long& a) const {\r\n\t\tmint res(*this);\r\n\t\t\
    return res/=mint(a);\r\n\t}\r\n\r\n\tmint& operator++() {\r\n\t\t(++val) %= mod;\r\
    \n\t\treturn *this;\r\n\t}\r\n\tmint operator++(int) {\r\n\t\tmint res(*this);\r\
    \n\t\t(++val) %= mod;\r\n\t\treturn res;\r\n\t}\r\n\tmint& operator--() {\r\n\t\
    \t(val+=mod-1) %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint operator--(int) {\r\
    \n\t\tmint res(*this);\r\n\t\t(val+=mod-1) %= mod;\r\n\t\treturn res;\r\n\t}\r\
    \n\r\n\tbool operator==(const mint& a) const {\r\n\t\treturn val == a.val;\r\n\
    \t}\r\n\tbool operator!=(const mint& a) const {\r\n\t\treturn val != a.val;\r\n\
    \t}\r\n\tbool operator<(const mint& a) const {\r\n\t\treturn val < a.val;\r\n\t\
    }\r\n\tbool operator>(const mint& a) const {\r\n\t\treturn val > a.val;\r\n\t\
    }\r\n\tbool operator<=(const mint& a) const {\r\n\t\treturn val <= a.val;\r\n\t\
    }\r\n\tbool operator>=(const mint& a) const {\r\n\t\treturn val >= a.val;\r\n\t\
    }\r\n\tbool operator==(const long long& a) const {\r\n\t\treturn val == a;\r\n\
    \t}\r\n\tbool operator!=(const long long& a) const {\r\n\t\treturn val != a;\r\
    \n\t}\r\n\tbool operator<(const long long& a) const {\r\n\t\treturn val < a;\r\
    \n\t}\r\n\tbool operator>(const long long& a) const {\r\n\t\treturn val > a;\r\
    \n\t}\r\n\tbool operator<=(const long long& a) const {\r\n\t\treturn val <= a;\r\
    \n\t}\r\n\tbool operator>=(const long long& a) const {\r\n\t\treturn val >= a;\r\
    \n\t}\r\n\r\n\tmint& operator=(const mint& a) {\r\n\t\tval = a.val;\r\n\t\treturn\
    \ *this;\r\n\t}\r\n\tmint& operator=(const long long& a) {\r\n\t\tval = (mod+a%mod)%mod;\r\
    \n\t\treturn *this;\r\n\t}\r\n\r\n\tfriend ostream& operator<<(ostream& os, const\
    \ mint& a) {\r\n\t\treturn os << a.val;\r\n\t}\r\n\tfriend istream& operator>>(istream&\
    \ is, mint &a) {\r\n\t\tlong long n;\r\n\t\tis >> n;\r\n\t\ta = mint(n);\r\n\t\
    \treturn is;\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<int mod>\r\
    \nstruct mint {\r\nprivate:\r\n\r\n\tlong long val;\r\n\r\npublic:\r\n\r\n\tmint(long\
    \ long x=0) : val((mod+x%mod)%mod) {}\r\n\r\nprivate:\r\n\tmint inv() const {\r\
    \n\t\tlong long x_ = val, xd = 1, xdd = 0,\r\n\t\t          y_ = mod, yd = 0,\
    \ ydd = 1,\r\n\t\t          div;\r\n\t\t\r\n\t\twhile(true) {\r\n\t\t\tif(!y_)\
    \ return mint(xd);\r\n\t\t\tdiv = x_/y_;\r\n\t\t\tx_  -= div*y_;\r\n\t\t\txd \
    \ -= div*yd;\r\n\t\t\txdd -= div*ydd;\r\n\r\n\t\t\tif(!x_) return mint(yd);\r\n\
    \t\t\tdiv = y_/x_;\r\n\t\t\ty_  -= div*x_;\r\n\t\t\tyd  -= div*xd;\r\n\t\t\tydd\
    \ -= div*xdd;\r\n\t\t}\r\n\t}\r\n\r\npublic:\r\n\r\n\tmint operator-() const {\r\
    \n\t\treturn mint(-val);\r\n\t}\r\n\r\n\tmint& operator+=(const mint& a) {\r\n\
    \t\tval += a.val;\r\n\t\tif(val >= mod) val -= mod;\r\n\t\treturn *this;\r\n\t\
    }\r\n\tmint& operator-=(const mint& a) {\r\n\t\tval -= a.val;\r\n\t\tif(val <\
    \ 0) val += mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator*=(const mint&\
    \ a) {\r\n\t\t(val*=a.val) %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator/=(const\
    \ mint& a) {\r\n\t\treturn (*this) *= a.inv();\r\n\t}\r\n\tmint& operator+=(const\
    \ long long& a) {\r\n\t\t(val+=mod+a%mod) %= mod;\r\n\t\treturn *this;\r\n\t}\r\
    \n\tmint& operator-=(const long long& a) {\r\n\t\t(val+=mod-a%mod) %= mod;\r\n\
    \t\treturn *this;\r\n\t}\r\n\tmint& operator*=(const long long& a) {\r\n\t\t(val*=mod+a%mod)\
    \ %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator/=(const long long& a)\
    \ {\r\n\t\treturn (*this)/=mint(a);\r\n\t}\r\n\r\n\tmint operator+(const mint&\
    \ a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res+=a;\r\n\t}\r\n\tmint operator-(const\
    \ mint& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res-=a;\r\n\t}\r\n\t\
    mint operator*(const mint& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res*=a;\r\
    \n\t}\r\n\tmint operator/(const mint& a) const {\r\n\t\tmint res(*this);\r\n\t\
    \treturn res/=a;\r\n\t}\r\n\tmint operator+(const long long& a) const {\r\n\t\t\
    mint res(*this);\r\n\t\treturn res+=a;\r\n\t}\r\n\tmint operator-(const long long&\
    \ a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res-=a;\r\n\t}\r\n\tmint operator*(const\
    \ long long& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res*=a;\r\n\t}\r\
    \n\tmint operator/(const long long& a) const {\r\n\t\tmint res(*this);\r\n\t\t\
    return res/=mint(a);\r\n\t}\r\n\r\n\tmint& operator++() {\r\n\t\t(++val) %= mod;\r\
    \n\t\treturn *this;\r\n\t}\r\n\tmint operator++(int) {\r\n\t\tmint res(*this);\r\
    \n\t\t(++val) %= mod;\r\n\t\treturn res;\r\n\t}\r\n\tmint& operator--() {\r\n\t\
    \t(val+=mod-1) %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint operator--(int) {\r\
    \n\t\tmint res(*this);\r\n\t\t(val+=mod-1) %= mod;\r\n\t\treturn res;\r\n\t}\r\
    \n\r\n\tbool operator==(const mint& a) const {\r\n\t\treturn val == a.val;\r\n\
    \t}\r\n\tbool operator!=(const mint& a) const {\r\n\t\treturn val != a.val;\r\n\
    \t}\r\n\tbool operator<(const mint& a) const {\r\n\t\treturn val < a.val;\r\n\t\
    }\r\n\tbool operator>(const mint& a) const {\r\n\t\treturn val > a.val;\r\n\t\
    }\r\n\tbool operator<=(const mint& a) const {\r\n\t\treturn val <= a.val;\r\n\t\
    }\r\n\tbool operator>=(const mint& a) const {\r\n\t\treturn val >= a.val;\r\n\t\
    }\r\n\tbool operator==(const long long& a) const {\r\n\t\treturn val == a;\r\n\
    \t}\r\n\tbool operator!=(const long long& a) const {\r\n\t\treturn val != a;\r\
    \n\t}\r\n\tbool operator<(const long long& a) const {\r\n\t\treturn val < a;\r\
    \n\t}\r\n\tbool operator>(const long long& a) const {\r\n\t\treturn val > a;\r\
    \n\t}\r\n\tbool operator<=(const long long& a) const {\r\n\t\treturn val <= a;\r\
    \n\t}\r\n\tbool operator>=(const long long& a) const {\r\n\t\treturn val >= a;\r\
    \n\t}\r\n\r\n\tmint& operator=(const mint& a) {\r\n\t\tval = a.val;\r\n\t\treturn\
    \ *this;\r\n\t}\r\n\tmint& operator=(const long long& a) {\r\n\t\tval = (mod+a%mod)%mod;\r\
    \n\t\treturn *this;\r\n\t}\r\n\r\n\tfriend ostream& operator<<(ostream& os, const\
    \ mint& a) {\r\n\t\treturn os << a.val;\r\n\t}\r\n\tfriend istream& operator>>(istream&\
    \ is, mint &a) {\r\n\t\tlong long n;\r\n\t\tis >> n;\r\n\t\ta = mint(n);\r\n\t\
    \treturn is;\r\n\t}\r\n};\r\n"
  dependsOn: []
  isVerificationFile: false
  path: mod/modint.cpp
  requiredBy: []
  timestamp: '2021-01-08 23:39:55+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_0341.test.cpp
  - test/yuki_0599.test.cpp
  - test/yuki_1035.test.cpp
documentation_of: mod/modint.cpp
layout: document
title: ModInt
---

## なにこれ
演算時に $\bmod$ を自動でとってくれる．
基本的に Integer と同様に扱えるはず．
ModInt と Integer の演算もできる（下記参照）．

## コンストラクタ
- `mint<mod>(x)`：`mod` を法としたときの `x`．`mod` は素数．

## 補足
以下の演算子に対応している．

- 算術演算
	- 四則演算 `+`, `-`, `*`, `/`
	- インクリメント・デクリメント（前置・後置）
	- 複合代入 `+=`, `-=`, `*=`, `/=`
	- 単項マイナス　`-a` みたいなやつ
- 比較演算 `==`, `!=`, `<`, `>`, `<=`, `>=`
- 単純代入 `=`
- 入出力 `>>`, `<<`

除算 `/`, `/=` は計算量 $O(\log x)$ かかることに注意．