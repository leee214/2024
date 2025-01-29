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
	int N, M, K;
	cin >> N >> M >> K;
	int min = N - (M * K);
	int max = min + M - 1;
	if (min < 0) {
		min = 0;
	}
	if (max < 0) {
		max = 0;
	}
	cout << min << " " << max << "\n";
	return 0;
}