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

void cut_paper(int N,const vector<vector<int>> paper,int& white,int& blue){
    if(N==2){
        for(int y=0;y<2;y++){
            for(int x=0;x<2;x++){
                if(paper[y][x]){
                    blue++;
                }
                else{
                    white++;
                }
            }
        }
    }
    else{
        int chk = 0;
        bool is_a_color = true;
        vector<vector<int>> small_paper(N/2,vector<int>(N/2,0));
        for(int y=0;y<N/2;y++){
            for(int x=0;x<N/2;x++){
                small_paper[y][x]=paper[y][x];
                if(x==0 && y==0){
                    if(paper[y][x]){
                        chk=1;
                    }
                    else{
                        chk=0;
                    }
                }
                else{
                    if(paper[y][x]!=chk){
                        is_a_color = false;
                    }
                }
            }
        }
        if(!is_a_color){
            cut_paper(N/2,small_paper,white,blue);
        }
        else{
            if(chk){
                blue++;
            }
            else{
                white++;
            }
        }
        is_a_color = true;
        for(int y=0;y<N/2;y++){
            for(int x=N/2;x<N;x++){
                small_paper[y][x-N/2]=paper[y][x];
                if(x==N/2 && y==0){
                    if(paper[y][x]){
                        chk=1;
                    }
                    else{
                        chk=0;
                    }
                }
                else{
                    if(paper[y][x]!=chk){
                        is_a_color = false;
                    }
                }
            }
        }
        if(!is_a_color){
            cut_paper(N/2,small_paper,white,blue);
        }
        else{
            if(chk){
                blue++;
            }
            else{
                white++;
            }
        }
        is_a_color = true;        
        for(int y=N/2;y<N;y++){
            for(int x=0;x<N/2;x++){
                small_paper[y-N/2][x]=paper[y][x];
                if(x==0 && y==N/2){
                    if(paper[y][x]){
                        chk=1;
                    }
                    else{
                        chk=0;
                    }
                }
                else{
                    if(paper[y][x]!=chk){
                        is_a_color = false;
                    }
                }
            }
        }
        if(!is_a_color){
            cut_paper(N/2,small_paper,white,blue);
        }
        else{
            if(chk){
                blue++;
            }
            else{
                white++;
            }
        }
        is_a_color = true; 
        for(int y=N/2;y<N;y++){
            for(int x=N/2;x<N;x++){
                small_paper[y-N/2][x-N/2]=paper[y][x];
                if(x==N/2 && y==N/2){
                    if(paper[y][x]){
                        chk=1;
                    }
                    else{
                        chk=0;
                    }
                }
                else{
                    if(paper[y][x]!=chk){
                        is_a_color = false;
                    }
                }
            }
        }
        if(!is_a_color){
            cut_paper(N/2,small_paper,white,blue);
        }
        else{
            if(chk){
                blue++;
            }
            else{
                white++;
            }
        }
        is_a_color = true; 
    }
}

void run(){
    int N;
    int white=0,blue=0;
    cin >> N;
    vector<vector<int>> paper(N,vector<int>(N,0));
    int chk;
    bool flag=true;
    for(int y=0;y<N;y++){
        for(int x=0;x<N;x++){
            cin >> paper[y][x];
            if(x==0 && y==0){
                chk = paper[y][x];
            }
            else{
                if(chk != paper[y][x]){
                    flag = false;
                }
            }
        }
    }
    if(flag == true){
        if(chk){
            blue++;
        }
        else{
            white++;
        }
    }
    else{
        cut_paper(N,paper,white,blue);
    }
    cout << white << "\n" << blue << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
    run();
	return 0;
}