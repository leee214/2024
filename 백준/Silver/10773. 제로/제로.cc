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
	int K;
	cin >> K;
	deque<int> num;
	for (int i = 0; i < K; i++) {
		int tmp;
		cin >> tmp;
		if (tmp != 0) {
			num.push_back(tmp);
		}
		else {
			num.pop_back();
		}
	}
	long long sum = 0;
	while (num.size() != 0) {
		sum += num.front();
		num.pop_front();
	}
	cout << sum << "\n";
	return 0;
}