#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int t;
    cin>>t;
    while(t--) {
        long long int x, y;
    //    cin>>x>>y;
    //     long long int n = max(x,y);
    //     vector<vector<long long int>> matrix(n,vector<long long int>(n,0));
    //     long long int m = 1;
    //     long long int adder = 0;
    //     for(long long int i=0;i<n;i++) {
    //         matrix[i][i] = m;
    //         adder+=2;
    //         m+=adder;
    //     }
    //     bool flag = 0;
    //     for(long long int i=1;i<n;i++) {
    //         if(flag == 0) {
    //             for(long long int j=i-1;j>=0;j--) {
    //                 matrix[j][i] = matrix[j+1][i]-1;
    //             }
    //             for(long long int k=i-1;k>=0;k--) {
    //                 matrix[i][k] = matrix[i][k+1]+1;
    //             }
    //             flag = 1;
    //         }
    //         else if(flag == 1) {
    //             for(long long int j=i-1;j>=0;j--) {
    //                 matrix[j][i] = matrix[j+1][i]+1;
    //             }
    //             for(long long int k=i-1;k>=0;k--) {
    //                 matrix[i][k] = matrix[i][k+1]-1;
    //             }
    //             flag = 0;
    //         }
    //     }
    //     cout<<matrix[x-1][y-1]<<endl;
    cin>>y>>x;
    if(y>x) {
        if(y%2) {
            cout<<(y-1)*(y-1)+1+(x-1);
        }
        else {
            cout<<y*y-(x-1);
        }
    }
    else {
        if(x%2) {
            cout<<x*x-(y-1);
        }
        else {
            cout<<(x-1)*(x-1)+1+(y-1);
        }
    }
    cout<<endl;
    }
    return 0;
}