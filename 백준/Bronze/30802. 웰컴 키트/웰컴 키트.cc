#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	vector<int> str(6);
	int N, T, P;
	cin >> N;
	for (int i = 0; i < 6; i++) {
		cin >> str[i];
	}
	cin >> T >> P;
	int res = 0;
	int sum = 0;
	for (int i = 0; i < 6; i++) {
		if (T >= str[i] && str[i] != 0) {
			res++;
		}
		else if(str[i] == 0){

		}
		else {
			if (str[i] % T != 0) {
				res += (str[i] / T) + 1;
			}
			else {
				res += str[i] / T;
			}
		}
		sum += str[i];
	}
	int res2 = sum / P;
	int res3 = sum % P;
	cout << res << "\n" << res2 << " " << res3 << "\n";
	return 0;
}