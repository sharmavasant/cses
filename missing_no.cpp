#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int ans = 0;
    for(int i=1;i<=n-1;i++) {
        int x;
        cin>>x;
        ans = ans^x;
    }
    for(int i=1;i<=n;i++) {
        ans = ans^i;
    }
    cout<<ans;
    return 0;
}