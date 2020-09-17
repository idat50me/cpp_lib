---
data:
  _extendedDependsOn: []
  _extendedRequiredBy: []
  _extendedVerifiedWith:
  - icon: ':heavy_check_mark:'
    path: test/yosupo_staticrmq.test.cpp
    title: test/yosupo_staticrmq.test.cpp
  - icon: ':heavy_check_mark:'
    path: test/aoj_DSL_2_A.test.cpp
    title: test/aoj_DSL_2_A.test.cpp
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    _deprecated_at_docs: ./docs/segtree_RmQ.md
    document_title: "RmQ(\u533A\u9593\u6700\u5C0F\u5024)"
    links: []
  bundledCode: "#line 1 \"tree/segtree_RmQ.cpp\"\n/*\n * @brief RmQ(\u533A\u9593\u6700\
    \u5C0F\u5024)\n * @docs ./docs/segtree_RmQ.md\n */\n\n#ifndef lib_segtree_RmQ\n\
    #define lib_segtree_RmQ\n\n#ifndef call_include\n#define call_include\n#include\
    \ <bits/stdc++.h>\nusing namespace std;\n#endif\n\ntemplate<typename T>\nstruct\
    \ RmQ {\nprivate:\n\tint n=1;\n\tvector<T> node;\n\tT inf=numeric_limits<T>::max();\n\
    \npublic:\n\tRmQ(vector<T> v) {\n\t\twhile(n<v.size()) n*=2;\n\t\tnode.resize(2*n-1,inf);\n\
    \t\tfor(int i=0; i<v.size(); i++) node[n-1+i]=v[i];\n\t\tfor(int i=n-2; i>=0;\
    \ i--) node[i]=min(node[2*i+1],node[2*i+2]);\n\t}\n\n\tvoid update(int idx, T\
    \ val) {\n\t\tidx+=n-1;\n\t\tnode[idx]=val;\n\n\t\twhile(idx>0) {\n\t\t\tidx=(idx-1)/2;\n\
    \t\t\tnode[idx]=min(node[2*idx+1],node[2*idx+2]);\n\t\t}\n\t}\n\n\tT getmin(int\
    \ L, int R) { return getmin__(L, R, 0, 0, n); }\nprivate:\n\tT getmin__(int L,\
    \ int R, int now, int l, int r) {\n\t\tif(r<=L || R<=l) return inf;\n\t\tif(L<=l\
    \ && r<=R) return node[now];\n\n\t\tT vl=getmin__(L,R,2*now+1,l,(l+r)/2);\n\t\t\
    T vr=getmin__(L,R,2*now+2,(l+r)/2,r);\n\t\treturn min(vl,vr);\n\t}\npublic:\n\
    };\n\n#endif // lib_segtree_RmQ\n"
  code: "/*\n * @brief RmQ(\u533A\u9593\u6700\u5C0F\u5024)\n * @docs ./docs/segtree_RmQ.md\n\
    \ */\n\n#ifndef lib_segtree_RmQ\n#define lib_segtree_RmQ\n\n#ifndef call_include\n\
    #define call_include\n#include <bits/stdc++.h>\nusing namespace std;\n#endif\n\
    \ntemplate<typename T>\nstruct RmQ {\nprivate:\n\tint n=1;\n\tvector<T> node;\n\
    \tT inf=numeric_limits<T>::max();\n\npublic:\n\tRmQ(vector<T> v) {\n\t\twhile(n<v.size())\
    \ n*=2;\n\t\tnode.resize(2*n-1,inf);\n\t\tfor(int i=0; i<v.size(); i++) node[n-1+i]=v[i];\n\
    \t\tfor(int i=n-2; i>=0; i--) node[i]=min(node[2*i+1],node[2*i+2]);\n\t}\n\n\t\
    void update(int idx, T val) {\n\t\tidx+=n-1;\n\t\tnode[idx]=val;\n\n\t\twhile(idx>0)\
    \ {\n\t\t\tidx=(idx-1)/2;\n\t\t\tnode[idx]=min(node[2*idx+1],node[2*idx+2]);\n\
    \t\t}\n\t}\n\n\tT getmin(int L, int R) { return getmin__(L, R, 0, 0, n); }\nprivate:\n\
    \tT getmin__(int L, int R, int now, int l, int r) {\n\t\tif(r<=L || R<=l) return\
    \ inf;\n\t\tif(L<=l && r<=R) return node[now];\n\n\t\tT vl=getmin__(L,R,2*now+1,l,(l+r)/2);\n\
    \t\tT vr=getmin__(L,R,2*now+2,(l+r)/2,r);\n\t\treturn min(vl,vr);\n\t}\npublic:\n\
    };\n\n#endif // lib_segtree_RmQ\n"
  dependsOn: []
  isVerificationFile: false
  path: tree/segtree_RmQ.cpp
  requiredBy: []
  timestamp: '2020-07-26 03:21:07+09:00'
  verificationStatus: LIBRARY_ALL_AC
  verifiedWith:
  - test/yosupo_staticrmq.test.cpp
  - test/aoj_DSL_2_A.test.cpp
documentation_of: tree/segtree_RmQ.cpp
layout: document
redirect_from:
- /library/tree/segtree_RmQ.cpp
- /library/tree/segtree_RmQ.cpp.html
title: "RmQ(\u533A\u9593\u6700\u5C0F\u5024)"
---
