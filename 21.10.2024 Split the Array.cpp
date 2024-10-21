class Solution {
  public:
    const int MOD = 1e9 + 7;

    // Function to calculate (base^exp) % mod using fast exponentiation
    long long power(long long base, long long exp, long long mod) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }

    int countgroup(vector<int>& arr) {
        int n = arr.size();
        int totalXOR = 0;

        // Calculate the XOR of the entire array
        for (int num : arr) {
            totalXOR ^= num;
        }

        // If total XOR is not zero, no valid splits are possible
        if (totalXOR != 0) {
            return 0;
        }

        // If total XOR is zero, the number of valid splits is (2^(n-1) - 1) % MOD
        return (power(2, n - 1, MOD) - 1 + MOD) % MOD;
    }
};
