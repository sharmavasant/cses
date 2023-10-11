#include <bits/stdc++.h>
using namespace std;

vector<string> f(int n) {
    if(n == 0) {
        return {"0"};
    }
    if(n == 1) {
        return {"0","1"};
    }
    vector<string> rec = f(n-1);
    vector<string> main;
    for(int i=0;i<rec.size();i++) {
        string s = rec[i];
        main.push_back("0"+s);
    }
    for(int i=rec.size()-1;i>=0;i--) {
        string s = rec[i];
        main.push_back("1"+s);
    }
    return main;
}

int main() {
    int n;
    cin>>n;
    vector<string> ans = f(n);
    for(int i=0;i<ans.size();i++) {
        cout<< ans[i] << endl;
    }
    return 0;
}