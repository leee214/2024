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
	int x, y;
	cin >> x >> y;
	int sum = 0;
	if (x > 1) {
		for (int i = 1; i < x; i++) {
			if (i == 1 || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12) {
				sum += 31;
			}
			else if (i == 2) {
				sum += 28;
			}
			else {
				sum += 30;
			}
		}
	}
	y += sum;
	int tmp = y % 7;
	string str;
	switch (tmp) {
	case 0:
		str = "SUN";
		break;
	case 1:
		str = "MON";
		break;
	case 2:
		str = "TUE";
		break;
	case 3:
		str = "WED";
		break;
	case 4:
		str = "THU";
		break;
	case 5:
		str = "FRI";
		break;
	case 6:
		str = "SAT";
		break;
	default:
		break;
	}
	cout << str << "\n";
	return 0;
}