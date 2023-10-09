#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll f(int idx, ll bag1, ll bag2, vector<ll> &arr) {
    if(idx == 0) {
        ll r1 = bag1+arr[0];
        ll r2 = bag2+arr[0];
        ll ans = min(abs(r1-bag2),abs(r2-bag1));
        return ans;
    }
    ll temp1 = f(idx-1,bag1+arr[idx],bag2,arr);
    ll temp2 = f(idx-1,bag1,bag2+arr[idx],arr);
    return min(temp1,temp2);
}

int main() {
    int n;
    cin>>n;
    vector<ll> arr(n);
    for(auto &i: arr) {
        cin>>i;
    }
    int res = f(n-1,0,0,arr);
    cout<<res;
    return 0;
}