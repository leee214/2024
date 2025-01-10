#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int H, W, N, st, ro;
		cin >> H >> W >> N;
		if (N % H == 0) {
			ro = N / H;
		}
		else {
			ro = N / H + 1;
		}

		if (N % H == 0) {
			st = H;
		}
		else {
			st = N % H;
		}

		if (ro < 10) {
			cout << st << "0" << ro << "\n";
		}
		else {
			cout << st << ro << "\n";
		}
	}
	return 0;
}