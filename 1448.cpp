#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

bool flag =false;
int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    cin>>n;
    
    vector<int> v(n);
    
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<int>());
    
    for(int i=0;i<n-2;i++){
        if(v[i]<v[i+1]+v[i+2]){
            flag=true;
            cout<<v[i]+v[i+1]+v[i+2]<<'\n';
            return 0;
        }
    }
    if(flag==false){
        cout<<-1<<'\n';
    }
    return 0;
}
