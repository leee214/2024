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

int dx[4] = {1,-1,0,0};
int dy[4] = {0,0,1,-1};

void DFS(int x,int y,const vector<vector<int>>& cabbage,vector<vector<bool>>& visited){
    visited[y][x] = true;
    int n = cabbage.size();
    int m = cabbage[0].size();
    for(int i = 0; i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx<0||ny<0||nx>=m||ny>=n){
            continue;
        }
        if(cabbage[ny][nx] == 1 && !visited[ny][nx]){
            DFS(nx,ny,cabbage,visited);
        }
    }

}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int T;
    cin >> T;
    for(int i=0;i<T;i++){
        int m,n,k;
        cin >> m >> n >> k;
        vector<vector<int>> cabbage(n,vector<int>(m,0));
        vector<vector<bool>> visited(n,vector<bool>(m,false));
        for(int j=0;j<k;j++){
            int x,y;
            cin >> x >> y;
            cabbage[y][x] = 1;
        }
        int cnt = 0;
        for(int y=0;y<n;y++){
            for(int x=0;x<m;x++){
                if(cabbage[y][x] == 1 && !visited[y][x]){
                    cnt++;
                    DFS(x,y,cabbage,visited);
                }
            }
        }
        cout << cnt << "\n";
    }
    return 0;
}