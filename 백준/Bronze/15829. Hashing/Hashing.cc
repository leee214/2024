#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int L;
	long long res = 0;
	long long mul = 1;
	cin >> L;
	string str;
	cin >> str;
	int fl = 0;
	for (int i = 0; i < L; i++) {
		mul = 1;
		for (int j = 0; j < fl; j++) {
			mul *= 31;
			mul %= 1234567891;
		}
		res += ((str[i] - 96) * mul) % 1234567891;
		res %= 1234567891;
		fl++;
	}
	cout << res << "\n";
	return 0;
}