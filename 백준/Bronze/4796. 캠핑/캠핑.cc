#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int L, P, V, case_num = 1;
	while (true) {
		cin >> L >> P >> V;
		if (L == 0 && P == 0 && V == 0) {
			break;
		}
		int mul = V / P;
		int sum = 0;
		sum += mul * L;
		if (V - mul * P >= L) {
			sum += L;
		}
		else if (V - mul * P < L) {
			sum += V - mul * P;
		}
		cout << "Case " << case_num << ": " << sum << "\n";
		case_num++;
	}
	return 0;
}