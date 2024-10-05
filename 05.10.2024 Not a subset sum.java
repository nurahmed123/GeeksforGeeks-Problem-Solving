class Solution {
    public long findSmallest(int[] arr) {
        long sum=0;
        for(int i:arr){
            if(i>sum+1) return sum+1;
            sum += i;
        }
        return sum+1;
    }
}
