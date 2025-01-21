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
	int N, M;
	cin >> N;
	vector<int> my_card(N);
	for (int i = 0; i < N; i++) {
		cin >> my_card[i];
	}
	cin >> M;
	vector<int> card(M);
	vector<int> count(M);
	for (int i = 0; i < M; i++) {
		cin >> card[i];
		count[i] = 0;
	}
	sort(my_card.begin(), my_card.end());
	for (int i = 0; i < M; i++) {
		auto lower = lower_bound(my_card.begin(), my_card.end(), card[i]);
		auto upper = upper_bound(my_card.begin(), my_card.end(), card[i]);
		int sum = upper - lower;
		count[i] += sum;
	}
	for (int i = 0; i < M; i++) {
		cout << count[i] << " ";
	}
	cout << "\n";
	return 0;
}