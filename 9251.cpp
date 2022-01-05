#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int dp[1005][1005];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    string x,y;
    cin>>x>>y;
    
    
    int m=x.length();
    int n=y.length();
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(x[i-1]==y[j-1]) dp[i][j]=dp[i-1][j-1]+1;
            else{
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    cout<<dp[m][n]<<'\n';
    return 0;
}
