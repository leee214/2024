#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<int> vec;
	for (int i = 0; i < N; i++) {
		string command;
		cin >> command;
		if (command == "push") {
			int num;
			cin >> num;
			vec.push_back(num);
		}
		else if (command == "pop") {
			if (vec.empty()) {
				cout << "-1\n";
			}
			else {
				cout << vec.back() << "\n";
				vec.pop_back();
			}
		}
		else if (command == "size") {
			cout << vec.size() << "\n";
		}
		else if (command == "empty") {
			if (vec.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
		}
		else if (command == "top") {
			if (vec.empty()) {
				cout << "-1\n";
			}
			else {
				cout << vec.back() << "\n";
			}
		}
	}
	return 0;
}