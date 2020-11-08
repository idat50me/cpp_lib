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
    PROBLEM: https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A
    links:
    - https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A
  bundledCode: "#line 1 \"test/aoj_DSL_2_A.test.cpp\"\n#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A\"\
    \r\n\r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#line 1 \"tree/segtree_RmQ.cpp\"\n/*\r\
    \n * @brief RmQ(\u533A\u9593\u6700\u5C0F\u5024)\r\n * @docs docs/segtree_RmQ.md\r\
    \n */\r\n\r\n#ifndef lib_segtree_RmQ\r\n#define lib_segtree_RmQ\r\n\r\n#ifndef\
    \ call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\nusing namespace\
    \ std;\r\n#endif\r\n\r\ntemplate<typename T>\r\nstruct RmQ {\r\nprivate:\r\n\t\
    int n=1;\r\n\tvector<T> node;\r\n\tT inf=numeric_limits<T>::max();\r\n\r\npublic:\r\
    \n\tRmQ(vector<T> v) {\r\n\t\twhile(n<v.size()) n*=2;\r\n\t\tnode.resize(2*n-1,inf);\r\
    \n\t\tfor(int i=0; i<v.size(); i++) node[n-1+i]=v[i];\r\n\t\tfor(int i=n-2; i>=0;\
    \ i--) node[i]=min(node[2*i+1],node[2*i+2]);\r\n\t}\r\n\r\n\tvoid update(int idx,\
    \ T val) {\r\n\t\tidx+=n-1;\r\n\t\tnode[idx]=val;\r\n\r\n\t\twhile(idx>0) {\r\n\
    \t\t\tidx=(idx-1)/2;\r\n\t\t\tnode[idx]=min(node[2*idx+1],node[2*idx+2]);\r\n\t\
    \t}\r\n\t}\r\n\r\n\tT getmin(int L, int R) { return getmin__(L, R, 0, 0, n); }\r\
    \nprivate:\r\n\tT getmin__(int L, int R, int now, int l, int r) {\r\n\t\tif(r<=L\
    \ || R<=l) return inf;\r\n\t\tif(L<=l && r<=R) return node[now];\r\n\r\n\t\tT\
    \ vl=getmin__(L,R,2*now+1,l,(l+r)/2);\r\n\t\tT vr=getmin__(L,R,2*now+2,(l+r)/2,r);\r\
    \n\t\treturn min(vl,vr);\r\n\t}\r\npublic:\r\n};\r\n\r\n#endif // lib_segtree_RmQ\r\
    \n#line 10 \"test/aoj_DSL_2_A.test.cpp\"\n\r\nint main() {\r\n\tint N,Q; cin>>N>>Q;\r\
    \n\tvector<int> v(N,(1<<31)-1);\r\n\tRmQ rmq_tree(v);\r\n\r\n\tfor(int i=0; i<Q;\
    \ i++) {\r\n\t\tint com,x,y; cin>>com>>x>>y;\r\n\r\n\t\tif(com==0) rmq_tree.update(x,y);\r\
    \n\t\telse cout<<rmq_tree.getmin(x,y+1)<<'\\n';\r\n\t}\r\n\tcout<<flush;\r\n}\r\
    \n"
  code: "#define PROBLEM \"https://onlinejudge.u-aizu.ac.jp/problems/DSL_2_A\"\r\n\
    \r\n#ifndef call_include\r\n#define call_include\r\n#include <bits/stdc++.h>\r\
    \nusing namespace std;\r\n#endif\r\n\r\n#include \"tree/segtree_RmQ.cpp\"\r\n\r\
    \nint main() {\r\n\tint N,Q; cin>>N>>Q;\r\n\tvector<int> v(N,(1<<31)-1);\r\n\t\
    RmQ rmq_tree(v);\r\n\r\n\tfor(int i=0; i<Q; i++) {\r\n\t\tint com,x,y; cin>>com>>x>>y;\r\
    \n\r\n\t\tif(com==0) rmq_tree.update(x,y);\r\n\t\telse cout<<rmq_tree.getmin(x,y+1)<<'\\\
    n';\r\n\t}\r\n\tcout<<flush;\r\n}\r\n"
  dependsOn:
  - tree/segtree_RmQ.cpp
  isVerificationFile: true
  path: test/aoj_DSL_2_A.test.cpp
  requiredBy: []
  timestamp: '2020-11-09 00:51:53+09:00'
  verificationStatus: TEST_ACCEPTED
  verifiedWith: []
documentation_of: test/aoj_DSL_2_A.test.cpp
layout: document
redirect_from:
- /verify/test/aoj_DSL_2_A.test.cpp
- /verify/test/aoj_DSL_2_A.test.cpp.html
title: test/aoj_DSL_2_A.test.cpp
---
