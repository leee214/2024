#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>

using namespace std;

using ll = long long;

void P(int N,vector<ll>& tri){
    for(int i=1;i<N+1;i++){
        if(i<4){
            tri[i] = 1;
        }
        else if(i<6){
            tri[i] = 2;
        }
        else{
            tri[i] = tri[i-1] + tri[i-5];
        }
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int N;
        cin >> N;
        vector<ll> tri(N+1);
        P(N,tri);
        cout << tri[N] << "\n";
    }
	return 0;
}