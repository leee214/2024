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

void rgrj(int n,vector<int>& rg){
    for(int i=1;i*i<n+1;i++){
        rg[i*i] = 1;
        for(int j=i;j*j<n+1;j++){
            if(i*i+j*j<n+1 && (rg[i*i+j*j] > 2)){
                rg[i*i+j*j] = 2;
            }
            for(int k=j;k*k<n+1;k++){
                if(i*i+j*j+k*k<n+1 && (rg[i*i+j*j+k*k] > 3)){
                    rg[i*i+j*j+k*k] = 3;
                }
                for(int l=k;l*l<n+1;l++){
                    if(i*i+j*j+k*k+l*l<n+1 && (rg[i*i+j*j+k*k+l*l] == 0)){
                        rg[i*i+j*j+k*k+l*l] = 4;
                    }
                }
            }
        }
    }
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> rg(n+1,4);
    rgrj(n,rg);
    cout << rg[n] << "\n";
	return 0;
}