#include <iostream>
#include <algorithm>

using namespace std;


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int n;
    cin>>n;
    int a[301];
    int dp[301];
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }
    dp[1]=a[1];
    dp[2]=a[1]+a[2];
    dp[3]=max(a[1]+a[3],a[2]+a[3]);
    for(int i=4;i<=n;i++){
        dp[i]=max(dp[i-2]+a[i],dp[i-3]+a[i]+a[i-1]);
    }
    cout<<dp[n]<<'\n';
    return 0;
}
