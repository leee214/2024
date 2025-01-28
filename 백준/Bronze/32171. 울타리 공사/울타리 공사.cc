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

struct Points{
	int a, b, c, d;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N, minx = 10, maxx = -10, miny = 10, maxy = -10;
	cin >> N;
	vector<Points> po(N);
	for (int i = 0; i < N; i++) {
		cin >> po[i].a >> po[i].b >> po[i].c >> po[i].d;
		maxx = max(po[i].a, max(po[i].c, maxx));
		maxy = max(po[i].b, max(po[i].d, maxy));
		minx = min(po[i].a, min(po[i].c, minx));
		miny = min(po[i].b, min(po[i].d, miny));
		int result = 2 * (maxx - minx) + 2 * (maxy - miny);
		cout << result << "\n";
	}
	return 0;
}