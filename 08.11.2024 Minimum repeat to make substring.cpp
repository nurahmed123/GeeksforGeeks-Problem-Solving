class Solution {
  public:
    int minRepeats(string& s1, string& s2) {
        string repeated = s1;
        int count = 1;

        while (repeated.length() < s2.length()) {
            repeated += s1;
            count++;
        }

        if (repeated.find(s2) != string::npos) {
            return count;
        }

        repeated += s1;
        count++;

        if (repeated.find(s2) != string::npos) {
            return count;
        }

        return -1;
    }
};
