#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int n,m;

typedef struct t{
    long long s;
    long long f;
}t;

bool compare(t a,t b){
    if(a.f == b.f) return a.s<b.s;
    else return a.f<b.f;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    
    cin>>n;
    t time[n];
    int ans=0;
    for(int i=0;i<n;i++){
        cin>>time[i].s>>time[i].f;
    }
    sort(time,time+n,compare);
    
    long long start=0,finish=0;
    for(int i=0;i<n;i++){
        if(time[i].s>=finish){
            start = time[i].s;
            finish = time[i].f;
            ans++;
        }
    }
    cout<<ans<<'\n';
    return 0;
}
