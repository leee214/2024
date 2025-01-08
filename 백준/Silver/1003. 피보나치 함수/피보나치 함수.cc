#include <iostream>
#include <vector>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int T;
    cin >> T;
    vector<long long> dp0(41);
    vector<long long> dp1(41);
    dp0[0] = 1;
    dp1[0] = 0;
    dp0[1] = 0;
    dp1[1] = 1;
    for (int i = 2; i < 41; i++) {
        dp0[i] = dp0[i - 1] + dp0[i - 2];
        dp1[i] = dp1[i - 1] + dp1[i - 2];
    }
    for (int i = 0; i < T; i++) {
        int tmp;
        cin >> tmp;
        cout << dp0[tmp] << " " << dp1[tmp] << "\n";
    }
	return 0;
}
