#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int dp[4001][4001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int ans=0;
    string x,y;
    cin>>x>>y;
    int m=x.length();
    int n=y.length();
    dp[1][1]=0;
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(x[i-1]==y[j-1]){
                if(i==1 && j==1){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j]=dp[i-1][j-1]+1;
                }
                ans = max(ans,dp[i][j]);
            }
        }
    }
    cout<<ans;
    return 0;
}
