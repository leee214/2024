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
	int N, K;
	cin >> N >> K;
	vector<int> people(N);
	vector<int> yo;
	int count = 0;
	int tmp = K - 1;
	for (int i = 0; i < N; i++) {
		people[i] = i + 1;
	}
	while (true) {
		if (count == N) {
			break;
		}
		if (tmp >= N) {
			tmp -= N;
		}
		if (people[tmp] != 0) {
			yo.push_back(tmp + 1);
			people[tmp] = 0;
			count++;
		}
		if (count != N) {
			for (int i = 0; i < K; i++) {
				tmp++;
				if (tmp >= N) {
					tmp -= N;
				}
				if (people[tmp] == 0) {
					i--;
				}
				if (tmp >= N) {
					tmp -= N;
				}
			}
		}
	}
	cout << "<";
	for (int i = 0; i < N; i++) {
		if (i != N - 1) {
			cout << yo[i] << ", ";
		}
		else {
			cout << yo[i];
		}
	}
	cout << ">\n";
	return 0;
}