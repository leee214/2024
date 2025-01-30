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
	while (true) {
		int a, b;
		cin >> a >> b;
		if (a == 0 && b == 0) {
			break;
		}
		if (a > b) {
			cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}
	}
	return 0;
}