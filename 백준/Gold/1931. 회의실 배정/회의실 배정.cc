#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	int N;
	int max_c = 0;
	cin >> N;
	vector<pair<int, int>> times(N);
	for (int i = 0; i < N; i++) {
		cin >> times[i].first >> times[i].second;
	}
	sort(times.begin(), times.end(), [](pair<int, int> a,pair<int, int> b) {
		if (a.second == b.second) {
			return a.first < b.first;
		}
		return a.second < b.second;
	});
	int tmp_time = 0;
	for (size_t i = 0; i < times.size(); ++i) {
		if (times[i].first >= tmp_time) {
			max_c++;
			tmp_time = times[i].second;
		}
	}
	cout << max_c << "\n";
	return 0;
}