#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T, x1, y1, x2, y2, cx, cy, r;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> x2 >> y2;
		int n;
		int sum = 0;
		cin >> n;
		for (int j = 0; j < n; j++) {
			cin >> cx >> cy >> r;
			float dis1 = sqrt(pow(cx - x1, 2) + pow(cy - y1, 2));
			float dis2 = sqrt(pow(cx - x2, 2) + pow(cy - y2, 2));
			if ((dis1 < r && dis2 > r) || (dis1 > r && dis2 < r)) {
				sum++;
			}
		}
		cout << sum << "\n";
	}
	return 0;
}
