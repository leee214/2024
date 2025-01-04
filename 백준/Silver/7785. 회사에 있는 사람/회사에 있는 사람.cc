#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <string>

using namespace std;

int main() {
	int N;
	cin >> N;
    unordered_set<string> list;
    vector<string> cons;
    for (int i = 0; i < N; i++) {
        string name, flag;
        cin >> name >> flag;
        if (flag == "enter") {
            list.insert(name);
        }
        else if (flag == "leave") {
            list.erase(name);
        }
    }
    cons.assign(list.begin(),list.end());
    sort(cons.rbegin(), cons.rend());
    for (string result : cons) {
        cout << result << "\n";
    }
	return 0;
}