#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, T;
	cin >> T;
	int num = 1;
	for (int i = 0; i < T; i++) {
		cin >> A >> B;
		cout << "Case #" << num << ": " << A + B << "\n";
		num++;
	}
	return 0;
}