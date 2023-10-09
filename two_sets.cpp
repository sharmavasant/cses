#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    if(n%4 == 0 || (n+1)%4 == 0) {
        cout<<"YES"<<endl;
        if(n%4 == 0) {
            int x = 2;
            bool flag = 0;
            cout<<n/2<<endl;
            while(x<=n) {
                cout<<x<<" ";
                if(flag == 0) {
                    x++;
                    flag = 1;
                }
                else if(flag == 1) {
                    x += 3;
                    flag = 0;
                }
            }
            cout<<endl;
            cout<<n/2<<endl;
            flag = 0;
            x=0;
            while(x<=n) {
                if(x != 0 && x != n+1) {
                    cout<<x<<" ";
                }
                if(flag == 0) {
                    x++;
                    flag = 1;
                }
                else if(flag == 1) {
                    x += 3;
                    flag = 0;
                }
            }
        }
        if((n+1)%4 == 0) {
            int x = 0;
            bool flag = 1;
            cout<<n/2<<endl;
            while(x<=n) {
                if(x != 0 && x != n+1) {
                    cout<<x<<" ";
                }
                if(flag == 0) {
                    x++;
                    flag = 1;
                }
                else if(flag == 1) {
                    x += 3;
                    flag = 0;
                }
            }
            cout<<endl;
            cout<<n/2+1<<endl;
            x=1;
            flag = 0;
            while(x<=n) {
                cout<<x<<" ";
                if(flag == 0) {
                    x++;
                    flag = 1;
                }
                else if(flag == 1) {
                    x += 3;
                    flag = 0;
                }
            }
        }
    }
    else {
        cout<<"NO"<<endl;
    }
    return 0;
}