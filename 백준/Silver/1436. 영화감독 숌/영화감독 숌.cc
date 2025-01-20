#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int title;
	string stitle;
	int check = 0;
	int N;
	cin >> N;
	for (title = 666; ; title++) {
		stitle = to_string(title);

		if (stitle.find("666") != -1) {
			check++;
			if (check == N) {
				cout << title;
				break;
			}
		}
	}
	return 0;
}