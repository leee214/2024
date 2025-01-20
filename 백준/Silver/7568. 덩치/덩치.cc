#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

struct Body_size{
	int height;
	int weight;
	int rank;
};

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<Body_size> people(N);
	for (int i = 0; i < N; i++) {
		cin >> people[i].height >> people[i].weight;
		people[i].rank = 1;
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i != j) {
				if (people[i].height < people[j].height && people[i].weight < people[j].weight) {
					people[i].rank++;
				}
			}
		}
	}
	for (int i = 0; i < N; i++) {
		cout << people[i].rank << " ";
	}
	cout << "\n";
	return 0;
}