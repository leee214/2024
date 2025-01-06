#include <iostream>

using namespace std;

int f[50] = { 0, };
int num1 = 0;
int num2 = 0;

int fib(int n) {
	if (n == 1 or n == 2) {
		num1++;
		return 1;
	}
	else return (fib(n - 1) + fib(n - 2));
}

int fibonacci(int n) {
	f[1] = 1;
	f[2] = 1;
	for (int i = 3; i < n + 1; i++) {
		f[i] = f[i - 1] + f[i - 2];
		num2++;
	}
	return f[n];
}

int main() {
	int n;
	cin >> n;
	fib(n);
	fibonacci(n);
	cout << num1 << " " << num2 << "\n";
	return 0;
}