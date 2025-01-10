#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, sum = 0;
	cin >> N;
	string str;
	cin >> str;
	for (int i = 0; i < N; i++) {
		sum += str[i] - 48;
	}
	cout << sum << "\n";
	return 0;
}