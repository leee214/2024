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
	ll N, M;
	cin >> N >> M;
	map<string, string> map;
	for (ll i = 0; i < N; i++) {
		string name, pass;
		cin >> name >> pass;
		map[name] = pass;
	}
	for (ll i = 0; i < M; i++) {
		string name;
		cin >> name;
		cout << map[name] << "\n";
	}
	return 0;
}