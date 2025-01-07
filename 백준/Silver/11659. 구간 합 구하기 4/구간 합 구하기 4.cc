#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N >> M;
	vector<int> vec(N);
	vector<long long> sum_vec(N);
	for (int i = 0; i < N; i++) {
		cin >> vec[i];
	}
	sum_vec[0] = vec[0];
	for (int i = 1; i < N; i++) {
		sum_vec[i] = sum_vec[i - 1] + vec[i];
	}
	int a, b;
	for (int i = 0; i < M; i++) {
		cin >> a >> b;
		if (a == 1) {
			cout << sum_vec[b - 1] << "\n";
			continue;
		}
		cout << sum_vec[b - 1] - sum_vec[a - 2] << "\n";

	}
	return 0;
}