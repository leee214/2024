#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T, x1, y1, r1, x2, y2, r2;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		float dis = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
		if (dis == 0 && r1 == r2) {
			cout << -1 << "\n";
		}
		else if (dis > r1 + r2 || dis < abs(r1 - r2)) {
			cout << 0 << "\n";
		}
		else if (dis == r1 + r2 || max(r1,r2) == dis + min(r1,r2)) {
			cout << 1 << "\n";
		}
		else {
			cout << 2 << "\n";
		}
	}
	return 0;
}