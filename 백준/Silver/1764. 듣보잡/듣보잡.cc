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
	int N, M;
	cin >> N >> M;
	vector<string> hear(N);
	vector<string> see(M);
	vector<string> result;
	for (int i = 0; i < N; i++) {
		cin >> hear[i];
	}
	sort(hear.begin(), hear.end());
	for (int i = 0; i < M; i++) {
		string s;
		cin >> s;
		if (binary_search(hear.begin(), hear.end(), s)) {
			result.push_back(s);
		}
	}
	sort(result.begin(), result.end());
	cout << result.size() << "\n";
	for (int i = 0; i < result.size(); i++) {
		cout << result[i] << "\n";
	}
	return 0;
}