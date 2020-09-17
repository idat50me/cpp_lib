---
data:
  _extendedDependsOn:
  - icon: ':heavy_check_mark:'
    path: tree/segtree_RmQ.cpp
    title: "RmQ(\u533A\u9593\u6700\u5C0F\u5024)"
  _extendedRequiredBy: []
  _extendedVerifiedWith: []
  _pathExtension: cpp
  _verificationStatusIcon: ':heavy_check_mark:'
  attributes:
    '*NOT_SPECIAL_COMMENTS*': ''
    PROBLEM: https://judge.yosupo.jp/problem/staticrmq
    links:
    - https://judge.yosupo.jp/problem/staticrmq
  bundledCode: "#line 1 \"test/yosupo_staticrmq.test.cpp\"\n#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\
    \n\n#ifndef call_include\n#define call_include\n#include <bits/stdc++.h>\nusing\
    \ namespace std;\n#endif\n\n#line 1 \"tree/segtree_RmQ.cpp\"\n/*\n * @brief RmQ(\u533A\
    \u9593\u6700\u5C0F\u5024)\n * @docs ./docs/segtree_RmQ.md\n */\n\n#ifndef lib_segtree_RmQ\n\
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
    };\n\n#endif // lib_segtree_RmQ\n#line 10 \"test/yosupo_staticrmq.test.cpp\"\n\
    \nint main() {\n\tint N,Q;\n\tvector<int> v;\n\n\tcin>>N>>Q;\n\tv.resize(N);\n\
    \tfor(int i=0; i<N; i++) cin>>v[i];\n\tRmQ rmq_tree(v);\n\n\tfor(int i=0; i<Q;\
    \ i++) {\n\t\tint l,r; cin>>l>>r;\n\t\tcout<<rmq_tree.getmin(l,r)<<'\\n';\n\t\
    }\n\tcout<<flush;\n}\n"
  code: "#define PROBLEM \"https://judge.yosupo.jp/problem/staticrmq\"\n\n#ifndef\
    \ call_include\n#define call_include\n#include <bits/stdc++.h>\nusing namespace\
    \ std;\n#endif\n\n#include \"../tree/segtree_RmQ.cpp\"\n\nint main() {\n\tint\
    \ N,Q;\n\tvector<int> v;\n\n\tcin>>N>>Q;\n\tv.resize(N);\n\tfor(int i=0; i<N;\
    \ i++) cin>>v[i];\n\tRmQ rmq_tree(v);\n\n\tfor(int i=0; i<Q; i++) {\n\t\tint l,r;\
    \ cin>>l>>r;\n\t\tcout<<rmq_tree.getmin(l,r)<<'\\n';\n\t}\n\tcout<<flush;\n}\n"
  dependsOn:
  - tree/segtree_RmQ.cpp
  isVerificationFile: true
  path: test/yosupo_staticrmq.test.cpp
  requiredBy: []
  timestamp: '2020-07-26 03:21:07+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/yosupo_staticrmq.test.cpp
layout: document
redirect_from:
- /verify/test/yosupo_staticrmq.test.cpp
- /verify/test/yosupo_staticrmq.test.cpp.html
title: test/yosupo_staticrmq.test.cpp
---
