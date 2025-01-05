#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Fibo(int n) {
	if (n == 0) {
		return 0;
	}
	else if (n == 1) {
		return 1;
	}
	else if (n == 2) {
		return 1;
	}
	else if (n > 2) {
		return Fibo(n - 1) + Fibo(n - 2);
	}
}

int main() {
	int n, ans;
	cin >> n;
	ans = Fibo(n);
	cout << ans;
	return 0;
}