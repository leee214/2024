#include <iostream>
#include <cmath>
using namespace std;
void hanoi(int n, int key, int x, int y,int z) {
	int a = x;
	int b = y;
	int c = z;
	if (n == 1) {
		cout << a << " " << c << "\n";
		return;
	}
	hanoi(n - 1, 1, a, c, b);
	cout << a << " " << c << "\n";
	hanoi(n - 1, 1, b, a, c);
}
int main() {
	int N;
	cin >> N;
	int res = pow(2, N) - 1;
	cout << res << "\n";
	hanoi(N, 0, 1, 2, 3);
	return 0;
}