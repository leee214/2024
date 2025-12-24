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

void DFS(int V, const vector<vector<int>>& p, vector<bool>& visited){
    visited[V] = true;
    cout << V << " ";
    for(int next : p[V]){
        if(!visited[next]){
            DFS(next,p,visited);
        }
    }
}

void BFS(int V, const vector<vector<int>>& p, vector<bool>& visited){
    visited[V] = true;
    queue<int> q;
    q.push(V);
    while(!q.empty()){
        int f = q.front();
        q.pop();
        cout << f << " ";
        for(int next : p[f]){
            if(!visited[next]){
                visited[next] = true;
                q.push(next);
            }
        }
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int N,M,V;
    cin >> N >> M >> V;
    vector<vector<int>> p(N+1);
    vector<bool> visited(N+1,false);
    int a,b;
    for(int i=0;i<M;i++){
        cin >> a >> b;
        p[a].push_back(b);
        p[b].push_back(a);
    }
    for(int i=1;i<N+1;i++){
        sort(p[i].begin(),p[i].end());
    }
    DFS(V,p,visited);
    cout << "\n";
    fill(visited.begin(),visited.end(),false);
    BFS(V,p,visited);
    cout << "\n";
    return 0;
}