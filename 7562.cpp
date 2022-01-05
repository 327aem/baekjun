#include <iostream>
#include<queue>
#include<cstring>
using namespace std;
int dx[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int dy[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
int vis[301][301];
int t, n, s_x,s_y,d_x,d_y;
 
void bfs(int x, int y) {
    queue<pair<int, int>> q;
    vis[x][y] = 1;
    q.push({ x, y });
    while (!q.empty()) {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        for (int i = 0; i < 8; i++) {
            int nx = x + dx[i];
            int ny = y + dy[i];
            if (nx < 0 || ny < 0 || nx >= n || ny >= n) continue;
            if (vis[nx][ny]) continue;
            q.push({ nx, ny });
            vis[nx][ny] = vis[x][y] + 1;
        }
    }
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    cin >> t;
    for(int i=0;i<t;i++) {
        cin >> n;
        cin >> s_x >> s_y;
        cin >> d_x >> d_y;
        memset(vis, 0, sizeof(vis));
        bfs(s_x, s_y);
        cout << vis[d_x][d_y] - 1 << '\n';
    }
    return 0;
}
