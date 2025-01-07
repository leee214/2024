#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N;
	int sum = 0;
	cin >> N;
	vector<int> times(N);
	for (int i = 0; i < N; i++) {
		cin >> times[i];
	}
	sort(times.begin(), times.end());
	vector<int> sum_times(N);
	sum_times[0] = times[0];
	sum += times[0];
	for (int i = 1; i < N; i++) {
		sum_times[i] = sum_times[i - 1] + times[i];
		sum += sum_times[i];
	}
	cout << sum << "\n";
	return 0;
}