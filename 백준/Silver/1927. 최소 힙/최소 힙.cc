#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>
#include <unordered_map>
#include <stack>
#include <queue>
#include <sstream>
#include <bits/stdc++.h>

using namespace std;

using ll = long long;

void run(){
int N;
cin >> N;
int x;
priority_queue<int,vector<int>,greater<int>> pq;
while(N--){
    cin >> x;
    if(x==0){
        if(pq.empty()){
            cout << "0\n";
        }
        else{
            cout << pq.top() << "\n";
            pq.pop();
        }
    }
    else{
        pq.push(x);
    }
}

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    run();
	return 0;
}