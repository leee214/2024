#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int N,temp;
	cin >> N;
	int arr[10001] = { 0, };

	for (int i = 0; i < N; i++) {
		cin >> temp;
		arr[temp] += 1;
	}

	for (int i = 0; i < 10001; i++) {
		if (arr[i] != 0) {
			for (int x = 0; x < arr[i]; x++) {
				cout << i << "\n";
			}
		}
	}

	return 0;
}