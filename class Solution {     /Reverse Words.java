
class Solution {
    // Function to reverse words in a given string.
    String reverseWords(String S) {
        
        String[] words = S.split("\\.");
        
        StringBuilder result = new StringBuilder();
        
        for (int i = words.length - 1; i >= 0; i--) 
        {
            result.append(words[i]);
            if (i != 0) {
                result.append(".");
            }
        }
        
        return result.toString();
    }
}
