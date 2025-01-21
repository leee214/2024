#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	vector<int> check_perentheses;
	int T;
	cin >> T;
	cin.ignore();
	for(int j=0;j<T;j++) {
		string str;
		getline(cin, str);
		int i = 0;
		int ssum = 0;
		for(int k=0;k<str.size();k++) {
			if (str[k] == '(') {
				check_perentheses.push_back(1);
				ssum++;
			}
			else if (str[k] == ')') {
				check_perentheses.push_back(2);
				ssum++;
			}
			else if (str[k] == '[') {
				check_perentheses.push_back(3);
				ssum++;
			}
			else if (str[k] == ']') {
				check_perentheses.push_back(4);
				ssum++;
			}
		}
		i = 0;
		if (ssum == 0) {
			cout << "YES\n";
			check_perentheses.clear();
			continue;
		}
		while (true) {
			int sum = 0;
			if (check_perentheses.empty()) {
				cout << "YES\n";
				check_perentheses.clear();
				break;
			}
			if (check_perentheses.size() >= 2 && check_perentheses[i] == 1 && check_perentheses[i + 1] == 2) {
				sum++;
				check_perentheses.erase(check_perentheses.begin() + i);
				check_perentheses.erase(check_perentheses.begin() + i);
				i = 0;
				continue;
			}
			if (check_perentheses.size() >= 2 && check_perentheses[i] == 3 && check_perentheses[i + 1] == 4) {
				sum++;
				check_perentheses.erase(check_perentheses.begin() + i);
				check_perentheses.erase(check_perentheses.begin() + i);
				i = 0;
				continue;
			}

			if (check_perentheses.size() == 1) {
				cout << "NO\n";
				check_perentheses.clear();
				break;
			}
			if (i == check_perentheses.size() - 2 && sum == 0) {
				cout << "NO\n";
				check_perentheses.clear();
				break;
			}
			sum = 0;
			i++;
		}
	}
	return 0;
}