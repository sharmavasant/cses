#include <bits/stdc++.h>
using namespace std;

long long int fact(int n) {
    long long int product = 1;
    for(int i=1;i<=n;i++) {
        product *= i;
    }
    return product;
}

int main() {
    string s;
    cin>>s;
    int n = s.size();
    unordered_map<char,int> mp;
    for(auto ch: s) {
        mp[ch]++;
    }
    long long int upper = fact(n);
    for(auto it: mp) {
        long long int lower = fact(it.second);
        upper = upper/lower;
    }
    cout<<(int)upper<<endl;
    sort(s.begin(),s.end());
    vector<string> permutations;
    do {
        permutations.push_back(s);
    } while(next_permutation(s.begin(),s.end()));
    for(auto permutate: permutations) {
        cout<<permutate<<endl;
    }
    return 0;
}