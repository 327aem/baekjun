#include <iostream>

#define mod 1000000000

using namespace std;

int dp[101][10];

int main() {
    ios::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    cin >> n;

    for (int i = 1;i < 10;i++) {
        dp[1][i] = 1;
    }
    for (int i = 2;i < 101;i++) {
        for (int j = 0;j < 10;j++) {
            if (j == 0) {
                dp[i][0] = dp[i - 1][1];
            }
            else if (j == 9) {
                dp[i][9] = dp[i - 1][8];
            }
            else {
                dp[i][j] = dp[i - 1][j + 1] + dp[i - 1][j - 1];
            }
            dp[i][j] = dp[i][j] % mod;
        }
    }
    int ans = 0;
    for (int i = 0;i < 10;i++) {
        ans = (ans + dp[n][i]) % mod;
    }
    cout << ans;
    return 0;
}
