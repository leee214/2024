#include <iostream>

using namespace std;

int main() {
	int N = 0;
	long long sum = 0;
	long long S,min, max;
	cin >> S;
	for (int i = 1; i < 1000000; i++) {
		sum += i;
		min = sum;
		max = min + i + 1;
		if ((S >= min) && (S < max)) {
			N = i;
			break;
		}
	}
	cout << N;
	return 0;
}