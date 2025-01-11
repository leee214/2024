#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	int num;
	if (s1 != "Fizz" && s1 != "Buzz" && s1 != "FizzBuzz") {
		num = stoi(s1) + 3;
	}
	else if (s2 != "Fizz" && s2 != "Buzz" && s2 != "FizzBuzz") {
		num = stoi(s2) + 2;
	}
	else if (s3 != "Fizz" && s3 != "Buzz" && s3 != "FizzBuzz") {
		num = stoi(s3) + 1;
	}

	if (num % 15 == 0) {
		cout << "FizzBuzz" << "\n";
	}
	else if (num % 3 == 0) {
		cout << "Fizz" << "\n";
	}
	else if (num % 5 == 0) {
		cout << "Buzz" << "\n";
	}
	else {
		cout << num << "\n";
	}
	return 0;
}