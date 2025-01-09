#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int n;
		string lang;
		cin >> n >> lang;
		lang.erase(n - 1, 1);
		cout << lang << "\n";
	}
	return 0;
}