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
	vector<ll> vec(3);
	cin >> vec[0] >> vec[1] >> vec[2];
	sort(vec.begin(), vec.end());
	cout << vec[0] << " " << vec[1] << " " << vec[2] << "\n";
	return 0;
}