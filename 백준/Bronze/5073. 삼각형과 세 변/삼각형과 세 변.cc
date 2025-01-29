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
	while (1) {
		int a, b, c;
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0) {
			break;
		}
		else {
			int sum = a + b + c;
			if (max(a, max(b, c)) >= sum - max(a, max(b, c))) {
				cout << "Invalid\n";
			}
			else if (a == b && b == c) {
				cout << "Equilateral\n";
			}
			else if (a == b || b == c || c == a) {
				cout << "Isosceles\n";
			}
			else {
				cout << "Scalene\n";
			}
		}
	}
	return 0;
}