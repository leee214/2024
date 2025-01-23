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
	string str;
	cin >> str;
	int count = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
			count++;
		}
	}
	cout << count << "\n";
	return 0;
}