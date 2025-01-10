#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T, R;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string str;
		string P = "";
		cin >> R >> str;
		int str_len;
		str_len = str.size();
		for (int j = 0; j < str_len; j++) {
			for (int k = 0; k < R; k++) {
				P = P + str[j];
			}
		}
		cout << P << "\n";
	}
	return 0;
}