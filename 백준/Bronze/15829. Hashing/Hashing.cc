#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int L;
	long long res = 0;
	cin >> L;
	string str;
	cin >> str;
	int fl = 0;
	for (int i = 0; i < L; i++) {
		res += (str[i] - 96) * pow(31, fl);
		fl++;
	}
	cout << res << "\n";
	return 0;
}