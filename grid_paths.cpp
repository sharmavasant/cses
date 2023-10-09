#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>>s;
    vector<vector<int>> dp(7,vector<int>(7,0));
    dp[0][0] = 1;
    int k = 0;
    for(int i=0;i<7;i++) {
        dp[i][0] = 1;
        dp[0][i] = 1;
    }
    for(int i=1;i<7;i++) {
        for(int j=1;j<7;j++) {
            char ch = s[k++];
            if(ch == '?') {
                if(i>0) {
                    dp[i][j] += dp[i-1][j];
                }
                if(j>0) {
                    dp[i][j] += dp[i][j-1];
                }
                if(i<6) {
                    dp[i][j] += dp[i+1][j];
                }
                if(j<6) {
                    dp[i][j] += dp[i][j+1];
                }
            }
            else {
                if(ch == 'U' && i>0) {
                    dp[i][j] += dp[i-1][j];
                }
                else if(ch == 'D' && i<6) {
                    dp[i][j] += dp[i+1][j];
                }
                else if(ch == 'L' && j>0) {
                    dp[i][j] += dp[i][j-1];
                }
                else if(ch == 'R' && j<6) {
                    dp[i][j] += dp[i][j+1];
                }
            }
        }
        cout<<dp[6][0];
    }
    return 0;
}