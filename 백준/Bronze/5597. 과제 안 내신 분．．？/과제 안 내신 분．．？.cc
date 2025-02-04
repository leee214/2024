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
	vector<int> subject;
	for (int i = 0; i < 28; i++) {
		int num;
		cin >> num;
		subject.push_back(num);
	}
	sort(subject.begin(), subject.end());
	for (int i = 1; i < 31; i++) {
		if (find(subject.begin(), subject.end(), i) == subject.end()) {
			cout << i << "\n";
		}
	}
	return 0;
}