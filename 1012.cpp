#include <iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cstring>

using namespace std;

int map[51][51];
bool visited[51][51];
int m,n,k;
int dx[4]={0,1,0,-1};
int dy[4]={1,0,-1,0};

void dfs(int y,int x){
    map[y][x]=0;
    for(int i=0;i<4;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx>=0 && nx<m && ny>=0 && ny<n){
            if(map[ny][nx] && !visited[ny][nx]){
                visited[ny][nx]=true;
                dfs(ny,nx);
            }
        }
    }
}
int main(){
    
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int ans=0;
        memset(map,0,sizeof(map));
        memset(visited,0,sizeof(visited));
        cin>>m>>n>>k;
        for(int j=0;j<k;j++){
            int x,y;
            cin>>x>>y;
            map[y][x]=1;
        }
        
        for(int k=0;k<n;k++){
            for(int l=0;l<m;l++){
                if(map[k][l]==1){
                    ans++;
                    visited[k][l]=true;
                    dfs(k,l);
                }
            }
        }
        cout<<ans<<'\n';
    }
    
    return 0;
}
