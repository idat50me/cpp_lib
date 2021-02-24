#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../structure/2d_array.cpp"

template<typename T> struct sum2d {
private:
	const int H, W;
	v2d<T> table;

public:
	sum2d(v2d<T> &m) : H(m.size() + 1), W(m[0].size() + 1), table(H, W, 0) {
		for(int i = 1; i < H; i++)
			for(int j = 1; j < W; j++)
				table[i][j] = m[i - 1][j - 1] + table[i][j - 1] + table[i - 1][j] - table[i - 1][j - 1];
	}

	T get(int sx, int sy, int tx, int ty) {
		return table[tx][ty] - table[sx][ty] - table[tx][sy] + table[sx][sy];
	}
};
