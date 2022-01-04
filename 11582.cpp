//OutOfBounds error
//NOT COMPLETE!!

#include <iostream>
#include <cstring>
using namespace std;

int A[1046577];
int buffer[1048577];
int k;
int n;

void merge(int* v,int left,int middle, int right){
    if(right-left > n/k) return;
    int i,i_left,i_right;

    memcpy(buffer+left,v+left,sizeof(int)*(right-left+1));

    i_left = left;
    i_right = middle+1;
    i=left;

    while((i_left<=middle) && (i_right<=right)){
        if(buffer[i_left]<buffer[i_right]){
            v[i++]=buffer[i_left++];
        }
        else{
            v[i++]=buffer[i_right++];
        }
    }

    while(i_left<=middle){
        v[i++]=buffer[i_left++];
    }
    while(i_right<=right){
        v[i++]=buffer[i_right++];
    }
}
void merge_sort(int* v,int left,int right){
    int middle;

    if(left<right){
        middle = (left+right)/2;

        merge_sort(v,left,middle);
        merge_sort(v,middle+1,right);

        merge(v,left,middle,right);
    }
}



int main(void){
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    
    cin>>n;

    for(int i=0;i<n;i++){
        cin>>A[i];
    }
    cin>>k;
    merge_sort(A,0,n-1);
    for(int i=0;i<n;i++){
        cout<<A[i]<<' ';
    }
    return 0;
}
