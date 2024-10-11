#include <iostream>
#include <string>

using namespace std;

int main() {

	int i = 0;
	int max = 0;
	int n = 0;
	int num;
	char ch;
	string str;
	int arr[26] = { 0, };
	cin >> str;

	for (int i = 0; i < str.size(); i++) {
		if ((str[i] >= 97)&&(str[i] <=122)) {
			str[i] -= 32;
		}
	}

	for(int i=0;i<str.size();i++) {
		arr[str[i] - 65]++;
		
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] > max) {
			max = arr[i];
			num = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] == max) {
			n++;
		}
	}

	if (n >= 2) {
		cout << "?";
		return 0;
	}
	else {
		ch = num + 65;
		cout << ch;
	}

	return 0;
}