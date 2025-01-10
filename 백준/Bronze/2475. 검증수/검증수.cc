#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<long long> str(5);
	for (int i = 0; i < 5; i++) {
		cin >> str[i];
		str[i] = pow(str[i], 2);
		str[i] %= 10;
	}
	long long sum = 0;
	for (int i = 0; i < 5; i++) {
		sum += str[i];
		sum = sum % 10;
	}
	cout << sum << "\n";
	return 0;
}