#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N, M;
	int count = 0;
	cin >> N >> M;
	vector<string> names(N);
	for (int i = 0; i < N; i++) {
		cin >> names[i];
	}
	sort(names.begin(), names.end());
	vector<string> names2(M);
	for (int i = 0; i < M; i++) {
		cin >> names2[i];
	}
	for (int i = 0; i < M; i++) {
		if (binary_search(names.begin(), names.end(), names2[i])) {
			count++;
		}
	}
	cout << count << "\n";
	return 0;
}