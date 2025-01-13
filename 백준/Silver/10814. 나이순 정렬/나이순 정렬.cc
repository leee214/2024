#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

static bool CmpName(tuple<int,int,string>& v1, tuple<int,int,string>& v2)
{
	if (get<0>(v1) == get<0>(v2)) {
		return get<1>(v1) < get<1>(v2);
	}
	return get<0>(v1) < get<0>(v2);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int N;
	cin >> N;
	vector<tuple<int, int, string>> names(N);
	for (int i = 0; i < N; i++) {
		int age, num;
		string name;
		cin >> age >> name;
		names[i] = make_tuple(age, i, name);
	}
	sort(names.begin(), names.end(),CmpName);
	for (int i = 0; i < N; i++) {
		cout << get<0>(names[i]) << " " << get<2>(names[i]) << "\n";
	}
	return 0;
}