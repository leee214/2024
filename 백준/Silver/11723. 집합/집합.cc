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
	ll M;
	cin >> M;
	vector<int> S;
	vector<int> cop = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	for (int i = 0; i < M; i++) {
		string str;
		cin >> str;
		if (str == "add") {
			int x;
			cin >> x;
			if (S.empty()) {
				S.push_back(x);
			}
			else {
				auto it = find(S.begin(), S.end(), x);
				if (it == S.end()) {
					S.push_back(x);
				}
			}
		}
		else if (str == "remove") {
			int x;
			cin >> x;
			if (!S.empty()) {
				auto it = find(S.begin(), S.end(), x);
				if (it != S.end()) {
					ll index = distance(S.begin(), it);
					S.erase(S.begin() + index);
				}
			}
		}
		else if (str == "check") {
			int x;
			cin >> x;
			if (!S.empty()) {
				auto it = find(S.begin(), S.end(), x);
				if (it != S.end()) {
					cout << "1\n";
				}
				else {
					cout << "0\n";
				}
			}
			else {
				cout << "0\n";
			}
		}
		else if (str == "toggle") {
			int x;
			cin >> x;
			if (!S.empty()) {
				auto it = find(S.begin(), S.end(), x);
				if (it != S.end()) {
					ll index = distance(S.begin(), it);
					S.erase(S.begin() + index);
				}
				else {
					S.push_back(x);
				}
			}
			else {
				S.push_back(x);
			}
		}
		else if (str == "all") {
			S = cop;
		}
		else if (str == "empty") {
			S.clear();
		}
	}
	return 0;
}