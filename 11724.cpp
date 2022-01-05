#include <iostream>

using namespace std;
int n,m;
int a,b;
int ans=0;
int map[1001][1001];
int visit[1001];
void dfs(int num){
    visit[num]=1;
    for(int i=1;i<=n;i++){
        if(map[num][i] && !visit[i]){
            dfs(i);
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin>>n>>m;
    for(int i=0;i<m;i++){
        cin>>a>>b;
        map[a][b]=1;
        map[b][a]=1;
    }
    for(int i=1;i<=n;i++){
        if(!visit[i]){
            ans++;
            dfs(i);
        }
    }
    cout<<ans<<'\n';
    return 0;
}
