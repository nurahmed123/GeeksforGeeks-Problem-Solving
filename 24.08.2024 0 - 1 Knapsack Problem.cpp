class Solution {
  public:
    // Function to return max value that can be put in knapsack of capacity W.
    int solveRec(int ind, vector<int>& wt, vector<int>& val, int capacity, vector<vector<int>>& dp) {
        // Base condition
        if (ind == 0) {
            if (wt[0] <= capacity)
                return val[0];
            else
                return 0;
        }
        
        // If result is already calculated, return it
        if (dp[ind][capacity] != -1) 
            return dp[ind][capacity];
        
        // Option 1: Exclude the current item
        int exclude = solveRec(ind - 1, wt, val, capacity, dp);
        
        // Option 2: Include the current item (if possible)
        int include = 0;
        if (wt[ind] <= capacity) 
            include = val[ind] + solveRec(ind - 1, wt, val, capacity - wt[ind], dp);
        
        // Return the maximum of both options
        dp[ind][capacity] = max(include, exclude);
        return dp[ind][capacity];
    }
    
    int knapSack(int W, vector<int>& wt, vector<int>& val) {
        int n = wt.size();
        // Create a DP table and initialize it with -1
        vector<vector<int>> dp(n, vector<int>(W + 1, -1));
        return solveRec(n - 1, wt, val, W, dp);
    }
};
