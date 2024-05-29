class Solution {
  public:
    int findWinner(int n, int x, int y) {
        vector<int>dp(n+1,0);
        for (int i=1;i<=n;i++){
            dp[i]=!dp[i-1] || (i-x>=0 && !dp[i-x]) || (i-y>=0 && !dp[i-y]) ;
        }
        return dp[n];
    }
};