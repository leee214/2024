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
	int sum = 0,n;
	for (int i = 0; i < 13; i++) {
		char c;
		cin >> c;
		if (c != '*') {
			if (i % 2 == 0) {
				sum = sum + c - 48;
			}
			else {
				sum = sum + ((c - 48) * 3);
			}
		}
		else {
			n = i;
		}
	}
	sum = sum % 10;
	if (n % 2 == 0) {
		for (int i = 0; i < 10; i++) {
			if ((sum + i) % 10 == 0) {
				cout << i;
				break;
			}
		}
	}
	else {
		for (int i = 0; i < 10; i++) {
			if ((sum + (i * 3)) % 10 == 0) {
				cout << i;
				break;
			}
		}
	}
	return 0;
}