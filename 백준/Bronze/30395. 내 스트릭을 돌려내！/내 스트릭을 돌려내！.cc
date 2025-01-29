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
	int N;
	cin >> N;
	vector<int> ps(N);
	int streak = 0, max = 0;
	for (int i = 0; i < N; i++) {
		cin >> ps[i];
		if (ps[i] == 0) {
			if (ps[i - 1] == 0) {
				if (streak > max) {
					max = streak;
				}
				streak = 0;
			}
		}
		else {
			streak++;
		}
		if (i == N - 1) {
			if (streak > max) {
				max = streak;
			}
		}
	}
	cout << max << "\n";
	return 0;
}