#include <iostream>
#include <cmath>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, K;
	long long res = 1;
	cin >> N >> K;
	//n팩 / (n-k)팩*k팩
	for (int i = N; i > K; i--) {
		res *= i;
	}
	for (int i = 2; i < N - K + 1; i++) {
		res /= i;
	}
	cout << res << "\n";
	return 0;
}