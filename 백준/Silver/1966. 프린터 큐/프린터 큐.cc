#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		int N, M;
		cin >> N >> M;
		deque<int> imp;
		for (int j = 0; j < N; j++) {
			int num;
			cin >> num;
			imp.push_back(num);
		}
		int count = 0;
		while (!imp.empty()) {
			auto max_num = max_element(imp.begin(), imp.end());
			int max = distance(imp.begin(), max_num);
			if (max == 0) {
				if (M == 0) {
					cout << count + 1<< "\n";
					break;
				}
				else {
					imp.pop_front();
					count++;
					M--;
				}
			}
			else {
				if (M == 0) {
					imp.push_back(imp.front());
					imp.pop_front();
					M = imp.size() - 1;
				}
				else {
					imp.push_back(imp.front());
					imp.pop_front();
					M--;
				}
			}
		}
	}
	return 0;
}