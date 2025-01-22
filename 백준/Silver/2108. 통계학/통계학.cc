#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>

using namespace std;

struct numbers
{
	int number;
	int size;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<int> num(N);
	long long sum = 0;
	for (int i = 0; i < N; i++) {
		cin >> num[i];
		sum += num[i];
	}
	sort(num.begin(), num.end());
	int result1 = round((float)sum / N);
	int result2 = num[N / 2];
	vector<numbers> count_num;
	int count = 1;
	if (N == 1) {
		count_num.push_back({ num[0], 1 });
	}
	else {
		for (int i = 1; i < N; i++) {
			if (num[i] == num[i - 1]) {
				if (i == N - 1) {
					count++;
					count_num.push_back({ num[i], count });
					continue;
				}
				else {
					count++;
					continue;
				}
			}
			else {
				if (i == N - 1) {
					count_num.push_back({ num[i - 1], count });
					count_num.push_back({ num[i], 1 });
					continue;
				}
				count_num.push_back({ num[i - 1], count });
				count = 1;
				continue;
			}
		}
	}
	if (N > 1) {
		sort(count_num.begin(), count_num.end(), [](const numbers& a, const numbers& b) {
			if (a.size == b.size) {
				return a.number < b.number;
			}
			return a.size > b.size;
			});
	}
	int result3;
	if (N == 1) {
		result3 = count_num[0].number;
	}
	else {
		if (count_num[0].size == count_num[1].size) {
			result3 = count_num[1].number;
		}
		else {
			result3 = count_num[0].number;
		}
	}
	int result4 = num[N - 1] - num[0];
	cout << result1 << "\n";
	cout << result2 << "\n";
	cout << result3 << "\n";
	cout << result4 << "\n";
	return 0;
}