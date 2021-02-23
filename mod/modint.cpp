#pragma once

#ifndef call_include
#define call_include
#include <bits/stdc++.h>
using namespace std;
#endif

constexpr int MPRIME = 1000000007;

template<int mod> struct modint {
private:
	long long val;

public:
	modint(long long x = 0) : val((mod + x % mod) % mod) {}

private:
	modint inv() const {
		long long x_ = val, xd = 1, xdd = 0, y_ = mod, yd = 0, ydd = 1, div;

		while(true) {
			if(!y_) return modint(xd);
			div = x_ / y_;
			x_ -= div * y_;
			xd -= div * yd;
			xdd -= div * ydd;

			if(!x_) return modint(yd);
			div = y_ / x_;
			y_ -= div * x_;
			yd -= div * xd;
			ydd -= div * xdd;
		}
	}

public:
	modint operator-() const {
		return modint(-val);
	}

	modint &operator+=(const modint &a) {
		val += a.val;
		if(val >= mod) val -= mod;
		return *this;
	}
	modint &operator-=(const modint &a) {
		val -= a.val;
		if(val < 0) val += mod;
		return *this;
	}
	modint &operator*=(const modint &a) {
		(val *= a.val) %= mod;
		return *this;
	}
	modint &operator/=(const modint &a) {
		return (*this) *= a.inv();
	}
	modint &operator+=(const long long &a) {
		(val += mod + a % mod) %= mod;
		return *this;
	}
	modint &operator-=(const long long &a) {
		(val += mod - a % mod) %= mod;
		return *this;
	}
	modint &operator*=(const long long &a) {
		(val *= mod + a % mod) %= mod;
		return *this;
	}
	modint &operator/=(const long long &a) {
		return (*this) /= modint(a);
	}

	modint operator+(const modint &a) const {
		return modint(*this) += a;
	}
	modint operator-(const modint &a) const {
		return modint(*this) -= a;
	}
	modint operator*(const modint &a) const {
		return modint(*this) *= a;
	}
	modint operator/(const modint &a) const {
		return modint(*this) /= a;
	}
	modint operator+(const long long &a) const {
		return modint(*this) += a;
	}
	modint operator-(const long long &a) const {
		return modint(*this) -= a;
	}
	modint operator*(const long long &a) const {
		return modint(*this) *= a;
	}
	modint operator/(const long long &a) const {
		return modint(*this) /= modint(a);
	}

	modint &operator++() {
		(++val) %= mod;
		return *this;
	}
	modint operator++(int) {
		modint res(*this);
		(++val) %= mod;
		return res;
	}
	modint &operator--() {
		(val += mod - 1) %= mod;
		return *this;
	}
	modint operator--(int) {
		modint res(*this);
		(val += mod - 1) %= mod;
		return res;
	}

	bool operator==(const modint &a) const {
		return val == a.val;
	}
	bool operator!=(const modint &a) const {
		return val != a.val;
	}
	bool operator<(const modint &a) const {
		return val < a.val;
	}
	bool operator>(const modint &a) const {
		return val > a.val;
	}
	bool operator<=(const modint &a) const {
		return val <= a.val;
	}
	bool operator>=(const modint &a) const {
		return val >= a.val;
	}
	bool operator==(const long long &a) const {
		return val == a;
	}
	bool operator!=(const long long &a) const {
		return val != a;
	}
	bool operator<(const long long &a) const {
		return val < a;
	}
	bool operator>(const long long &a) const {
		return val > a;
	}
	bool operator<=(const long long &a) const {
		return val <= a;
	}
	bool operator>=(const long long &a) const {
		return val >= a;
	}

	modint &operator=(const modint &a) {
		val = a.val;
		return *this;
	}
	modint &operator=(const long long &a) {
		val = (mod + a % mod) % mod;
		return *this;
	}

	friend ostream &operator<<(ostream &os, const modint &a) {
		return os << a.val;
	}
	friend istream &operator>>(istream &is, modint &a) {
		long long n;
		is >> n;
		a = modint(n);
		return is;
	}
};
using mint = modint<MPRIME>;
