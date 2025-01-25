#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str;
	getline(cin, str);
	int i = 0;
	int right = 0, left = 0, flag = 0;
	while (true) {
		if (flag == 0) {
			if (str[i] == '@') {
				right++;
				i++;
			}
			else if (str[i] == '=') {
				i++;
			}
			else if (str[i] == '(') {
				flag = 1;
				i++;
			}
			else {
				i++;
			}
		}
		else if (flag == 1) {
			if (str[i] == '@') {
				left++;
				i++;
			}
			else if (str[i] == '=') {
				i++;
			}
			else{
				i++;
			}
		}
		if (i == str.size()) {
			break;
		}
	}
	cout << right << " " << left << "\n";
	return 0;
}