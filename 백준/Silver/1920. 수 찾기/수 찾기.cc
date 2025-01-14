#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, M;
	cin >> N;
	vector<int> numbers(N);
	for (int i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	cin >> M;
	vector<int> numbers2(M);
	for (int i = 0; i < M; i++) {
		cin >> numbers2[i];
	}
	sort(numbers.begin(), numbers.end());
	for (int i = 0; i < M; i++) {
		if (binary_search(numbers.begin(), numbers.end(), numbers2[i])) {
			cout << "1\n";
		}
		else {
			cout << "0\n";
		}
	}
	return 0;
}