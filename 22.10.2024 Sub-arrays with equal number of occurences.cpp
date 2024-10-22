class Solution {
  public:
    int sameOccurrence(vector<int>& arr, int x, int y) {
        //code here
        unordered_map<int, int> diffMap;
        int diff = 0;  // This represents the difference between counts of x and y.
        int countX = 0, countY = 0;
        int result = 0;

        // To handle cases where initially, x and y are both 0 times.
        diffMap[0] = 1;

        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] == x) {
                countX++;
            }
            if (arr[i] == y) {
                countY++;
            }

            // Calculate current difference between counts of x and y.
            diff = countX - countY;

            // If this difference has been seen before, add the count of such subarrays.
            if (diffMap.find(diff) != diffMap.end()) {
                result += diffMap[diff];
            }

            // Update the map with the current difference.
            diffMap[diff]++;
        }

        return result;
    }
};
