#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cctype>
#include <deque>
#include <cmath>
#include <map>

using namespace std;

using ll = long long;

void DFS(int &cnt,int v, const vector<vector<int>>& graph, vector<bool>& visited){
	visited[v] = true;
	for(int next : graph[v]){
		if (visited[next] == false){
			cnt++;
			DFS(cnt, next, graph, visited);
		}
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int c;
	cin >> c;
	vector<vector<int>> graph(c+1);
	vector<bool> visited(c+1,false);
	int n;
	cin >> n;
	int cnt = 0;
	int a,b;
	for (int i = 0; i < n; i++) {
		cin >> a >> b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	DFS(cnt, 1, graph, visited);
	cout << cnt;
	return 0;
}