#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	long long K, N, sum = 0;
	cin >> K >> N;
	vector<long long> Lan(K);
	for (int i = 0; i < K; i++) {
		cin >> Lan[i];
	}
	if (K == 1 && N == 1) {
		cout << Lan[0] << "\n";
		return 0;
	}
	sort(Lan.begin(), Lan.end());
	long long tmp = 0;
	long long min_num = 1;
	long long max_num = Lan[K - 1];
	while (true) {
		if (min_num > max_num) {
			break;
		}
		long long div = (min_num + max_num) / 2;
		long long tmp2 = 0;
		for (int i = 0; i < K; i++) {
			tmp2 += Lan[i] / div;
		}
		if (tmp2 >= N) {
			tmp = div;
			min_num = div + 1;
		}
		else {
			max_num = div - 1;
		}
	}
	cout << tmp << "\n";
	return 0;
}