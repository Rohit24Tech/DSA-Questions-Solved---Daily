Solution: O(n)

  class Solution {
    public int removeElement(int[] nums, int val) {
        int count=0, n = nums.length;
        for(int i=0; i< n; i++){
            if(nums[i]!=val){
                nums[count]=nums[i];
                //n--;
                count++;
            }
        }
        return count;
    }
}
