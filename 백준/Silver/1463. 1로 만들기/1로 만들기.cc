#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int X;
	cin >> X;
	int* times;
	times = (int*)malloc(sizeof(int) * (X + 2));
	times[1] = 0;	
	for (int i = 2; i <= X; i++) {
		times[i] = times[i - 1] + 1;
		if (i % 2 == 0) {
			times[i] = min(times[i], times[i/2]+1);
		}
		if (i % 3 == 0) {
			times[i] = min(times[i], times[i / 3] + 1);
		}
	}
	cout << times[X];
	free(times);
	return 0;
}