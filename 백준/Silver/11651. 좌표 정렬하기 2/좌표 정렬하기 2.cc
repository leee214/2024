#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

static bool CmpPoint(pair<int, int>& v1, pair<int, int>& v2) {
	if (get<1>(v1) == get<1>(v2)) {
		return get<0>(v1) < get<0>(v2);
	}
	return get<1>(v1) < get<1>(v2);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<pair<int, int>> point(N);
	for (int i = 0; i < N; i++) {
		cin >> point[i].first >> point[i].second;
	}
	sort(point.begin(), point.end(),CmpPoint);
	for (int i = 0; i < N; i++) {
		cout << point[i].first << " " << point[i].second << "\n";
	}
	return 0;
}