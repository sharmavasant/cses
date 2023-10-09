#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++) {
        int x;
        cin>>x;
        arr.push_back(x);
    }
    int maxi = arr[0];
    long long int ans = 0;
    for(int i=1;i<n;i++) {
        if(arr[i]<maxi) {
            ans += maxi-arr[i];
        }
        maxi = max(maxi,arr[i]);
    }
    cout<<ans;
    return 0;
}