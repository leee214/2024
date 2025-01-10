#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, X;
	cin >> N >> X;
	vector<int> str(N);
	for (int i = 0; i < N; i++) {
		cin >> str[i];
	}
	for (int i = 0; i < N; i++) {
		if (str[i] < X) {
			cout << str[i] << " ";
		}
	}
	cout << "\n";
	return 0;
}