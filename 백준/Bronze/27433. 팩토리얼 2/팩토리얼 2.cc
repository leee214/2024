#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

long long Facto(int n) {
	long long result;
	if (n == 0) {
		return result = 1;
	}
	else if (n != 1) {
		result = n * Facto(n - 1);
	}
	else if (n == 1) {
		return result = 1;
	}
	return result;
}

int main() {
	long long N,ans;
	cin >> N;
	ans = Facto(N);
	cout << ans;
	return 0;
}