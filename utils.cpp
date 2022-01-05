#1. merge_sort


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


#dfs,bfs

const int MAX = 10000;
bool visited[MAX];
vector<int> adj[MAX];

void dfs(int u){
    visited[u]=true;
    for(int i=0;i<adj[i].size();i++){
        if(!visited[adj[u][i]]){
                    dfs(adj[u][i]);
                    }
    }
}

void bfs(int u){
    queue<int> q;
    q.push(u);
    visited[u]=true;
    
    while(!q.empty()){
        int x = q.front();
        q.pop();
        for(int i=0;i<adj[x].size();i++){
            if(!visited[adj[u][i]]){
                q.push(adj[u][i]);
                visited[adj[u][i]]=true;
            }
        }
    }
}
