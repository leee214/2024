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
    ll N,M;
    cin >> N >> M;
    vector<ll> trees(N);
    for(ll i=0;i<N;i++){
        cin >> trees[i];
    }
    sort(trees.begin(),trees.end());
    ll start = 0, end = trees[N - 1], sum , mid, max = -1;
    while(start <= end){
        sum = 0;
        mid = (start + end) / 2;
        for(ll i=0;i<N;i++){
            if(trees[i] > mid){
                sum += trees[i] - mid;
            }
        }
        if(sum >= M){
            start = mid + 1;
            if(mid > max){
                max = mid;
            }
        }
        else{
            end = mid - 1;
        }
    }
    cout << max << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    run();
	return 0;
}