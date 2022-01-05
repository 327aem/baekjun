#include <iostream>

using namespace std;

int n,m;
int q[100001];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    cin>>n>>m;
    int a;
    for(int i=0;i<n;i++){
        cin>>a;
        q[i+1]=q[i]+a;
        
    }
    for(int i=0;i<m;i++){
        int s,e;
        cin>>s>>e;
        cout<<q[e]-q[s-1]<<'\n';
    }
    return 0;
}
