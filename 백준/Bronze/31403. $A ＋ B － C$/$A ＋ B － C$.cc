#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	string A, B, C;
	cin >> A >> B >> C;
	int num1, num2, num3, num4;
	num1 = stoi(A);
	num2 = stoi(B);
	num3 = stoi(C);
	B = A + B;
	num4 = stoi(B);
	cout << num1 + num2 - num3 << "\n";
	cout << num4 - num3 << "\n";
	return 0;
}