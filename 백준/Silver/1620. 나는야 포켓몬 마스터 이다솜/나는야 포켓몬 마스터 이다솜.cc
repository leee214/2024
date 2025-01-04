#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <string>
#include <unordered_map>

using namespace std;

bool isInteger(string str) {
	if (str.empty()) {
		return false;
	}
	size_t start = 0;
	for (size_t i = start; i < str.size(); ++i) {
		if (!isdigit(str[i])) {
			return false;
		}
	}
	return true;
}

int main() {
	int N, M;
	cin >> N >> M;
	vector<string> p_name(N);
	unordered_map<string, int> num3;
	vector<string> answer;
	for (int i = 0; i < N; i++) {
		cin >> p_name[i];
		num3[p_name[i]] = i + 1;
	}
	for (int i = 0; i < M; i++) {
		string ins;
		cin >> ins;
		if (isInteger(ins)) {
			int num = stoi(ins);
			answer.push_back(p_name[num - 1]);
		}
		else {
			answer.push_back(to_string(num3[ins]));
		}
	}
	for (int i = 0; i < M; i++) {
		cout << answer[i] << "\n";
	}
	return 0;
}