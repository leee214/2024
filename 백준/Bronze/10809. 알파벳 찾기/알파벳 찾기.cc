#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int alpha[26] = { 0, };
	string s;
	cin >> s;
	int i = 0;
	int s_len;
	s_len = s.size();
	while (true) {
		if (i >= s_len) {
			break;
		}
		int tmp;
		tmp = s[i] - 97;
		if (alpha[tmp] == 0) {
			if (i == 0) {
				alpha[tmp] = -3;
			}
			else {
				alpha[tmp] = i;
			}
		}
		i++;
	}
	for (int i = 0; i < 26; i++) {
		if (alpha[i] == 0) {
			alpha[i] = -1;
		}
		else if (alpha[i] == -3) {
			alpha[i] = 0;
		}
		cout << alpha[i] << " ";
	}
	cout << "\n";
	return 0;
}