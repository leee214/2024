#include <iostream>

using namespace std;

int arr[3] = { 0, };

int main() {
	int N;
	int i = 0;
	cin >> N;
	arr[0] = 1;
	arr[1] = 2;
	if (N < 3) {
		cout << arr[N - 1] << "\n";
		return 0;
	}
	while (true) {
		i++;
		if (i == 1 || i == 2) {
			continue;
		}
		arr[2] = arr[1] + arr[0];
		arr[0] = arr[1] % 15746;
		arr[1] = arr[2] % 15746;
		if (i == N) {
			break;
		}
	}
	cout << arr[2] % 15746 << "\n";
	return 0;
}