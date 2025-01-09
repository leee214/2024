#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	while (true) {
		int S;
		int mul, tmp;
		cin >> S;
		if (S == 0) {
			break;
		}
		else {
			cout << S << " ";
		}
		tmp = S;
		mul = 1;
		int flag = S;
		while (true) {
			if (tmp < 10) {
				cout << "\n";
				break;
			}
			else if (flag < 10) {
				cout << "\n";
				mul = 1;
				break;
			}

			if (S == 0) {
				cout << mul << " ";
				if (mul == 0) {
					mul = 1;
					cout << "\n";
					break;
				}
				S = mul;
				mul = 1;
				flag = S;
				continue;
			}
			else {
				mul *= S % 10;
				S /= 10;
			}
		}
	}
	return 0;
}