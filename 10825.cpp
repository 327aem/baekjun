#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

typedef struct score{
    string name;
    int kor,eng,mat;
}score;

bool compare(score a,score b){
    if(a.kor==b.kor){
        if(a.eng==b.eng){
            if(a.mat==b.mat){
                return a.name<b.name;
            }
            else{
                return a.mat>b.mat;
            }
        }
        else{
            return a.eng<b.eng;
        }
    }
    else{
        return a.kor>b.kor;
    }
}

int main(){
    int n;
    cin>>n;

    vector<score> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].name>>v[i].kor>>v[i].eng>>v[i].mat;
    }
    sort(v.begin(),v.end(),compare);

    for(int i=0;i<n;i++){
        cout<<v[i].name<<'\n';
    }
    return 0;
}
