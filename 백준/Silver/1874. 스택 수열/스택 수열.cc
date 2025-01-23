#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >> n;
	vector<int> stac(n);
	for (int i = 0; i < n; i++) {
		cin >> stac[i];
	}
	if (n == 1) {
		cout << "+\n-\n";
		return 0;
	}
	int locat = 0;
	vector<int> tmp;
	vector<char> result;
	int num = 1;
	int count = 0;
	tmp.push_back(num);
	count++;
	num++;
	result.push_back('+');
	while (true) {
		if (!tmp.empty()) {
			if (tmp.back() == stac[locat]) {
				locat++;
				tmp.pop_back();
				result.push_back('-');
			}
			else {
				tmp.push_back(num);
				count++;
				result.push_back('+');
				num++;
			}
		}
		else if(count != n){
			tmp.push_back(num);
			count++;
			result.push_back('+');
			num++;
		}
		if (locat < n && !tmp.empty()) {
			if (count == n && tmp.back() != stac[locat]) {
				cout << "NO\n";
				break;
			}
		}
		if (count == n && tmp.empty()) {
			for (int j = 0; j < result.size(); j++) {
				cout << result[j] << "\n";
			}
			break;
		}
	}
	return 0;
}