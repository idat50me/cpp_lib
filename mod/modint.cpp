#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

#include "../math/binpow.cpp"

template<int mod>
struct mint {
private:

	long long val;

public:

	mint(long long x=0) : val((mod+x%mod)%mod) {}

private:
	mint inv() const {
		long long x_ = val, xd = 1, xdd = 0,
				  y_ = mod, yd = 0, ydd = 1,
				  div;
		
		while(true) {
			if(!y_) return mint(xd);
			div = x_/y_;
			x_  -= div*y_;
			xd  -= div*yd;
			xdd -= div*ydd;

			if(!x_) return mint(yd);
			div = y_/x_;
			y_  -= div*x_;
			yd  -= div*xd;
			ydd -= div*xdd;
		}
	}

public:

	mint operator-() const {
		return mint(-val);
	}

	mint& operator+=(const mint& a) {
		(val+=a.val) %= mod;
		return *this;
	}
	mint& operator-=(const mint& a) {
		(val+=mod-a.val) %= mod;
		return *this;
	}
	mint& operator*=(const mint& a) {
		(val*=a.val) %= mod;
		return *this;
	}
	mint& operator/=(const mint& a) {
		return (*this) *= a.inv();
	}

	mint operator+(const mint& a) const {
		mint res(*this);
		return res+=a;
	}
	mint operator-(const mint& a) const {
		mint res(*this);
		return res-=a;
	}
	mint operator*(const mint& a) const {
		mint res(*this);
		return res*=a;
	}
	mint operator/(const mint& a) const {
		mint res(*this);
		return res/=a;
	}
	mint operator+(const long long& a) const {
		mint res(*this);
		return res+=mint(a);
	}
	mint operator-(const long long& a) const {
		mint res(*this);
		return res-=mint(a);
	}
	mint operator*(const long long& a) const {
		mint res(*this);
		return res*=mint(a);
	}
	mint operator/(const long long& a) const {
		mint res(*this);
		return res/=mint(a);
	}

	mint& operator++() {
		(++val) %= mod;
		return *this;
	}
	mint operator++(int) {
		mint res(*this);
		(++val) %= mod;
		return res;
	}
	mint& operator--() {
		(val+=mod-1) %= mod;
		return *this;
	}
	mint operator--(int) {
		mint res(*this);
		(val+=mod-1) %= mod;
		return res;
	}

	bool operator==(const mint& a) const {
		return val == a.val;
	}
	bool operator!=(const mint& a) const {
		return val != a.val;
	}
	bool operator<(const mint& a) const {
		return val < a.val;
	}
	bool operator>(const mint& a) const {
		return val > a.val;
	}
	bool operator<=(const mint& a) const {
		return val <= a.val;
	}
	bool operator>=(const mint& a) const {
		return val >= a.val;
	}
	bool operator==(const long long& a) const {
		return val == a;
	}
	bool operator!=(const long long& a) const {
		return val != a;
	}
	bool operator<(const long long& a) const {
		return val < a;
	}
	bool operator>(const long long& a) const {
		return val > a;
	}
	bool operator<=(const long long& a) const {
		return val <= a;
	}
	bool operator>=(const long long& a) const {
		return val >= a;
	}

	mint& operator=(const mint& a) {
		val = a.val;
		return *this;
	}
	mint& operator=(const long long& a) {
		val = (mod+a%mod)%mod;
		return *this;
	}

	friend ostream& operator<<(ostream& os, const mint& a) {
		return os << a.val;
	}
	friend istream& operator>>(istream& is, mint &a) {
		long long n;
		is >> n;
		a = mint(n);
		return is;
	}
};
