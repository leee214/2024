#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string num, num2, res;
	int s = 0, c = 0;
    int d1, d2;
	cin >> num;
	num2 = num + "0000";
	int num_len = num.size();
	int num2_len = num2.size();
    for (int i = 0; i < num2_len; i++) {
        d1 = 0;
        d2 = 0;
        if (i < num_len) {
            d1 = num[num_len - 1 - i] - '0';
        }
        else {
            d1 = 0;
        }

        if (i < num2_len) {
            d2 = num2[num2_len - 1 - i] - '0';
        }
        else {
            d2 = 0;
        }

        s = d1 + d2 + c;
        res += (s % 2) + '0';
        c = s / 2;
    }
    if (c) res += '1';
    reverse(res.begin(), res.end());

	cout << res << "\n";
	return 0;
}