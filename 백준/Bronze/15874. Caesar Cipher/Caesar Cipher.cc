#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int s, k;
	cin >> s >> k;
	s = s % 26;
	cin.ignore();
	string str, co_str;
	getline(cin, str);
	for (int i = 0; i < k; i++) {
		if (str[i] == ' ') {
			continue;
		}
		else if (str[i] == '.') {
			str[i] = '.';
			continue;
		}
		else if (str[i] == ',') {
			str[i] = ',';
			continue;
		}

		if (isupper(str[i])) {
			str[i] = str[i] + s;
			if (str[i] > 90) {
				str[i] = str[i] - 26;
			}
		}
		else if (islower(str[i])) {
			if (str[i] + s > 122) {
				str[i] = str[i] - 26 + s;
			}
			else {
				str[i] = str[i] + s;
			}
		}
	}
	cout << str << "\n";
	return 0;
}