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

int calc(const vector<int>& numbers,const vector<char>& tokens){
    int N,M;
    N = numbers.size();
    M = numbers.size()-1;
    int all_sum=0;
    int sum=0;
    bool isminus = false;
    all_sum += numbers[0];
    for(int i=1;i<N;i++){
        if(tokens[i-1] == '-'){
            isminus = true;
        }
        if(isminus){
            all_sum -= numbers[i];
        }
        else{
            all_sum += numbers[i];
        }
    }
    return all_sum;
}

void split_string(string inp, vector<int>& numbers,vector<char>& tokens){
    int start=0,end=0;
    int cnt = 1;
    string cop;
    int x;
    while(end<inp.size()){
        if(end == inp.size()-1){
            x = stoi(inp.substr(start,cnt));
            numbers.push_back(x);
        }
        if(inp[end] == '+' || inp[end] == '-'){
            x = stoi(inp.substr(start,cnt));
            numbers.push_back(x);
            tokens.push_back(inp[end]);
            cnt = 1;
            start=end+1;
            end=start;
        }
        else{
            end++;
            cnt++;
        }
    }
}

void run(){
    string inp;
    cin >> inp;
    vector<int> numbers;
    vector<char> tokens;
    split_string(inp,numbers,tokens);
    int res = calc(numbers,tokens);
    cout << res << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    run();
	return 0;
}