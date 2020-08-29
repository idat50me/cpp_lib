/*
 * @brief ModInt
 * @!docs ./docs/modint.md
 */

#ifndef lib_mint
#define lib_mint

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

	mint pow(long long ex) const {
		return mint(binpow(val, ex, mod));
	}
	mint inv() const {
		return pow(mod-2);
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

	mint& operator=(const mint& a) {
		val = a.val;
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

#endif // lib_mint
