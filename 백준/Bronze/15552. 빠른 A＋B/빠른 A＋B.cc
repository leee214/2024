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
	ll T;
	cin >> T;
	for (ll i = 0; i < T; i++) {
		int A, B;
		cin >> A >> B;
		cout << A + B << "\n";
	}
	return 0;
}