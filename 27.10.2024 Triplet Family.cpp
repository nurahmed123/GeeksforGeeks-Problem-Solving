class Solution {
  public:
    bool findTriplet(vector<int>& arr) {
        // Your code here
        int n = arr.size();
        sort(arr.begin(), arr.end());  
        
        for (int k = n - 1; k >= 2; k--) {   
            int target = arr[k];
            int i = 0, j = k - 1;  
            
            while (i < j) {  
                int sum = arr[i] + arr[j];
                if (sum == target) {
                    return true;  
                } else if (sum < target) {
                    i++;  
                } else {
                    j--;  
                }
            }
        }
        
        return false;  // No such triplet found
    }
};
