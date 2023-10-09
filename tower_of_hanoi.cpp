#include <bits/stdc++.h>
using namespace std;

void hanoi(int a, int c, int b, int n) {
    if(n==1) {
        cout<<a<<" "<<c<<endl;
        return;
    }
    hanoi(a,b,c,n-1);
    cout<<a<<" "<<c<<endl;
    hanoi(b,c,a,n-1);
}

int main() {
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    hanoi(1,3,2,n);
    return 0;
}