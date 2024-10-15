class Solution {
  public:
    // Function to count the number of subarrays which adds to the given sum.
    int subArraySum(vector<int>& arr, int tar) {
        //Your code here
        unordered_map<int, int> cum_sum_freq;
        int current_sum = 0;
        int count = 0;
        
        for (int i = 0; i < arr.size(); i++) {
            current_sum += arr[i];
            
            if (current_sum == tar) {
                count++;
            }
            
            if (cum_sum_freq.find(current_sum - tar) != cum_sum_freq.end()) {
                count += cum_sum_freq[current_sum - tar];
            }
            
            cum_sum_freq[current_sum]++;
        }
        
        return count;
    }
};
