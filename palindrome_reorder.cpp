#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    unordered_map<char,int> mp;
    for(auto ch: s) {
        mp[ch]++;
    }
    int cnt = 0;
    char c;
    for(auto it: mp) {
        if(it.second%2 == 1) {
            c = it.first;
            cnt++;
        }
    }
    if(cnt == 1) {
        string s1 = "", s2 = "", s3 = "";
        for(auto it: mp) {
            if(it.first != c) {
                int times = (it.second)/2;
                while(times--) s1+=it.first;
            }
        }
        while(mp[c]--) {
            s3+=c;
        }
        s2 += s1;
        reverse(s2.begin(),s2.end());
        cout<<s1+s3+s2;
    }
    else if(cnt == 0) {
        string s1 = "", s2 = "";
        for(auto it: mp) {
            int times = (it.second)/2;
            while(times--) s1+=it.first;
        }
        s2 += s1;
        reverse(s2.begin(),s2.end());
        cout<<s1+s2;
    }
    else if(cnt > 1) {
        cout<<"NO SOLUTION";
    }
}