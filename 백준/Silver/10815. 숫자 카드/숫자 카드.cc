#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N,M,i,j;
	cin >> N;
	vector<int> numbers(N);
	for (i = 0; i < N; i++) {
		cin >> numbers[i];
	}
	sort(numbers.begin(), numbers.end());
	cin >> M;
	vector<int> numbers2(M);
	for (j = 0; j < M; j++) {
		cin >> numbers2[j];
	}
	for (j = 0; j < M; j++) {
		if (binary_search(numbers.begin(), numbers.end(), numbers2[j])) {
			numbers2[j] = 1;
		}
		else {
			numbers2[j] = 0;
		}
	}
	for (j = 0; j < M; j++) {
		cout << numbers2[j] << " ";
	}
	cout << "\n";
	return 0;
}