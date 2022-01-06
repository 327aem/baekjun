#include <iostream>

using namespace std;

int p[101][100001];

int w[101];
int v[101];
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int n,k;
    cin>>n>>k;
    
    

    for(int i=1;i<=n;i++){
        cin>>w[i]>>v[i];
    }
    int i,ww;
    for(ww=0;ww<=k;ww++){
        p[0][ww]=0;
    }
    for(i=1;i<=n;i++){
        p[i][0]=0;
        for(ww=1;ww<=k;ww++){
            if(w[i]<=ww){
                if(v[i]+p[i-1][ww-w[i]] > p[i-1][ww]){
                    p[i][ww] =v[i]+p[i-1][ww-w[i]];
                }
                else{
                    p[i][ww] = p[i-1][ww];
                }
            }
            else{
                p[i][ww] = p[i-1][ww];
            }
        }
    }
    cout<<p[n][k]<<'\n';
    return 0;
}
