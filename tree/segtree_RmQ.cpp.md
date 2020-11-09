---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/aoj_DSL_2_A.test.cpp
    title: test/aoj_DSL_2_A.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/yosupo_staticrmq.test.cpp
    title: test/yosupo_staticrmq.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    links: []
  bundledCode: "#line 1 \"tree/segtree_RmQ.cpp\"\n\n\n\r\n#ifndef call_include\r\n\
    #define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n#endif\r\
    \n\r\ntemplate<typename T>\r\nstruct RmQ {\r\nprivate:\r\n\tint n=1;\r\n\tvector<T>\
    \ node;\r\n\tT inf=numeric_limits<T>::max();\r\n\r\npublic:\r\n\tRmQ(vector<T>\
    \ v) {\r\n\t\twhile(n<v.size()) n*=2;\r\n\t\tnode.resize(2*n-1,inf);\r\n\t\tfor(int\
    \ i=0; i<v.size(); i++) node[n-1+i]=v[i];\r\n\t\tfor(int i=n-2; i>=0; i--) node[i]=min(node[2*i+1],node[2*i+2]);\r\
    \n\t}\r\n\r\n\tvoid update(int idx, T val) {\r\n\t\tidx+=n-1;\r\n\t\tnode[idx]=val;\r\
    \n\r\n\t\twhile(idx>0) {\r\n\t\t\tidx=(idx-1)/2;\r\n\t\t\tnode[idx]=min(node[2*idx+1],node[2*idx+2]);\r\
    \n\t\t}\r\n\t}\r\n\r\n\tT getmin(int L, int R) { return getmin__(L, R, 0, 0, n);\
    \ }\r\nprivate:\r\n\tT getmin__(int L, int R, int now, int l, int r) {\r\n\t\t\
    if(r<=L || R<=l) return inf;\r\n\t\tif(L<=l && r<=R) return node[now];\r\n\r\n\
    \t\tT vl=getmin__(L,R,2*now+1,l,(l+r)/2);\r\n\t\tT vr=getmin__(L,R,2*now+2,(l+r)/2,r);\r\
    \n\t\treturn min(vl,vr);\r\n\t}\r\npublic:\r\n};\r\n\r\n\n"
  code: "#ifndef lib_segtree_RmQ\r\n#define lib_segtree_RmQ\r\n\r\n#ifndef call_include\r\
    \n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace std;\r\n\
    #endif\r\n\r\ntemplate<typename T>\r\nstruct RmQ {\r\nprivate:\r\n\tint n=1;\r\
    \n\tvector<T> node;\r\n\tT inf=numeric_limits<T>::max();\r\n\r\npublic:\r\n\t\
    RmQ(vector<T> v) {\r\n\t\twhile(n<v.size()) n*=2;\r\n\t\tnode.resize(2*n-1,inf);\r\
    \n\t\tfor(int i=0; i<v.size(); i++) node[n-1+i]=v[i];\r\n\t\tfor(int i=n-2; i>=0;\
    \ i--) node[i]=min(node[2*i+1],node[2*i+2]);\r\n\t}\r\n\r\n\tvoid update(int idx,\
    \ T val) {\r\n\t\tidx+=n-1;\r\n\t\tnode[idx]=val;\r\n\r\n\t\twhile(idx>0) {\r\n\
    \t\t\tidx=(idx-1)/2;\r\n\t\t\tnode[idx]=min(node[2*idx+1],node[2*idx+2]);\r\n\t\
    \t}\r\n\t}\r\n\r\n\tT getmin(int L, int R) { return getmin__(L, R, 0, 0, n); }\r\
    \nprivate:\r\n\tT getmin__(int L, int R, int now, int l, int r) {\r\n\t\tif(r<=L\
    \ || R<=l) return inf;\r\n\t\tif(L<=l && r<=R) return node[now];\r\n\r\n\t\tT\
    \ vl=getmin__(L,R,2*now+1,l,(l+r)/2);\r\n\t\tT vr=getmin__(L,R,2*now+2,(l+r)/2,r);\r\
    \n\t\treturn min(vl,vr);\r\n\t}\r\npublic:\r\n};\r\n\r\n#endif // lib_segtree_RmQ\r\
    \n"
  dependsOn: []
  isVerificationFile: false
  path: tree/segtree_RmQ.cpp
  requiredBy: []
  timestamp: '2020-11-09 16:10:15+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo_staticrmq.test.cpp
  - test/aoj_DSL_2_A.test.cpp
documentation_of: tree/segtree_RmQ.cpp
layout: document
title: "RmQ(\u533A\u9593\u6700\u5C0F\u5024)"
---

## なにこれ
$n$ 個の要素を持つ配列の区間最小値を求めるセグメント木．

## 制約
- $n \leq 10^8$ 程度

## コンストラクタ
- `RmQ(v)`：計算量 $O(n)$
	- `v`：初期要素を格納している配列．

## メンバ関数
- `update(idx, val)`：計算量 $O(\log n)$  
	要素を更新する．
	- `idx`：更新する要素の index
	- `val`：更新後の要素の値．

- `getmin(L, R)`：計算量 $O(\log n)$  
	区間最小値を求める．
	- `L,R`：`[L,R)`を探索区間とする．
