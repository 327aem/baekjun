#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int dp[101][101][101];

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    string x,y,z;
    cin>>x>>y>>z;
    
    
    int m=x.length();
    int n=y.length();
    int l=z.length();
    
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            for(int k=1;k<=l;k++){
                if(x[i-1]==y[j-1] && y[j-1] == z[k-1]){
                    dp[i][j][k]=dp[i-1][j-1][k-1]+1;
                }
                else{
                    dp[i][j][k]=max({dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]});
                }
            }
        }
    }
    cout<<dp[m][n][l]<<'\n';
    return 0;
}
