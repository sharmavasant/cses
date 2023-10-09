#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    int i=0, j=0;
    int n = s.size();
    int count = 1;
    while(j<n) {
        if(s[j] == s[j+1]) {
            j++;
        }
        else {
            j++;
            i=j;
        }
        count = max(count,j-i+1);
    }
    cout<<count;
    return 0;
}
