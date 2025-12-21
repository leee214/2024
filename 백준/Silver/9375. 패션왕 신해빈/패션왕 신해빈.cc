#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>
#include <unordered_map>

using namespace std;

using ll = long long;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int T;
    cin >> T;
    int n;
    for(int i=0;i<T;i++){
        cin >> n;
        unordered_map<string,int> mp;
        for(int j=0;j<n;j++){
            string name, place;
            cin >> name >> place;
            mp[place]++;
        }
        ll res=1;
        for(auto &num : mp){
            res *= (num.second+1);
        }
        res--;
        cout << res << "\n";
    }
	return 0;
}