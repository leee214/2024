#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string str, str2;
	getline(cin, str);
	int n = 0;
	stringstream s(str);
	while (true) {
		if (s >> str2) {
			n++;
		}
		else {
			break;
		}
	}
	cout << n << "\n";
	return 0;
}