#include <iostream>
#include <algorithm>

using namespace std;

int ans=0;
int map[1025][1025];
int dp[1025][1025];
int n,m;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>map[i][j];
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            dp[i][j]=dp[i-1][j]+dp[i][j-1]-dp[i-1][j-1]+map[i][j];
        }
    }
    
    int x1,x2,y1,y2;
    
    for(int i=0;i<m;i++){
        cin>>x1>>y1>>x2>>y2;
        ans = dp[x2][y2]-dp[x1-1][y2]-dp[x2][y1-1]+dp[x1-1][y1-1];
        cout<<ans<<'\n';
    }
    return 0;
}
