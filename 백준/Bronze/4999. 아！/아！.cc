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
	string a, b;
	cin >> a >> b;
	if (a.size() >= b.size()) {
		cout << "go\n";
	}
	else {
		cout << "no\n";
	}
	return 0;
}