#include <iostream>
#include <vector>
#include<algorithm>
using namespace std;

int n,s,cnt=0;

int a[21];

void func(int i,int sum){
    sum += a[i];
    if(i==n){
        return;
    }
    if(sum==s){
        cnt++;
    }
    func(i+1,sum);
    func(i+1,sum-a[i]);
}

int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
    
    cin>>n>>s;
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    func(0,0);
    
    cout<<cnt<<'\n';
    return 0;
}
