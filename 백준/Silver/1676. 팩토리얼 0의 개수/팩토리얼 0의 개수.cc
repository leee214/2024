#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	int count = 0;
	for (int i = 1; i < N + 1; i++) {
		if (i % 125 == 0) {
			count += 3;
		}
		else if (i % 25 == 0) {
			count += 2;
		}
		else if (i % 5 == 0) {
			count++;
		}
	}
	cout << count << "\n";
	return 0;
}