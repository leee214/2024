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
	int M, N;
	cin >> M >> N;
	vector<int> num(N + 1);
	if (N == 1) {
		return 0;
	}
	num[0] = 0;
	num[1] = 0;
	for (int i = 2; i < N + 1; i++) {
		num[i] = i;
	}
	for (int i = 2; i < N + 1; i++) {
		int tmp = 2;
		if (num[i] != 0) {
			if (i >= M) {
				cout << num[i] << "\n";
			}
			while (true) {
				if (tmp*i > N) {
					break;
				}
				num[i * tmp] = 0;
				tmp++;
			}
			tmp = 2;
		}
	}
	return 0;
}