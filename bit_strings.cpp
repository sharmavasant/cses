#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main() {
    int n;
    cin>>n;
    long long int ans = 1;
    int x = 0;
    while(x<n) {
        ans = ((ans%mod)*2)%mod;
        x++;
    }
    cout<<ans%mod;
    return 0;
}