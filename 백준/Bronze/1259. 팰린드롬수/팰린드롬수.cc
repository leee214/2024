#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	while (true) {
		string str;
		cin >> str;
		int str_len;
		str_len = str.size();
		if (str_len == 1 && str[0] == '0') {
			return 0;
		}
		if (str_len == 1 && (str[0] > 48) && (str[0] < 58)) {
			cout << "yes\n";
			continue;
		}
		int times;
		if (str_len % 2 == 0) {
			times = (str_len / 2);
		}
		else {
			times = (str_len / 2) + 1;
		}
		for (int i = 0; i < times; i++) {
			if (str[i] != str[str_len - 1 - i]) {
				cout << "no\n";
				break;
			}

			if (i == (str_len / 2) - 1) {
				cout << "yes\n";
			}
		}
	}
	return 0;
}