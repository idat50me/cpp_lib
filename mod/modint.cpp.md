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
  - icon: ':heavy_check_mark:'
    path: test/yuki_1035.test.cpp
    title: test/yuki_1035.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"mod/modint.cpp\"\n\n\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\n#line 2 \"math/binpow.cpp\"\n/*\r\n * @brief Binary-Power(\u7E70\u308A\u8FD4\
    \u3057\u4E8C\u4E57\u6CD5)\r\n */\r\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\nlong long\
    \ binpow(long long a, long long ex, long long p=(1LL<<61)-1) {\r\n\tlong long\
    \ res = 1;\r\n\twhile(ex > 0) {\r\n\t\tif(ex & 1) (res*=a) %= p;\r\n\t\tex>>=1;\r\
    \n\t\t(a*=a) %= p;\r\n\t}\r\n\treturn res;\r\n}\r\n#line 11 \"mod/modint.cpp\"\
    \n\r\ntemplate<int mod>\r\nstruct mint {\r\nprivate:\r\n\r\n\tlong long val;\r\
    \n\r\npublic:\r\n\r\n\tmint(long long x=0) : val((mod+x%mod)%mod) {}\r\n\r\nprivate:\r\
    \n\r\n\tmint pow(long long ex) const {\r\n\t\treturn mint(binpow(val, ex, mod));\r\
    \n\t}\r\n\tmint inv() const {\r\n\t\treturn pow(mod-2);\r\n\t}\r\n\r\npublic:\r\
    \n\r\n\tmint operator-() const {\r\n\t\treturn mint(-val);\r\n\t}\r\n\r\n\tmint&\
    \ operator+=(const mint& a) {\r\n\t\t(val+=a.val) %= mod;\r\n\t\treturn *this;\r\
    \n\t}\r\n\tmint& operator-=(const mint& a) {\r\n\t\t(val+=mod-a.val) %= mod;\r\
    \n\t\treturn *this;\r\n\t}\r\n\tmint& operator*=(const mint& a) {\r\n\t\t(val*=a.val)\
    \ %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator/=(const mint& a) {\r\
    \n\t\treturn (*this) *= a.inv();\r\n\t}\r\n\r\n\tmint operator+(const mint& a)\
    \ const {\r\n\t\tmint res(*this);\r\n\t\treturn res+=a;\r\n\t}\r\n\tmint operator-(const\
    \ mint& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res-=a;\r\n\t}\r\n\t\
    mint operator*(const mint& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res*=a;\r\
    \n\t}\r\n\tmint operator/(const mint& a) const {\r\n\t\tmint res(*this);\r\n\t\
    \treturn res/=a;\r\n\t}\r\n\tmint operator+(const long long& a) const {\r\n\t\t\
    mint res(*this);\r\n\t\treturn res+=mint(a);\r\n\t}\r\n\tmint operator-(const\
    \ long long& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res-=mint(a);\r\n\
    \t}\r\n\tmint operator*(const long long& a) const {\r\n\t\tmint res(*this);\r\n\
    \t\treturn res*=mint(a);\r\n\t}\r\n\tmint operator/(const long long& a) const\
    \ {\r\n\t\tmint res(*this);\r\n\t\treturn res/=mint(a);\r\n\t}\r\n\r\n\tmint&\
    \ operator++() {\r\n\t\t(++val) %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint\
    \ operator++(int) {\r\n\t\tmint res(*this);\r\n\t\t(++val) %= mod;\r\n\t\treturn\
    \ res;\r\n\t}\r\n\tmint& operator--() {\r\n\t\t(val+=mod-1) %= mod;\r\n\t\treturn\
    \ *this;\r\n\t}\r\n\tmint operator--(int) {\r\n\t\tmint res(*this);\r\n\t\t(val+=mod-1)\
    \ %= mod;\r\n\t\treturn res;\r\n\t}\r\n\r\n\tbool operator==(const mint& a) const\
    \ {\r\n\t\treturn val == a.val;\r\n\t}\r\n\tbool operator!=(const mint& a) const\
    \ {\r\n\t\treturn val != a.val;\r\n\t}\r\n\tbool operator<(const mint& a) const\
    \ {\r\n\t\treturn val < a.val;\r\n\t}\r\n\tbool operator>(const mint& a) const\
    \ {\r\n\t\treturn val > a.val;\r\n\t}\r\n\tbool operator<=(const mint& a) const\
    \ {\r\n\t\treturn val <= a.val;\r\n\t}\r\n\tbool operator>=(const mint& a) const\
    \ {\r\n\t\treturn val >= a.val;\r\n\t}\r\n\tbool operator==(const long long& a)\
    \ const {\r\n\t\treturn val == a;\r\n\t}\r\n\tbool operator!=(const long long&\
    \ a) const {\r\n\t\treturn val != a;\r\n\t}\r\n\tbool operator<(const long long&\
    \ a) const {\r\n\t\treturn val < a;\r\n\t}\r\n\tbool operator>(const long long&\
    \ a) const {\r\n\t\treturn val > a;\r\n\t}\r\n\tbool operator<=(const long long&\
    \ a) const {\r\n\t\treturn val <= a;\r\n\t}\r\n\tbool operator>=(const long long&\
    \ a) const {\r\n\t\treturn val >= a;\r\n\t}\r\n\r\n\tmint& operator=(const mint&\
    \ a) {\r\n\t\tval = a.val;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator=(const\
    \ long long& a) {\r\n\t\tval = (mod+a%mod)%mod;\r\n\t\treturn *this;\r\n\t}\r\n\
    \r\n\tfriend ostream& operator<<(ostream& os, const mint& a) {\r\n\t\treturn os\
    \ << a.val;\r\n\t}\r\n\tfriend istream& operator>>(istream& is, mint &a) {\r\n\
    \t\tlong long n;\r\n\t\tis >> n;\r\n\t\ta = mint(n);\r\n\t\treturn is;\r\n\t}\r\
    \n};\r\n\r\n\n"
  code: "#ifndef lib_mint\r\n#define lib_mint\r\n\r\n#ifndef call_include\r\n#define\
    \ call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\n#include \"../math/binpow.cpp\"\r\n\r\ntemplate<int mod>\r\nstruct mint\
    \ {\r\nprivate:\r\n\r\n\tlong long val;\r\n\r\npublic:\r\n\r\n\tmint(long long\
    \ x=0) : val((mod+x%mod)%mod) {}\r\n\r\nprivate:\r\n\r\n\tmint pow(long long ex)\
    \ const {\r\n\t\treturn mint(binpow(val, ex, mod));\r\n\t}\r\n\tmint inv() const\
    \ {\r\n\t\treturn pow(mod-2);\r\n\t}\r\n\r\npublic:\r\n\r\n\tmint operator-()\
    \ const {\r\n\t\treturn mint(-val);\r\n\t}\r\n\r\n\tmint& operator+=(const mint&\
    \ a) {\r\n\t\t(val+=a.val) %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint& operator-=(const\
    \ mint& a) {\r\n\t\t(val+=mod-a.val) %= mod;\r\n\t\treturn *this;\r\n\t}\r\n\t\
    mint& operator*=(const mint& a) {\r\n\t\t(val*=a.val) %= mod;\r\n\t\treturn *this;\r\
    \n\t}\r\n\tmint& operator/=(const mint& a) {\r\n\t\treturn (*this) *= a.inv();\r\
    \n\t}\r\n\r\n\tmint operator+(const mint& a) const {\r\n\t\tmint res(*this);\r\
    \n\t\treturn res+=a;\r\n\t}\r\n\tmint operator-(const mint& a) const {\r\n\t\t\
    mint res(*this);\r\n\t\treturn res-=a;\r\n\t}\r\n\tmint operator*(const mint&\
    \ a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res*=a;\r\n\t}\r\n\tmint operator/(const\
    \ mint& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res/=a;\r\n\t}\r\n\t\
    mint operator+(const long long& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn\
    \ res+=mint(a);\r\n\t}\r\n\tmint operator-(const long long& a) const {\r\n\t\t\
    mint res(*this);\r\n\t\treturn res-=mint(a);\r\n\t}\r\n\tmint operator*(const\
    \ long long& a) const {\r\n\t\tmint res(*this);\r\n\t\treturn res*=mint(a);\r\n\
    \t}\r\n\tmint operator/(const long long& a) const {\r\n\t\tmint res(*this);\r\n\
    \t\treturn res/=mint(a);\r\n\t}\r\n\r\n\tmint& operator++() {\r\n\t\t(++val) %=\
    \ mod;\r\n\t\treturn *this;\r\n\t}\r\n\tmint operator++(int) {\r\n\t\tmint res(*this);\r\
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
    \treturn is;\r\n\t}\r\n};\r\n\r\n#endif // lib_mint\r\n"
  dependsOn:
  - math/binpow.cpp
  isVerificationFile: false
  path: mod/modint.cpp
  requiredBy: []
  timestamp: '2020-11-16 10:44:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/aoj_0341.test.cpp
  - test/yuki_1035.test.cpp
documentation_of: mod/modint.cpp
layout: document
title: ModInt
---

## なにこれ
演算時に $\bmod$ を自動でとってくれる．

## 制約
- $p$ は素数

## コンストラクタ
- `mint<mod>(x)`：計算量 $O(1)$
	- `mod`：値の法．
	- `x`：初期値

## 演算子
- 算術演算
	- 四則演算 `+`, `-`, `*`, `/`
	- インクリメント・デクリメント（前置・後置）
	- 複合代入 `+=`, `-=`, `*=`, `/=`
	- 単項マイナス　`-a` みたいなやつ
- 比較演算 `==`, `!=`, `<`, `>`, `<=`, `>=`
- 単純代入 `=`
- 入出力 `>>`, `<<`
