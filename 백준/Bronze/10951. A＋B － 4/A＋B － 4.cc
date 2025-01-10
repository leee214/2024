#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	while (true) {
		int A, B;
		if (cin >> A >> B) {
			cout << A + B << "\n";
		}
		else {
			break;
		}
	}
	return 0;
}