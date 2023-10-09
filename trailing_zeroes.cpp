#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int cnt = 0;
    int x = 0;
    while(x<=n) {
        x += 5;
        if(x>n) break;
        int y = x;
        while(y%5==0) {
            y /= 5;
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}