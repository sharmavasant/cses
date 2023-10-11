#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin>>n;
    for(long long int i=1;i<=n;i++) {
        long long int total_combinations = ((i*i)*((i*i)-1))/2;
        cout<< total_combinations - 4*(i-1)*(i-2) <<endl;
    }
    return 0;
}