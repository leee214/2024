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
	int L;
	cin >> L;
	int t;
	t = L / 5;
	if (L % 5 != 0) {
		t++;
	}
	cout << t << "\n";
	return 0;
}