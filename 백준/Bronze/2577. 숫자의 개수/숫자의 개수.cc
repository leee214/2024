#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int A, B, C;
	long long mul;
	int num[10] = { 0, };
	cin >> A >> B >> C;
	mul = A * B * C;
	while (true) {
		int tmp;
		tmp = mul % 10;
		mul /= 10;
		switch (tmp){
		case 0:
			num[0]++;
			break;
		case 1:
			num[1]++;
			break;
		case 2:
			num[2]++;
			break;
		case 3:
			num[3]++;
			break;
		case 4:
			num[4]++;
			break;
		case 5:
			num[5]++;
			break;
		case 6:
			num[6]++;
			break;
		case 7:
			num[7]++;
			break;
		case 8:
			num[8]++;
			break;
		case 9:
			num[9]++;
			break;
		default:
			break;
		}
		if (mul == 0) {
			break;
		}
	}
	for (int i = 0; i < 10; i++) {
		cout << num[i] << "\n";
	}
	return 0;
}