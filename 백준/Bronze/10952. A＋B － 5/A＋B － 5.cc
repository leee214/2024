#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	while (true) {
		int A, B;
		cin >> A >> B;
		if (A == 0 && B == 0) {
			break;
		}
		else {
			cout << A + B << "\n";
		}
	}
	return 0;
}