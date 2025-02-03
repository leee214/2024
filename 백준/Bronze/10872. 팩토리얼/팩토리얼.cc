#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<ll> fac(13);
	fac[0] = 1;
	for (int i = 1; i < 13; i++) {
		fac[i] = fac[i - 1] * i;
	}
	cout << fac[N] << "\n";
	return 0;
}