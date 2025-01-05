#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	stack<int> s;
	int N, temp, temp2;
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		switch (temp) {
		case 1:
			cin >> temp2;
			s.push(temp2);
			break;
		case 2:
			if (s.empty()) {
				cout << "-1\n";
			}
			else {
				cout << s.top() << "\n";
				s.pop();
			}
			break;
		case 3:
			cout << s.size() << "\n";
			break;
		case 4:
			if (s.empty()) {
				cout << "1\n";
			}
			else {
				cout << "0\n";
			}
			break;
		case 5:
			if (s.empty()) {
				cout << "-1\n";
			}
			else {
				cout << s.top() << "\n";
			}
			break;
		default:
			break;
		}
	}
	return 0;
}