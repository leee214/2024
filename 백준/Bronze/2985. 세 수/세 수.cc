#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int a, b, c;
	cin >> a >> b >> c;
	if (a + b == c) {
		cout << a << "+" << b << "=" << c << "\n";
	}
	else if (a == b + c) {
		cout << a << "=" << b << "+" << c << "\n";
	}
	else if (a - b == c) {
		cout << a << "-" << b << "=" << c << "\n";
	}
	else if (a == b - c) {
		cout << a << "=" << b << "-" << c << "\n";
	}
	else if (a * b == c) {
		cout << a << "*" << b << "=" << c << "\n";
	}
	else if (a == b * c) {
		cout << a << "=" << b << "*" << c << "\n";
	}
	else if (a / b == c) {
		cout << a << "/" << b << "=" << c << "\n";
	}
	else if (a == b / c) {
		cout << a << "=" << b << "/" << c << "\n";
	}
	return 0;
}