

//User function Template for Java

class Solution
{

	public int minDifference(int arr[], int n) 
	{ 
	    // Your code goes here
	     int sum = 0;
	    for(int i=0; i<n; i++)
	    {
	        sum += arr[i];
	    }
	    boolean dp[][] = new boolean[n+1][sum+1];
	    
	    for(int i =0 ;i<=n ;i++)
	    {
	        for(int j =0; j<=sum; j++)
	        {
	            if(j==0) dp[i][j]=true;
	            
	            else if(i==0) dp[i][j] = false;
	            
	            else
	            {
	                dp[i][j] = dp[i-1][j];
	                if(j>=arr[i-1]) // sum>=ele
	                dp[i][j] = dp[i][j] || dp[i-1][j-arr[i-1]];
	            }
	            
	        }
	    }
	    int ans = Integer.MAX_VALUE;
	    for(int j=sum/2; j>=0 ;j--)
	    {
	        if(dp[n][j]==true)
	        {
	            ans = sum - 2 *j;
	            break;
	        }
	    }
	    return ans;
	} 
}