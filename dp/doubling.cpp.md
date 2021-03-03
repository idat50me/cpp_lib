---
data:
  _extendedDependsOn:
  - icon: ':question:'
    path: structure/2d_array.cpp
    title: "2D-Array( $2$ \u6B21\u5143\u914D\u5217)"
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yuki_1013.test.cpp
    title: test/yuki_1013.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yuki_1097.test.cpp
    title: test/yuki_1097.test.cpp
  _isVerificationFailed: false
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 2 \"dp/doubling.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\
    \n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#line 2 \"\
    structure/2d_array.cpp\"\n\r\n#ifndef call_include\r\n#define call_include\r\n\
    #include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\ntemplate<typename\
    \ T> struct v2d {\r\nprivate:\r\n\tvector<vector<T>> m;\r\n\r\npublic:\r\n\tv2d()\
    \ {}\r\n\tv2d(int h, int w) : m(h, vector<T>(w)) {}\r\n\tv2d(int h, int w, const\
    \ T &init) : m(h, vector<T>(w, init)) {}\r\n\tv2d(const initializer_list<initializer_list<T>>\
    \ m_init) : m(m_init.begin(), m_init.end()) {}\r\n\r\n\tvoid assign(int h, int\
    \ w) {\r\n\t\tm.assign(h, vector<T>(w));\r\n\t}\r\n\tvoid assign(int h, int w,\
    \ const T init) {\r\n\t\tm.assign(h, vector<T>(w, init));\r\n\t}\r\n\r\n\tinline\
    \ int size() const {\r\n\t\treturn m.size();\r\n\t}\r\n\r\n\tvoid in() {\r\n\t\
    \tfor(vector<T> &v : m)\r\n\t\t\tfor(T &val : v) cin >> val;\r\n\t}\r\n\tvoid\
    \ in(int h, int w) {\r\n\t\tm.resize(h, vector<T>(w));\r\n\t\tin();\r\n\t}\r\n\
    \r\n\tvoid out() {\r\n\t\tint h = m.size();\r\n\t\tfor(vector<T> &v : m) {\r\n\
    \t\t\tint sz = v.size();\r\n\t\t\tfor(int j = 0; j < sz; j++) {\r\n\t\t\t\tcout\
    \ << v[j] << (j == sz - 1 ? '\\n' : ' ');\r\n\t\t\t}\r\n\t\t}\r\n\t\tcout << flush;\r\
    \n\t}\r\n\r\n\tinline vector<T> &operator[](int idx) {\r\n\t\tassert(0 <= idx\
    \ && idx < m.size());\r\n\t\treturn m[idx];\r\n\t}\r\n\r\n\tbool rangeout(int\
    \ x, int y) {\r\n\t\tif(x < 0 || y < 0 || x >= size() || y >= m[x].size()) return\
    \ true;\r\n\t\treturn false;\r\n\t}\r\n};\r\n#line 10 \"dp/doubling.cpp\"\n\r\n\
    template<typename T = int> struct doubling {\r\nprivate:\r\n\tconst int n;\r\n\
    \tconst long long max_t;\r\n\tv2d<int> table;\r\n\tv2d<T> data;\r\n\r\n\tfunction<T(T\
    \ &, T &)> f = [this](T &l, T &r) { return r; };\r\n\r\npublic:\r\n\tdoubling(const\
    \ vector<int> &v, long long _max_t) : n(v.size()), max_t(_max_t) {\r\n\t\tint\
    \ k = 0;\r\n\t\twhile((1LL << k) <= max_t) k++;\r\n\t\ttable.assign(k, n);\r\n\
    \t\tdata.assign(k, n);\r\n\t\ttable[0] = data[0] = v;\r\n\r\n\t\tfor(int i = 0;\
    \ i < k - 1; i++) {\r\n\t\t\tfor(int j = 0; j < n; j++) {\r\n\t\t\t\ttable[i +\
    \ 1][j] = data[i + 1][j] = table[i][table[i][j]];\r\n\t\t\t}\r\n\t\t}\r\n\t}\r\
    \n\tdoubling(const vector<int> &v, const vector<T> &v_data, long long _max_t,\
    \ function<T(T &, T &)> _f) :\r\n\t\tn(v.size()), max_t(_max_t), f(_f) {\r\n\t\
    \tint k = 0;\r\n\t\twhile((1LL << k) <= max_t) k++;\r\n\t\ttable.assign(k, n);\r\
    \n\t\tdata.assign(k, n);\r\n\t\ttable[0] = v;\r\n\t\tdata[0] = v_data;\r\n\r\n\
    \t\tfor(int i = 0; i < k - 1; i++) {\r\n\t\t\tfor(int j = 0; j < n; j++) {\r\n\
    \t\t\t\ttable[i + 1][j] = table[i][table[i][j]];\r\n\t\t\t\tdata[i + 1][j] = f(data[i][j],\
    \ data[i][table[i][j]]);\r\n\t\t\t}\r\n\t\t}\r\n\t}\r\n\r\n\tT get(int x, T init,\
    \ long long t) {\r\n\t\tassert(t <= max_t);\r\n\t\tint id = x;\r\n\t\tT res =\
    \ init;\r\n\t\tfor(int k = 0; t; k++) {\r\n\t\t\tif(t & 1) {\r\n\t\t\t\tres =\
    \ f(res, data[k][id]);\r\n\t\t\t\tid = table[k][id];\r\n\t\t\t}\r\n\t\t\tt >>=\
    \ 1;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\r\n\tint get_idx(int x, long long\
    \ t) {\r\n\t\tassert(t <= max_t);\r\n\t\tint id = x;\r\n\t\tfor(int k = 0; t;\
    \ k++) {\r\n\t\t\tif(t & 1) {\r\n\t\t\t\tid = table[k][id];\r\n\t\t\t}\r\n\t\t\
    \tt >>= 1;\r\n\t\t}\r\n\t\treturn id;\r\n\t}\r\n};\r\n"
  code: "#pragma once\r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include\
    \ <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\n\r\n#include \"../structure/2d_array.cpp\"\
    \r\n\r\ntemplate<typename T = int> struct doubling {\r\nprivate:\r\n\tconst int\
    \ n;\r\n\tconst long long max_t;\r\n\tv2d<int> table;\r\n\tv2d<T> data;\r\n\r\n\
    \tfunction<T(T &, T &)> f = [this](T &l, T &r) { return r; };\r\n\r\npublic:\r\
    \n\tdoubling(const vector<int> &v, long long _max_t) : n(v.size()), max_t(_max_t)\
    \ {\r\n\t\tint k = 0;\r\n\t\twhile((1LL << k) <= max_t) k++;\r\n\t\ttable.assign(k,\
    \ n);\r\n\t\tdata.assign(k, n);\r\n\t\ttable[0] = data[0] = v;\r\n\r\n\t\tfor(int\
    \ i = 0; i < k - 1; i++) {\r\n\t\t\tfor(int j = 0; j < n; j++) {\r\n\t\t\t\ttable[i\
    \ + 1][j] = data[i + 1][j] = table[i][table[i][j]];\r\n\t\t\t}\r\n\t\t}\r\n\t\
    }\r\n\tdoubling(const vector<int> &v, const vector<T> &v_data, long long _max_t,\
    \ function<T(T &, T &)> _f) :\r\n\t\tn(v.size()), max_t(_max_t), f(_f) {\r\n\t\
    \tint k = 0;\r\n\t\twhile((1LL << k) <= max_t) k++;\r\n\t\ttable.assign(k, n);\r\
    \n\t\tdata.assign(k, n);\r\n\t\ttable[0] = v;\r\n\t\tdata[0] = v_data;\r\n\r\n\
    \t\tfor(int i = 0; i < k - 1; i++) {\r\n\t\t\tfor(int j = 0; j < n; j++) {\r\n\
    \t\t\t\ttable[i + 1][j] = table[i][table[i][j]];\r\n\t\t\t\tdata[i + 1][j] = f(data[i][j],\
    \ data[i][table[i][j]]);\r\n\t\t\t}\r\n\t\t}\r\n\t}\r\n\r\n\tT get(int x, T init,\
    \ long long t) {\r\n\t\tassert(t <= max_t);\r\n\t\tint id = x;\r\n\t\tT res =\
    \ init;\r\n\t\tfor(int k = 0; t; k++) {\r\n\t\t\tif(t & 1) {\r\n\t\t\t\tres =\
    \ f(res, data[k][id]);\r\n\t\t\t\tid = table[k][id];\r\n\t\t\t}\r\n\t\t\tt >>=\
    \ 1;\r\n\t\t}\r\n\t\treturn res;\r\n\t}\r\n\r\n\tint get_idx(int x, long long\
    \ t) {\r\n\t\tassert(t <= max_t);\r\n\t\tint id = x;\r\n\t\tfor(int k = 0; t;\
    \ k++) {\r\n\t\t\tif(t & 1) {\r\n\t\t\t\tid = table[k][id];\r\n\t\t\t}\r\n\t\t\
    \tt >>= 1;\r\n\t\t}\r\n\t\treturn id;\r\n\t}\r\n};\r\n"
  dependsOn:
  - structure/2d_array.cpp
  isVerificationFile: false
  path: dp/doubling.cpp
  requiredBy: []
  timestamp: '2021-03-04 00:54:11+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yuki_1013.test.cpp
  - test/yuki_1097.test.cpp
documentation_of: dp/doubling.cpp
layout: document
title: "Doubling(\u30C0\u30D6\u30EA\u30F3\u30B0)"
---

## なにこれ
各頂点からの遷移先が $1$ 点に定まっているとき，ある頂点から $K$ 回遷移したときの状態を高速に求める．

## コンストラクタ
- `doubling(v, _max_t)`：各頂点から $1$ 回遷移した先の頂点を格納した配列 `v`，遷移の最大回数 `_max_t` を元にダブリングテーブルを構築する．
- `doubling(v, v_data, _max_t, _f)`：上記の引数に加え，各頂点から $1$ 回の遷移で変化する状態を格納した配列 `v_data`，状態遷移関数 `_f` を元にダブリングテーブルを構築する．

## メンバ関数
- `get(x, init, t)`：初期頂点 `x`，初期値 `init` として `t` 回遷移したときの状態を返す．
- `get_idx(x, t)`：初期頂点 `x` から `t` 回遷移した先の頂点を返す．

## 計算量
頂点数を $N$，遷移回数を $T$ とし，遷移関数は $O(1)$ で動作するものとする．
- コンストラクタ：$O(N \log T)$
- `get(x, init, t)`：$O(\log T)$
- `get_idx(x, t)`：$O(\log T)$
