#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    int t;
    cin>>t;
    
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        pair<int,int> p[100001];
        for(int k=0;k<n;k++){
            cin>>p[k].first>>p[k].second;
        }
        sort(p,p+n);
        int ans=1;
        int temp = p[0].second;
        for(int m=1;m<=n;m++){
            if(p[m].second<temp){
                ans++;
                temp=p[m].second;
            }
            if(temp == 1){
                break;
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}
