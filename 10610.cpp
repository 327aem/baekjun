#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool compare(char a, char b){
    return a > b;
}

int main(void){
    string n;
    cin >> n;
    long long sum = 0;
    bool flag = false;
    for (long long i = 0; i < n.size(); i++) {
        sum += (n[i] - '0');
        if (!(n[i] - '0'))
            flag = true;
    }
    if (sum % 3 || !flag)
        cout << -1 << "\n";
    else
    {
        sort(n.begin(), n.end(), compare);
        cout << n << "\n";
    }
    return 0;
}
