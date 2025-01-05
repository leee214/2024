#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

using namespace std;

char calc_star(int n, char** str, int spx, int spy) {
	if (n == 1) {
		return 0;
	}
	else {
		for (int i = spx + (n / 3); i < spx + (2 * (n / 3)); i++) {
			for (int j = spy + (n / 3); j < spy + (2 * (n / 3)); j++) {
				str[i][j] = ' ';
			}
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (i == 1 && j == 1) {
					//nothing to do
				}
				else {
					calc_star(n / 3, str, spx + (j * (n / 3)), spy + (i * (n / 3)));
				}
			}
		}
		return 0;
	}
	return 0;
}

void draw_star(int n, char** str) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << str[i][j];
		}
		cout << "\n";
	}
}

int main() {
	int N;
	int spx = 0;
	int spy = 0;
	cin >> N;
	char** star = (char**)malloc((N * sizeof(char*)));
	for (int i = 0; i < N; i++) {
		star[i] = (char*)malloc(N * sizeof(char));
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			star[i][j] = '*';
		}
	}
	calc_star(N, star, spx, spy);
	draw_star(N, star);
	for (int i = 0; i < N; i++) {
		free(star[i]);
	}
	free(star);
	return 0;
}