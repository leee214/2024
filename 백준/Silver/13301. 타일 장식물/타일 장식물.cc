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
	ll N;
	ll result = 0;
	cin >> N;
	if (N == 1) {
		result = 4;
		cout << result << "\n";
		return 0;
	}
	else if (N == 2) {
		result = 6;
		cout << result << "\n";
		return 0;
	}
	vector<ll> vec(N);
	vec[0] = 1;
	vec[1] = 1;
	for (int i = 2; i < N; i++) {
		vec[i] = vec[i - 1] + vec[i - 2];
	}
	result = (vec[N - 1] * 4) + (2 * vec[N - 2]);
	cout << result << "\n";
	return 0;
}