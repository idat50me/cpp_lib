#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

struct Vertex{
	vector<int> nxt;
	vector<int> cost;
	bool rch=false;
};
