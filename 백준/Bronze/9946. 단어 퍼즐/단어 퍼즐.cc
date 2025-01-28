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
	int Case_num = 1;
	while (true) {
		string a, b;
		cin >> a >> b;
		if (a == "END" && b == "END") {
			break;
		}
		if (a.size() != b.size()) {
			cout << "Case " << Case_num << ": different\n";
			Case_num++;
			continue;
		}
		sort(a.begin(), a.end());
		sort(b.begin(), b.end());
		for (int i = 0; i < a.size(); i++) {
			if (a[i] != b[i]) {
				cout << "Case " << Case_num << ": different\n";
				Case_num++;
				break;
			}
			else if (i == a.size() - 1) {
				cout << "Case " << Case_num << ": same\n";
				Case_num++;
				break;
			}
		}
	}
	return 0;
}