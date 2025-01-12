#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<pair<string, int>> words(N);
	for (int i = 0; i < N; i++) {
		string word;
		cin >> word;
		int num = word.size();
		words[i] = make_pair(word, num);
	}
	sort(words.begin(), words.end(), [](pair<string, int> a,pair<string, int> b) {
		return a.first < b.first;
	});
	auto last = unique(words.begin(), words.end(), [](pair<string, int> a,pair<string, int> b) {
		return a.first == b.first;
	});
	words.erase(last, words.end());
	sort(words.begin(), words.end(), [](pair<string, int> a,pair<string, int> b) {
		if (a.second == b.second) {
			return a.first < b.first;
		}
		return a.second < b.second;
	});
	for (int i = 0; i < words.size(); i++) {
		cout << words[i].first << "\n";
	}
	return 0;
}