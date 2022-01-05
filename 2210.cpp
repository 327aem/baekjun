#include <iostream>
#include <set>
using namespace std;



int map[5][5];
set<int> s;
int ans=0;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void dfs(int y,int x,int sum,int cnt){
    if(cnt ==5){
        s.insert(sum);
        return;
    }
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx>=0 && nx<5 && ny>=0 && ny<5){
            dfs(ny,nx,sum*10 + map[ny][nx],cnt+1);
        }
    }
}
int main(){
    
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>map[i][j];
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            dfs(i,j,map[i][j],0);
        }
    }
    cout<<s.size()<<'\n';
    return 0;
}
