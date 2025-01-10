#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int gcd(int a, int b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> str(2);
	cin >> str[0] >> str[1];
	sort(str.begin(), str.end());
	int result = gcd(str[0], str[1]);
	cout << result << "\n";
	int num1 = str[0] / result;
	int num2 = str[1] / result;
	int num3 = num1 * num2;
	result = num3 * result;
	cout << result << "\n";
	return 0;
}