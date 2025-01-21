#include <iostream>
#include <deque>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	deque<int> card;
	for (int i = 0; i < N; i++) {
		card.push_back(i + 1);
	}
	while (card.size() != 1) {
		card.pop_front();
		card.push_back(card.front());
		card.pop_front();
	}
	cout << card.front() << "\n";
	return 0;
}